module.exports = grammar({
  name: 'aeria',
  extras: $ => [
    $.comment,
    /[\s\ufeff\u2060\u200b\u00a0]/
  ],
  rules: {
    program: $ => repeat($.declaration),
    comment: $ => prec(1, token(
      seq('--', /.*/)
    )),
    collection_name: $ => token(/[A-Z][a-zA-Z0-9]+/),
    declaration: $ => seq(
      'collection',
      $.collection_name,
      $.declaration_block,
    ),
    properties_block: $ => seq(
      'properties',
      '{',
      optional(
        repeat(
          $.schema_column,
        )
      ),
      '}'
    ),
    declaration_block: $ => seq(
      '{',
      repeat(
        choice(
          $.properties_block,
          $.formLayout
        ),
      ),
      '}'
    ),
    identifier: $ => token(/([a-zA-Z0-9]|_|-)+/),
    number: $ => /\d+/,
    boolean: $ => choice('true', 'false'),
    quoted_string: $ => seq(
      '"',
      /([^"]+)/,
      '"'
    ),
    binary_operator: $ => choice(
      '==',
      '!=',
      '>=',
      '<=',
      'in',
      '>',
      '<',
    ),
    logical_concatenator_operator: $ => choice(
      '&&',
      '||',
    ),
    schema_column: $ => seq(
      $.identifier,
      $.schema_type,
    ),
    code: $ => /.{1,100}/,
    schema_type: $ => choice(
      'str',
      'int',
      seq(
        'getter',
        seq(
          '()',
          '=>',
          '{'
        ),
        $.code,
        '}',
      )
    ),
    binary_operation: $ => seq(
      field('field_name', $.identifier),
      $.binary_operator,
      choice(
        $.number,
        $.boolean,
        $.quoted_string,
      ),
    ),
    logic_operation: $ => seq(
      $.binary_operation,
      optional(
        seq(
          $.logical_concatenator_operator,
          $.binary_operation,
        )
      )
    ),
    condition_expr: $ => seq(
      '@cond',
      '(',
      $.logic_operation,
      ')'
    ),
    condition: $ => seq(
      'if',
      $.condition_expr
    ),
    formLayout: $ => seq(
      'formLayout',
      '{',
      choice(
        seq(
          'fields',
          '{',
          repeat(
            seq(
              field('field_name', $.identifier),
              '{',
              choice(
                $.condition
              ),
              '}'
            )
          ),
          '}'
        )
      ),
      '}'
    )
  }
})



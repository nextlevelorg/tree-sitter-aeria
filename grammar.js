const PREC = {
  COMMENT: 1
}

module.exports = grammar({
  name: 'aeria',
  extras: $ => [
    $.comment,
  ],

  rules: {
    program: $ => repeat($.declaration),

    comment: $ => prec(PREC.COMMENT, token(
      seq('--', /.*/)
    )),

    type: $ => choice(
      token('str'),
      token('int'),
    ),

    capitalized_identifier: $ => token(/[A-Z][a-zA-Z0-9]+/),
    snakecased_identifier: $ => token(/([a-z0-9]|_)+/),

    collection_declaration: $ => prec(1, seq(
      'collection',
      $.capitalized_identifier,
      $.statement_block
    )),

    router_declaration: $ => prec(1, seq(
      'router',
      optional($.capitalized_identifier),
      $.statement_block
    )),

    contract_declaration: $ => prec(1, seq(
      'contract',
      $.capitalized_identifier,
      $.statement_block
    )),

    declaration: $ => choice(
      $.collection_declaration
    ),

    statement_block: $ => seq(
      '{',
      optional(
        repeat(
          choice(
            $.column_declaration,
            // $.assignment_expression,
            // $.block_attribute_declaration
          )
        )
      ),
      '}'
    ),

    column_declaration: $ => seq(
      $.snakecased_identifier,
      $.type,
      // $.column_type,
      // optional(repeat($.attribute))
    )
  }
})

[
 "str"
 "int"
 "getter"
] @type.builtin

[
 "@cond"
] @function.builtin

(number) @number
(quoted_string) @string

[
 "collection"
] @keyword

(comment) @comment

((code) @injection.content
        (#set! injection.language "javascript")
        (#set! injection.combined)
        )

; [
;  ","
; ] @punctuation.delimiter


[
 "("
 ")"
 "{"
 "}"
] @punctuation.bracket

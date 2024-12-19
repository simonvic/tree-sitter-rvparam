(class
  name: (identifier) @name
  (#set! "kind" "Class")
  ) @symbol

(enum
  (#set! "kind" "Enum")
  ) @symbol

(enumBody
  (identifier) @name
  (#set! "kind" "EnumMember")
  ) @symbol

(entrySimple
  name: (identifier) @name
  (#set! "kind" "Property")
  ) @symbol

(entryArray
  name: (identifier) @name
  (#set! "kind" "Array")
  ) @symbol


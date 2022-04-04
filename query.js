const Parser = require("tree-sitter")
const Imp = require("./bindings/node")
const { readFileSync } = require("fs")

const { Query } = Parser
const parser = new Parser()
parser.setLanguage(Imp)

const args = process.argv.slice(2)

if (args.length != 1) {
  console.error("Usage: node lint.js <file to lint>")
  process.exit(1)
}

// Load the file passed as an argument
const sourceCode = readFileSync(args[0], "utf8")

const tree = parser.parse(sourceCode)

const query = new Query(
  Imp,
  "((asgn name: (id) @left _ @right) (#eq? @left y)) @y"
)

console.log(
  query
    .captures(tree.rootNode)
    .filter((c) => c.name === "y")
    .map((c) => tree.getText(c.node))
)

const character = "#";
const count = 8;

function padRow(rowNumber, rowCount) {
  return " ".repeat(rowCount - rowNumber) + character.repeat(2 * rowNumber - 1) + " ".repeat(rowCount - rowNumber);
}

function buildPyramid(rowCount, inverted = false) {
  const rows = [];
  for (let i = 1; i <= rowCount; i++) {
    if (inverted) {
      rows.unshift(padRow(i, rowCount));
    } else {
      rows.push(padRow(i, rowCount));
    }
  }
  return rows.join("\n");
}

const result = buildPyramid(count, true);
console.log(result);

/* URL: https://bigfrontend.dev/problem/implement-Array-prototype.flat */

function flat(arr: [], depth = 1) {
  const res = [];

  for (const item of arr) {
    if (Array.isArray(item) && depth > 0) res.push(...flat(item, depth - 1));
    else res.push(item);
  }

  return res;
}

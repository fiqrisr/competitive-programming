/* URL: https://bigfrontend.dev/problem/most-frequently-occurring-character */

function count(str: string): string | string[] {
  const chars: Record<string, number> = {};
  let max = 0;

  for (const char of str) {
    chars[char] = (chars[char] || 0) + 1;
    max = chars[char] > max ? chars[char] : max;
  }

  const res = Object.entries(chars).filter(([, count]) => count === max).map(([char]) => char);

  if (res.length === 1)
    return res[0];

  return res;
}

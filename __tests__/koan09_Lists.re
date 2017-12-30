open Jest;

open ExpectJs;

describe("Lists", () => {
  test("List length", () => {
    let list = [1, 2, 3];
    expect(List.length(list)) |> toBe(3);
  });
  test("Get the first element of a list", () => {
    let list = [1, 2, 3];
    expect(List.hd(list)) |> toBe(1);
  });
  test("Get the tail of a list", () => {
    let list = [1, 2, 3];
    expect(List.tl(list)) |> toEqual([2, 3]);
  });
  test("Get the nth element of a list", () => {
    let list = [1, 2, 3];
    expect(List.nth(list, 1)) |> toBe(2);
  });
  test("Reverse a list", () => {
    let list = [1, 2, 3];
    expect(List.rev(list)) |> toEqual([3, 2, 1]);
  });
  test("Append a list to a list", () => {
    let list1 = [1, 2, 3];
    let list2 = [4, 5, 6];
    expect(List.append(list1, list2)) |> toEqual([1, 2, 3, 4, 5, 6]);
  });
  test("flatten a list of lists", () => {
    let list = [[1, 2], [3, 4], [5, 6]];
    expect(List.flatten(list)) |> toEqual([1, 2, 3, 4, 5, 6]);
  });
  test("Map a list adding one to each element", () => {
    let list = [1, 2, 3, 4, 5, 6];
    let addOne = x => x + 1;
    expect(List.map(addOne, list)) |> toEqual([2, 3, 4, 5, 6, 7]);
  });
  test("Sum all elements of a list with fold left", () => {
    let list = [1, 2, 3, 4, 5, 6];
    expect(List.fold_left((acc, el) => acc + el, 0, list)) |> toEqual(21);
  });
});

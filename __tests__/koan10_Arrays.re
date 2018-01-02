open Jest;

open ExpectJs;

describe("Arrays", () => {
  test("Arrays can be created from a list", () => {
    let arr = Array.of_list([1, 2, 3]);
    expect(arr) |> toEqual([|1, 2, 3|]);
  });
  test("Arrays can also be turned into lists", () => {
    let list = Array.to_list([|1, 2, 3|]);
    expect(list) |> toEqual([1, 2, 3]);
  });
  test("Length gives the number of elements", () => {
    let length = Array.length([|1, 2, 3|]);
    expect(length) |> toEqual(3);
  });
  test("Two arrays can be appended on to one array", () => {
    let array = Array.append([|1, 2, 3|], [|4, 5, 6|]);
    expect(array) |> toEqual([|1, 2, 3, 4, 5, 6|]);
  });
  test("It is easy to create an empty array with make", () => {
    let array = Array.make(0, ());
    expect(array) |> toEqual([||]);
  });
  test(
    "It is easy to create an array of length N with all the same value M", () => {
    let array = Array.make(5, 0);
    expect(array) |> toEqual([|0, 0, 0, 0, 0|]);
  });
  test("init creates an array based on a function", () => {
    let array = Array.init(5, x => x);
    expect(array) |> toEqual([|0, 1, 2, 3, 4|]);
  });
});

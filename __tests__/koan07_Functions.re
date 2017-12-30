open Jest;

open ExpectJs;

describe("Functions", () => {
  test("Should declare a annonimous function", () => {
    let addOne = x => x + 1;
    expect(addOne(1)) |> toEqual(2);
  });
  test("Function with zero arguments", () => {
    let t = () => 2;
    let two = t();
    expect(two) |> toEqual(2);
  });
  test("Function with two arguments", () => {
    let sumTwoNumbers = (x, y) => x + y;
    expect(sumTwoNumbers(5, 6)) |> toEqual(11);
  });
  test("Function partially applied", () => {
    let sumTwoNumbers = (x, y) => x + y;
    let sumOne = sumTwoNumbers(1);
    expect(sumOne(10)) |> toEqual(11);
  });
  test("Passing a function as a parameter", () => {
    let addOne = x => x + 1;
    let applyFnToNumber = (number, fn) => fn(number);
    expect(applyFnToNumber(5, addOne)) |> toEqual(6);
  });
});

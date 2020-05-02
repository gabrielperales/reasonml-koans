open Jest;

open ExpectJs;

describe("Mathematical Operators", () => {
  test("Addition operator '+'", () => {
    expect(2 + 5) |> toEqual(7) |> ignore;
    expect(2 + (-5)) |> toEqual(-3) |> ignore;
    expect(1.0 +. 1.5) |> toEqual(2.5);
  });
  test("Substraction operator '-'", () => {
    expect(1 - 5) |> toEqual(-4) |> ignore;
    expect(8 - 3) |> toEqual(5) |> ignore;
    expect(8.0 -. 3.0) |> toEqual(5.0);
  });
  test("Multiplication operator '*'", () => {
    expect(2 * 5) |> toEqual(10) |> ignore;
    expect(2 * 5) |> toEqual(10) |> ignore;
    expect(2.0 *. 5.0) |> toEqual(10.0);
  });
  test("Division operator '/'", () => {
    expect(6 / 2) |> toEqual(3) |> ignore;
    expect(8 / 4) |> toEqual(2) |> ignore;
    expect(10.0 /. 4.0) |> toEqual(2.5);
  });
});

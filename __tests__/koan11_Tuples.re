open Jest;

open ExpectJs;

describe("Tuples", () =>
  test("Can contain different types of values", () => {
    let tuple = (1, "a string");
    let (first, second) = tuple;
    expect(first) |> toBe(1) |> ignore;
    expect(second) |> toBe("a string");
  })
);

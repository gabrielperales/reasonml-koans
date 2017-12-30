open Jest;

open ExpectJs;

describe("Comparison Operators", () => {
  test("== test for equality", () =>
    expect(1 === 1) |> toBeTruthy
  );
  test("!== for inequality", () =>
    expect(1 !== 2) |> toBeTruthy
  );
  test("< test for less than", () =>
    expect(1 < 2) |> toBeTruthy
  );
  test("<= test for less than or equal", () =>
    expect(1 <= 1) |> toBeTruthy
  );
  test(">= test for greater than or equal", () =>
    expect(1 >= 1) |> toBeTruthy
  );
  test("floats are comparable", () =>
    expect(1.0 < 1.1) |> toBeTruthy
  );
  test("strings are comparable", () =>
    expect("1" == "1") |> toBeTruthy
  );
  test("chars are comparable", () =>
    expect('a' == 'a') |> toBeTruthy
  );
  test("max returns the mas of two args", () =>
    expect(max(1, 2)) |> toEqual(2)
  );
  test("min returns the max of two args", () =>
    expect(min(1, 2)) |> toEqual(1)
  );
  test("compare returns -1 for LT, 0 for EQ and 1 for GT", () =>
    expect(compare(1, 2)) |> toEqual(-1)
  );
});

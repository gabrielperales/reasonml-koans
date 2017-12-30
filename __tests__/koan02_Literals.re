open Jest;

open ExpectJs;

describe("Literals", () => {
  test("strings are enclosed in double quotes", () =>
    expect("string") |> toBe("string")
  );
  test("Expect 1 to be not equal to 2", () =>
    expect(1) |> not_ |> toEqual(2)
  );
  test("characters are enclosed in single quotes", () =>
    expect('a') |> toEqual('a')
  );
  test("floats have a decimal", () =>
    expect(1.0) |> toEqual(1.0)
  );
  test("floats can be negative", () =>
    expect(-1.0) |> toBeLessThan(0.0)
  );
  test("integer can be negative", () =>
    expect(-1) |> toBeLessThan(0)
  );
});

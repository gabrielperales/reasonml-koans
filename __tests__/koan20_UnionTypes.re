open Jest;

open ExpectJs;

describe("Expects", () => {
  test("Expect true to be truthy", () =>
    expect(true) |> toBeTruthy
  );
  test("Expect 1 to be equal to 1", () =>
    expect(1) |> toEqual(1)
  );
  test("Expect 1 to be not equal to 2", () =>
    expect(1) |> not_ |> toEqual(2)
  );
});

open Jest;

open ExpectJs;

describe("Logical Operators", () => {
  test("OR operator", () => {
    expect(true || false) |> toBeTruthy |> ignore;
    expect(false || false) |> toBeFalsy |> ignore;
    expect(false || true) |> toBeTruthy;
  });
  test("AND operator", () => {
    expect(false && true) |> toBeFalsy |> ignore;
    expect(false && false) |> toBeFalsy |> ignore;
    expect(true && true) |> toBeTruthy;
  });
  test("NOT operator", () => {
    expect(! false) |> toBeTruthy |> ignore;
    expect(! (! false)) |> toBeFalsy |> ignore;
    expect(! true) |> toBeFalsy |> ignore;
    expect(! true) |> toBeFalsy;
  });
});

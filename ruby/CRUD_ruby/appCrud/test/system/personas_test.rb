require "application_system_test_case"

class PersonasTest < ApplicationSystemTestCase
  setup do
    @persona = personas(:one)
  end

  test "visiting the index" do
    visit personas_url
    assert_selector "h1", text: "Personas"
  end

  test "should create persona" do
    visit personas_url
    click_on "New persona"

    fill_in "Identification", with: @persona.identification
    fill_in "Name", with: @persona.name
    fill_in "Phone", with: @persona.phone
    click_on "Create Persona"

    assert_text "Persona was successfully created"
    click_on "Back"
  end

  test "should update Persona" do
    visit persona_url(@persona)
    click_on "Edit this persona", match: :first

    fill_in "Identification", with: @persona.identification
    fill_in "Name", with: @persona.name
    fill_in "Phone", with: @persona.phone
    click_on "Update Persona"

    assert_text "Persona was successfully updated"
    click_on "Back"
  end

  test "should destroy Persona" do
    visit persona_url(@persona)
    click_on "Destroy this persona", match: :first

    assert_text "Persona was successfully destroyed"
  end
end

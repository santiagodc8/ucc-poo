class CreatePersonas < ActiveRecord::Migration[7.0]
  def change
    create_table :personas do |t|
      t.string :name
      t.string :phone
      t.string :identification

      t.timestamps
    end
  end
end

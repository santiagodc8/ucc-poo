class PersonasController < ApplicationController
  before_action :set_persona, only: %i[ show edit update destroy ]

  # GET /personas or /personas.json
  def index
    @personas = Persona.all
  end

  # GET /personas/1 or /personas/1.json
  def show
  end

  # GET /personas/new
  def new
    @persona = Persona.new
  end

  # GET /personas/1/edit
  def edit
  end

  # POST /personas or /personas.json
  def create
    @persona = Persona.new(persona_params)

    respond_to do |format|
      if @persona.save
        format.html { redirect_to persona_url(@persona), notice: "Persona was successfully created." }
        format.json { render :show, status: :created, location: @persona }
      else
        format.html { render :new, status: :unprocessable_entity }
        format.json { render json: @persona.errors, status: :unprocessable_entity }
      end
    end
  end

  # PATCH/PUT /personas/1 or /personas/1.json
  def update
    respond_to do |format|
      if @persona.update(persona_params)
        format.html { redirect_to persona_url(@persona), notice: "Persona was successfully updated." }
        format.json { render :show, status: :ok, location: @persona }
      else
        format.html { render :edit, status: :unprocessable_entity }
        format.json { render json: @persona.errors, status: :unprocessable_entity }
      end
    end
  end

  # DELETE /personas/1 or /personas/1.json
  def destroy
    @persona.destroy

    respond_to do |format|
      format.html { redirect_to personas_url, notice: "Persona was successfully destroyed." }
      format.json { head :no_content }
    end
  end

  private
    # Use callbacks to share common setup or constraints between actions.
    def set_persona
      @persona = Persona.find(params[:id])
    end

    # Only allow a list of trusted parameters through.
    def persona_params
      params.require(:persona).permit(:name, :phone, :identification)
    end
end

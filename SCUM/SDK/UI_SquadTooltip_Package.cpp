/**
 * Name: SCUM
 * Version: 0.7.162
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> Function UI_SquadTooltip.UI_SquadTooltip_C.SetData
	 * 		Flags  -> ()
	 * Parameters:
	 * 		class FString                                      Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		class FString                                      Infromation                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	 * 		struct FConZSquadEmblem                            EmblemData                                                 (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 */
	void UUI_SquadTooltip_C::SetData(const class FString& Name, const class FString& Infromation, const struct FConZSquadEmblem& EmblemData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function UI_SquadTooltip.UI_SquadTooltip_C.SetData");
		
		UUI_SquadTooltip_C_SetData_Params params {};
		params.Name = Name;
		params.Infromation = Infromation;
		params.EmblemData = EmblemData;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UUI_SquadTooltip_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UUI_SquadTooltip_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("WidgetBlueprintGeneratedClass UI_SquadTooltip.UI_SquadTooltip_C");
		return ptr;
	}

}



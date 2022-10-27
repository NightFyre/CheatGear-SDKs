/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C.SetMissionDebugText
	 * 		Flags  -> (Public, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		class FText                                        Text                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
	 * 		float                                              TextSize                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		float                                              Duration                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FLinearColor                                TextColor                                                  (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		bool                                               FacePlayer                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	 */
	void UBPInterface_TempHudTextProvider_C::SetMissionDebugText(const class FText& Text, float TextSize, float Duration, const struct FLinearColor& TextColor, bool FacePlayer)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C.SetMissionDebugText");
		
		UBPInterface_TempHudTextProvider_C_SetMissionDebugText_Params params {};
		params.Text = Text;
		params.TextSize = TextSize;
		params.Duration = Duration;
		params.TextColor = TextColor;
		params.FacePlayer = FacePlayer;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBPInterface_TempHudTextProvider_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBPInterface_TempHudTextProvider_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass BPInterface_TempHudTextProvider.BPInterface_TempHudTextProvider_C");
		return ptr;
	}

}



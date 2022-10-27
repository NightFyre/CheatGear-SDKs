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
	 * 		Name   -> Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldEquipped
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AShield*                                     Shield                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AOakCharacter*                               Equipper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAugmentData                                StackData                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UShieldAugAtt_Beskar_C::K2_OnShieldEquipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldEquipped");
		
		UShieldAugAtt_Beskar_C_K2_OnShieldEquipped_Params params {};
		params.Shield = Shield;
		params.Equipper = Equipper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StackData != nullptr)
			*StackData = params.StackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0178F8F0
	 * 		Name   -> Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldUnequipped
	 * 		Flags  -> (Event, Public, HasOutParms, BlueprintCallable, BlueprintEvent, Const)
	 * Parameters:
	 * 		class AShield*                                     Shield                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AOakCharacter*                               Equipper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		struct FAugmentData                                StackData                                                  (BlueprintVisible, Parm, OutParm, ReferenceParm, NoDestructor)
	 */
	void UShieldAugAtt_Beskar_C::K2_OnShieldUnequipped(class AShield* Shield, class AOakCharacter* Equipper, struct FAugmentData* StackData)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C.K2_OnShieldUnequipped");
		
		UShieldAugAtt_Beskar_C_K2_OnShieldUnequipped_Params params {};
		params.Shield = Shield;
		params.Equipper = Equipper;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (StackData != nullptr)
			*StackData = params.StackData;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UShieldAugAtt_Beskar_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UShieldAugAtt_Beskar_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("BlueprintGeneratedClass ShieldAugAtt_Beskar.ShieldAugAtt_Beskar_C");
		return ptr;
	}

}



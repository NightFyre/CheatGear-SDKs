/**
 * Name: Sea_of_Thieves
 * Version: 9505844
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
	 * 		Name   -> PredefinedFunction UBreakableActorAudioComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakableActorAudioComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BreakableActorFramework.BreakableActorAudioComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x040AD2A0
	 * 		Name   -> Function BreakableActorFramework.BreakableActorBase.Multicast_WasDefeated
	 * 		Flags  -> (Net, NetReliable, Native, Event, NetMulticast, Protected)
	 * Parameters:
	 * 		class AActor*                                      InInstigator                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 * 		class AActor*                                      InDirectInstigator                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ABreakableActorBase::Multicast_WasDefeated(class AActor* InInstigator, class AActor* InDirectInstigator)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BreakableActorFramework.BreakableActorBase.Multicast_WasDefeated");
		
		ABreakableActorBase_Multicast_WasDefeated_Params params {};
		params.InInstigator = InInstigator;
		params.InDirectInstigator = InDirectInstigator;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABreakableActorBase.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABreakableActorBase::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BreakableActorFramework.BreakableActorBase");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABreakableSarcophagus.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABreakableSarcophagus::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BreakableActorFramework.BreakableSarcophagus");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBreakableActorDynamicMaterialComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakableActorDynamicMaterialComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BreakableActorFramework.BreakableActorDynamicMaterialComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBreakableActorItemSpawnComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakableActorItemSpawnComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BreakableActorFramework.BreakableActorItemSpawnComponent");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBreakableActorVfxComponent.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBreakableActorVfxComponent::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class BreakableActorFramework.BreakableActorVfxComponent");
		return ptr;
	}

}



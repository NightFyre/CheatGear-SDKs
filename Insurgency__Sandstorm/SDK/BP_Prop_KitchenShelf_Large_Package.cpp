/**
 * Name: Insurgency__Sandstorm
 * Version: 8846794
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x04E16250
	 * 		Name   -> Function BP_Prop_KitchenShelf_Large.BP_Prop_KitchenShelf_Large_C.Get_DrinkingGlass
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBreakableComponent*                         bpp__Breakable__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Prop_KitchenShelf_Large_C::Get_DrinkingGlass(class UBreakableComponent* bpp__Breakable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_KitchenShelf_Large.BP_Prop_KitchenShelf_Large_C.Get_DrinkingGlass");
		
		ABP_Prop_KitchenShelf_Large_C_Get_DrinkingGlass_Params params {};
		params.bpp__Breakable__pf = bpp__Breakable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00CBA870
	 * 		Name   -> Function BP_Prop_KitchenShelf_Large.BP_Prop_KitchenShelf_Large_C.Get_CeramicItem
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBreakableComponent*                         bpp__Breakable__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Prop_KitchenShelf_Large_C::Get_CeramicItem(class UBreakableComponent* bpp__Breakable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_KitchenShelf_Large.BP_Prop_KitchenShelf_Large_C.Get_CeramicItem");
		
		ABP_Prop_KitchenShelf_Large_C_Get_CeramicItem_Params params {};
		params.bpp__Breakable__pf = bpp__Breakable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x04E7D6E0
	 * 		Name   -> Function BP_Prop_KitchenShelf_Large.BP_Prop_KitchenShelf_Large_C.Get_Bottle
	 * 		Flags  -> (Native, Public, BlueprintCallable)
	 * Parameters:
	 * 		class UBreakableComponent*                         bpp__Breakable__pf                                         (Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_Prop_KitchenShelf_Large_C::Get_Bottle(class UBreakableComponent* bpp__Breakable__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_Prop_KitchenShelf_Large.BP_Prop_KitchenShelf_Large_C.Get_Bottle");
		
		ABP_Prop_KitchenShelf_Large_C_Get_Bottle_Params params {};
		params.bpp__Breakable__pf = bpp__Breakable__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_Prop_KitchenShelf_Large_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_Prop_KitchenShelf_Large_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_Prop_KitchenShelf_Large.BP_Prop_KitchenShelf_Large_C");
		return ptr;
	}

}



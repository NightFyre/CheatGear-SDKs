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
	 * 		RVA    -> 0x04E16E30
	 * 		Name   -> Function BP_FireSupport_Apache.BP_FireSupport_Apache_C.OnWeaponFired
	 * 		Flags  -> (Native, Event, Public)
	 * Parameters:
	 * 		class AVehicleHoveringBase*                        bpp__HoveringVehicle__pf                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		class AItemFirearm*                                bpp__Weapon__pf                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void ABP_FireSupport_Apache_C::OnWeaponFired(class AVehicleHoveringBase* bpp__HoveringVehicle__pf, class AItemFirearm* bpp__Weapon__pf)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function BP_FireSupport_Apache.BP_FireSupport_Apache_C.OnWeaponFired");
		
		ABP_FireSupport_Apache_C_OnWeaponFired_Params params {};
		params.bpp__HoveringVehicle__pf = bpp__HoveringVehicle__pf;
		params.bpp__Weapon__pf = bpp__Weapon__pf;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ABP_FireSupport_Apache_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ABP_FireSupport_Apache_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("DynamicClass BP_FireSupport_Apache.BP_FireSupport_Apache_C");
		return ptr;
	}

}



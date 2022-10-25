/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#include "../SDK.h"

namespace CG
{
	// --------------------------------------------------
	// # Structs Functions
	// --------------------------------------------------
	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABPI_VehicleAnimLayer.ABPI_VehicleAnimLayer_C.VehicleFullBody
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   FullBody                                                   (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   VehicleFullBody                                            (Parm, OutParm, NoDestructor)
	 */
	void UABPI_VehicleAnimLayer_C::VehicleFullBody(const struct FPoseLink& FullBody, struct FPoseLink* VehicleFullBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABPI_VehicleAnimLayer.ABPI_VehicleAnimLayer_C.VehicleFullBody");
		
		UABPI_VehicleAnimLayer_C_VehicleFullBody_Params params {};
		params.FullBody = FullBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VehicleFullBody != nullptr)
			*VehicleFullBody = params.VehicleFullBody;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00EB6120
	 * 		Name   -> Function ABPI_VehicleAnimLayer.ABPI_VehicleAnimLayer_C.VehicleLowerBody
	 * 		Flags  -> (HasOutParms, BlueprintCallable, BlueprintEvent)
	 * Parameters:
	 * 		struct FPoseLink                                   LowerBody                                                  (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	 * 		struct FPoseLink                                   VehicleLowerBody                                           (Parm, OutParm, NoDestructor)
	 */
	void UABPI_VehicleAnimLayer_C::VehicleLowerBody(const struct FPoseLink& LowerBody, struct FPoseLink* VehicleLowerBody)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ABPI_VehicleAnimLayer.ABPI_VehicleAnimLayer_C.VehicleLowerBody");
		
		UABPI_VehicleAnimLayer_C_VehicleLowerBody_Params params {};
		params.LowerBody = LowerBody;
		
		auto flags = fn->FunctionFlags;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
		
		if (VehicleLowerBody != nullptr)
			*VehicleLowerBody = params.VehicleLowerBody;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UABPI_VehicleAnimLayer_C.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UABPI_VehicleAnimLayer_C::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("AnimBlueprintGeneratedClass ABPI_VehicleAnimLayer.ABPI_VehicleAnimLayer_C");
		return ptr;
	}

}



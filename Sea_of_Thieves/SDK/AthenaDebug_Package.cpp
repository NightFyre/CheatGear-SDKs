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
	 * 		Name   -> PredefinedFunction UDrawDebugServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UDrawDebugServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaDebug.DrawDebugServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03554A40
	 * 		Name   -> Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ADrawDebugService::OnRep_PersistentShapeChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.OnRep_PersistentShapeChanged");
		
		ADrawDebugService_OnRep_PersistentShapeChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03554A20
	 * 		Name   -> Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged
	 * 		Flags  -> (Final, Native, Private)
	 */
	void ADrawDebugService::OnRep_IsDrawDebugActiveChanged()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.OnRep_IsDrawDebugActiveChanged");
		
		ADrawDebugService_OnRep_IsDrawDebugActiveChanged_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035549A0
	 * 		Name   -> Function AthenaDebug.DrawDebugService.Multicast_ClearGroup
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		class FName                                        GroupName                                                  (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	 */
	void ADrawDebugService::Multicast_ClearGroup(const class FName& GroupName)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_ClearGroup");
		
		ADrawDebugService_Multicast_ClearGroup_Params params {};
		params.GroupName = GroupName;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035548C0
	 * 		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddStrings
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<struct FDrawDebugItemString>                Strings                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void ADrawDebugService::Multicast_AddStrings(TArray<struct FDrawDebugItemString> Strings)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddStrings");
		
		ADrawDebugService_Multicast_AddStrings_Params params {};
		params.Strings = Strings;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03554820
	 * 		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddSpheres
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<struct FDrawDebugItemSphere>                Spheres                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void ADrawDebugService::Multicast_AddSpheres(TArray<struct FDrawDebugItemSphere> Spheres)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddSpheres");
		
		ADrawDebugService_Multicast_AddSpheres_Params params {};
		params.Spheres = Spheres;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03554780
	 * 		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddSectors
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<struct FDrawDebugItemSector>                Sectors                                                    (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void ADrawDebugService::Multicast_AddSectors(TArray<struct FDrawDebugItemSector> Sectors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddSectors");
		
		ADrawDebugService_Multicast_AddSectors_Params params {};
		params.Sectors = Sectors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035546E0
	 * 		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddLines
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<struct FDrawDebugItemLine>                  Lines                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void ADrawDebugService::Multicast_AddLines(TArray<struct FDrawDebugItemLine> Lines)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddLines");
		
		ADrawDebugService_Multicast_AddLines_Params params {};
		params.Lines = Lines;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x03554640
	 * 		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddCapsules
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<struct FDrawDebugItemCapsule>               Capsules                                                   (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void ADrawDebugService::Multicast_AddCapsules(TArray<struct FDrawDebugItemCapsule> Capsules)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddCapsules");
		
		ADrawDebugService_Multicast_AddCapsules_Params params {};
		params.Capsules = Capsules;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x035545A0
	 * 		Name   -> Function AthenaDebug.DrawDebugService.Multicast_AddBoxes
	 * 		Flags  -> (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
	 * Parameters:
	 * 		TArray<struct FDrawDebugItemBox>                   Boxes                                                      (ConstParm, Parm, ZeroConstructor, ReferenceParm)
	 */
	void ADrawDebugService::Multicast_AddBoxes(TArray<struct FDrawDebugItemBox> Boxes)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function AthenaDebug.DrawDebugService.Multicast_AddBoxes");
		
		ADrawDebugService_Multicast_AddBoxes_Params params {};
		params.Boxes = Boxes;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction ADrawDebugService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* ADrawDebugService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaDebug.DrawDebugService");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AShippingDebugActorSphereCollection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AShippingDebugActorSphereCollection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaDebug.ShippingDebugActorSphereCollection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UTickableDebugDrawingServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UTickableDebugDrawingServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaDebug.TickableDebugDrawingServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AVideprinter.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AVideprinter::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaDebug.Videprinter");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVideprinterServiceInterface.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideprinterServiceInterface::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaDebug.VideprinterServiceInterface");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UVideprinterService.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UVideprinterService::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class AthenaDebug.VideprinterService");
		return ptr;
	}

}



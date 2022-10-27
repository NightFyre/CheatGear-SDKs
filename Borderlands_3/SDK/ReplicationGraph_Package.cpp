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
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_ActorList.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_ActorList::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorList");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UNetReplicationGraphConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UNetReplicationGraphConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.NetReplicationGraphConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UBasicReplicationGraph.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UBasicReplicationGraph::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.BasicReplicationGraph");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_ActorListFrequencyBuckets.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_ActorListFrequencyBuckets::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ActorListFrequencyBuckets");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_ConnectionDormanyNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_ConnectionDormanyNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_ConnectionDormanyNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_DormancyNode.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_DormancyNode::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_DormancyNode");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_GridCell.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_GridCell::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridCell");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_GridSpatialization2D.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_GridSpatialization2D::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_GridSpatialization2D");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_AlwaysRelevant.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_AlwaysRelevant::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_AlwaysRelevant_ForConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_AlwaysRelevant_ForConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_AlwaysRelevant_ForConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction UReplicationGraphNode_TearOff_ForConnection.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* UReplicationGraphNode_TearOff_ForConnection::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphNode_TearOff_ForConnection");
		return ptr;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0310A980
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AReplicationGraphDebugActor::ServerStopDebugging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStopDebugging");
		
		AReplicationGraphDebugActor_ServerStopDebugging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0310A930
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AReplicationGraphDebugActor::ServerStartDebugging()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerStartDebugging");
		
		AReplicationGraphDebugActor_ServerStartDebugging_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0310A830
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class UClass*                                      Class                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		float                                              CullDistance                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AReplicationGraphDebugActor::ServerSetCullDistanceForClass(class UClass* Class, float CullDistance)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerSetCullDistanceForClass");
		
		AReplicationGraphDebugActor_ServerSetCullDistanceForClass_Params params {};
		params.Class = Class;
		params.CullDistance = CullDistance;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0310A770
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 * Parameters:
	 * 		class FString                                      str                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 */
	void AReplicationGraphDebugActor::ServerPrintAllActorInfo(const class FString& str)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerPrintAllActorInfo");
		
		AReplicationGraphDebugActor_ServerPrintAllActorInfo_Params params {};
		params.str = str;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0310A720
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
	 */
	void AReplicationGraphDebugActor::ServerCellInfo()
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ServerCellInfo");
		
		AReplicationGraphDebugActor_ServerCellInfo_Params params {};
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x0310A5E0
	 * 		Name   -> Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo
	 * 		Flags  -> (Net, NetReliable, Native, Event, Public, HasDefaults, NetClient)
	 * Parameters:
	 * 		struct FVector                                     CellLocation                                               (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		struct FVector                                     CellExtent                                                 (Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	 * 		TArray<class AActor*>                              Actors                                                     (ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	 */
	void AReplicationGraphDebugActor::ClientCellInfo(const struct FVector& CellLocation, const struct FVector& CellExtent, TArray<class AActor*> Actors)
	{
		static UFunction* fn = nullptr;
		if (!fn)
			fn = UObject::FindObject<UFunction>("Function ReplicationGraph.ReplicationGraphDebugActor.ClientCellInfo");
		
		AReplicationGraphDebugActor_ClientCellInfo_Params params {};
		params.CellLocation = CellLocation;
		params.CellExtent = CellExtent;
		params.Actors = Actors;
		
		auto flags = fn->FunctionFlags;
		fn->FunctionFlags |= 0x00000400;
		UObject::ProcessEvent(fn, &params);
		fn->FunctionFlags = flags;
	}

	/**
	 * Function:
	 * 		RVA    -> 0x00000000
	 * 		Name   -> PredefinedFunction AReplicationGraphDebugActor.StaticClass
	 * 		Flags  -> (Predefined, Static)
	 */
	UClass* AReplicationGraphDebugActor::StaticClass()
	{
		static UClass* ptr = nullptr;
		if (!ptr)
			ptr = UObject::FindClass("Class ReplicationGraph.ReplicationGraphDebugActor");
		return ptr;
	}

}



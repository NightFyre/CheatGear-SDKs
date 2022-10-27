#pragma once

/**
 * Name: Sea_of_Thieves
 * Version: 9505844
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Enums
	// --------------------------------------------------
	/**
	 * Enum ActionStateMachine.EActionStateMachineTrackId
	 */
	enum class EActionStateMachineTrackId : uint8_t
	{
		Locomotion     = 0,
		Overlay        = 1,
		ItemUse        = 2,
		ForcedMovement = 3,
		Migration      = 4,
		Count          = 5,
		Invalid        = 6,
		MAX            = 7
	};

	/**
	 * Enum ActionStateMachine.EActionPredictionType
	 */
	enum class EActionPredictionType : uint8_t
	{
		Predicted    = 0,
		NotPredicted = 1,
		MAX          = 2
	};

	/**
	 * Enum ActionStateMachine.EActionStatePriority
	 */
	enum class EActionStatePriority : uint8_t
	{
		Overrides = 0,
		Overriden = 1,
		MAX       = 2
	};

	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct ActionStateMachine.ActionStateChangeRequestId
	 * Size -> 0x0001
	 */
	struct FActionStateChangeRequestId
	{
	public:
		unsigned char                                              Raw;                                                     // 0x0000(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ActionStateMachine.SerialisedActionStateInfo
	 * Size -> 0x0040
	 */
	struct FSerialisedActionStateInfo
	{
	public:
		unsigned char                                              UnknownData_SLQT[0x40];                                  // 0x0000(0x0040) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.SerialisedActionStateMessage
	 * Size -> 0x0018
	 */
	struct FSerialisedActionStateMessage
	{
	public:
		unsigned char                                              UnknownData_RSBC[0x18];                                  // 0x0000(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.SerialisedConstructionInfoStore
	 * Size -> 0x0140
	 */
	struct FSerialisedConstructionInfoStore
	{
	public:
		struct FSerialisedActionStateInfo                          SerialisedConstructionInfo[0x5];                         // 0x0000(0x0140)
	};

	/**
	 * ScriptStruct ActionStateMachine.ResetStateMachineRpc
	 * Size -> 0x0150
	 */
	struct FResetStateMachineRpc
	{
	public:
		struct FActionStateChangeRequestId                         LatestEpochIds[0x5];                                     // 0x0000(0x0005)
		struct FActionStateChangeRequestId                         LatestRequestIds[0x5];                                   // 0x0005(0x0005)
		unsigned char                                              UnknownData_CJ6L[0x6];                                   // 0x000A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSerialisedConstructionInfoStore                    PerTrackConstructionInfoStore;                           // 0x0010(0x0140)
	};

	/**
	 * ScriptStruct ActionStateMachine.ActionStateSerialisableData
	 * Size -> 0x0030
	 */
	struct FActionStateSerialisableData
	{
	public:
		unsigned char                                              UnknownData_RHX5[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Id;                                                      // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UScriptStruct*                                       Type;                                                    // 0x0010(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_HFLJ[0x18];                                  // 0x0018(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.TestActionStateSerialisableData
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FTestActionStateSerialisableData : public FActionStateSerialisableData
	{
	public:
		int32_t                                                    IntProp;                                                 // 0x0030(0x0004) BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_KV0U[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.ActionStatePriorityRelationship
	 * Size -> 0x0010
	 */
	struct FActionStatePriorityRelationship
	{
	public:
		class UClass*                                              State;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		EActionStatePriority                                       Priority;                                                // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_I4WX[0x7];                                   // 0x0009(0x0007) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.ActionStatePriorityList
	 * Size -> 0x0018
	 */
	struct FActionStatePriorityList
	{
	public:
		class UClass*                                              State;                                                   // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		TArray<struct FActionStatePriorityRelationship>            Entries;                                                 // 0x0008(0x0010) Edit, ZeroConstructor
	};

	/**
	 * ScriptStruct ActionStateMachine.ActionStatePriorityTable
	 * Size -> 0x00A0
	 */
	struct FActionStatePriorityTable
	{
	public:
		unsigned char                                              UnknownData_BARS[0xA0];                                  // 0x0000(0x00A0) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.ActionStateConstructionInfo
	 * Size -> 0x0028
	 */
	struct FActionStateConstructionInfo
	{
	public:
		class UClass*                                              Id;                                                      // 0x0000(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash
		class UScriptStruct*                                       Type;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_YI9H[0x18];                                  // 0x0010(0x0018) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.InnerTestStruct
	 * Size -> 0x0018
	 */
	struct FInnerTestStruct
	{
	public:
		bool                                                       BoolProp;                                                // 0x0000(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_LOLH[0x7];                                   // 0x0001(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FString                                              StringProp;                                              // 0x0008(0x0010) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithInner
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FTestActionStateConstructionInfoWithInner : public FActionStateConstructionInfo
	{
	public:
		float                                                      FloatProp;                                               // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TXY4[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FInnerTestStruct                                    InnerStruct;                                             // 0x0030(0x0018) BlueprintVisible, BlueprintReadOnly
	};

	/**
	 * ScriptStruct ActionStateMachine.TestActionStateConstructionInfo
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FTestActionStateConstructionInfo : public FActionStateConstructionInfo
	{
	public:
		int32_t                                                    IntProp;                                                 // 0x0028(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_GI3S[0x4];                                   // 0x002C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.ActorActionStateConstructionInfo
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	struct FActorActionStateConstructionInfo : public FActionStateConstructionInfo
	{
	public:
		TWeakObjectPtr<class AActor>                               ActorOwner;                                              // 0x0028(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper
	};

	/**
	 * ScriptStruct ActionStateMachine.ActionStateMessage
	 * Size -> 0x0010
	 */
	struct FActionStateMessage
	{
	public:
		unsigned char                                              UnknownData_OH14[0x8];                                   // 0x0000(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UScriptStruct*                                       Type;                                                    // 0x0008(0x0008) ZeroConstructor, IsPlainOldData, RepSkip, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ActionStateMachine.InnerWithObjTestStruct
	 * Size -> 0x0008
	 */
	struct FInnerWithObjTestStruct
	{
	public:
		class UObject*                                             ObjPointer;                                              // 0x0000(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
	};

	/**
	 * ScriptStruct ActionStateMachine.TestActionStateConstructionInfoWithObjPointers
	 * Size -> 0x0020 (FullSize[0x0048] - InheritedSize[0x0028])
	 */
	struct FTestActionStateConstructionInfoWithObjPointers : public FActionStateConstructionInfo
	{
	public:
		class UObject*                                             ObjPointer;                                              // 0x0028(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		struct FInnerWithObjTestStruct                             Inner;                                                   // 0x0030(0x0008)
		TArray<class UObject*>                                     Array;                                                   // 0x0038(0x0010) ZeroConstructor
	};

	/**
	 * ScriptStruct ActionStateMachine.EventWaitingToSpawnActionStateEndedClient
	 * Size -> 0x0001
	 */
	struct FEventWaitingToSpawnActionStateEndedClient
	{
	public:
		unsigned char                                              UnknownData_M32R[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.EventWaitingToSpawnActionStateStartedClient
	 * Size -> 0x0001
	 */
	struct FEventWaitingToSpawnActionStateStartedClient
	{
	public:
		unsigned char                                              UnknownData_24LZ[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.EventFirstPersonAnimaticActionStateEndedClient
	 * Size -> 0x0001
	 */
	struct FEventFirstPersonAnimaticActionStateEndedClient
	{
	public:
		unsigned char                                              UnknownData_C0LU[0x1];                                   // 0x0000(0x0001) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.NullActionStateConstructionInfo
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	struct FNullActionStateConstructionInfo : public FActorActionStateConstructionInfo
	{	};

	/**
	 * ScriptStruct ActionStateMachine.TestActionStateMessage2
	 * Size -> 0x0000 (FullSize[0x0010] - InheritedSize[0x0010])
	 */
	struct FTestActionStateMessage2 : public FActionStateMessage
	{	};

	/**
	 * ScriptStruct ActionStateMachine.TestActionStateMessage
	 * Size -> 0x0008 (FullSize[0x0018] - InheritedSize[0x0010])
	 */
	struct FTestActionStateMessage : public FActionStateMessage
	{
	public:
		int32_t                                                    TestProperty;                                            // 0x0010(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_TY38[0x4];                                   // 0x0014(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct ActionStateMachine.TestActorActionStateConstructionInfo
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	struct FTestActorActionStateConstructionInfo : public FActorActionStateConstructionInfo
	{
	public:
		int32_t                                                    IntProp;                                                 // 0x0030(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_3CWT[0x4];                                   // 0x0034(0x0004) MISSED OFFSET (PADDING)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

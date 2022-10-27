#pragma once

/**
 * Name: Borderlands_3
 * Version: 4.20.3
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Classes
	// --------------------------------------------------
	/**
	 * Class GbxAI.AIActionBase
	 * Size -> 0x00D0 (FullSize[0x00F8] - InheritedSize[0x0028])
	 */
	class UAIActionBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_7OAY[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnInitializeInstanceEventBP;                             // 0x0030(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EA6R[0x18];                                  // 0x0040(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCleanupInstanceEventBP;                                // 0x0058(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B54M[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStartedEventBP;                                        // 0x0080(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ATYY[0x18];                                  // 0x0090(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnStoppedEventBP;                                        // 0x00A8(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GJ4Q[0x18];                                  // 0x00B8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIActionExecutionSettings                          ExecutionSettings;                                       // 0x00D0(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4U8P[0x10];                                  // 0x00D8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              BaseVersion;                                             // 0x00E8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FCW2[0x3];                                   // 0x00E9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		uint32_t                                                   Version;                                                 // 0x00EC(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		EAIActionCreationMethod                                    CreationMethod;                                          // 0x00F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CX4M[0x7];                                   // 0x00F1(0x0007) MISSED OFFSET (PADDING)

	public:
		void STATIC_StopBP(class UAIActionBase* Action, const struct FAIActionBlueprintContext& Context, bool bSucceeded);
		class UObject* CreateSubobjectNoName(class UClass* Class);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction
	 * Size -> 0x0050 (FullSize[0x0148] - InheritedSize[0x00F8])
	 */
	class UAIAction : public UAIActionBase
	{
	public:
		class UBlackboardData*                                     Blackboard;                                              // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bWaitForAllAspects;                                      // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D56Y[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAIAspect*>                                   Aspects;                                                 // 0x0108(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UAIAspect*>                                   BuiltInAspects;                                          // 0x0118(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bIsChildAction;                                          // 0x0128(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_T3J6[0x7];                                   // 0x0129(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UAIAction*>                                   SubActions;                                              // 0x0130(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KX9N[0x1];                                   // 0x0140(0x0001) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              ActionVersion;                                           // 0x0141(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B6ZG[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (PADDING)

	public:
		class UAIAction* CreateSubAction(class UClass* ActionClass, const class FName& Name);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Composite
	 * Size -> 0x0018 (FullSize[0x0160] - InheritedSize[0x0148])
	 */
	class UAIAction_Composite : public UAIAction
	{
	public:
		TArray<class UAIAction_CompositeChild*>                    Children;                                                // 0x0148(0x0010) ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              CompositeVersion;                                        // 0x0158(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8SWC[0x7];                                   // 0x0159(0x0007) MISSED OFFSET (PADDING)

	public:
		class UAIAction_CompositeChild* CreateChild(const class FName& ChildName);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Selector
	 * Size -> 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
	 */
	class UAIAction_Selector : public UAIAction_Composite
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Sequence
	 * Size -> 0x0088 (FullSize[0x01E8] - InheritedSize[0x0160])
	 */
	class UAIAction_Sequence : public UAIAction_Selector
	{
	public:
		EAIActionSequenceCanStartCheck                             CanStartChecks;                                          // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ZKPI[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           CanBeInterrupted;                                        // 0x0168(0x0080) Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_GoToPoint
	 * Size -> 0x0DB8 (FullSize[0x0FA0] - InheritedSize[0x01E8])
	 */
	class UAIAction_GoToPoint : public UAIAction_Sequence
	{
	public:
		struct FAIAspectSettings_Location                          LocationSettings;                                        // 0x01E8(0x01E0) ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           GoalKey;                                                 // 0x03C8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x03D8(0x0140) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseNavSettings;                                         // 0x0518(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ANZB[0x7];                                   // 0x0519(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAITicketDataAsset*                                  MoveTicket;                                              // 0x0520(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           MoveTicketHoldDuration;                                  // 0x0528(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           MoveFailTimeLimit;                                       // 0x05A8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseMoveFailTimeLimit;                                   // 0x0628(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2IDO[0x7];                                   // 0x0629(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxBlackboardKeySelector                           QueryKey;                                                // 0x0630(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FAIAspectSettings_EnvQuery                          QuerySettings;                                           // 0x0640(0x03A0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseQuery;                                               // 0x09E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IBGI[0x3];                                   // 0x09E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinOffsetInFrontOfTarget;                                // 0x09E4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOffsetInFrontOfTarget;                                // 0x09E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetAngle;                                             // 0x09EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseOffsetInFrontOfTarget;                               // 0x09F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHWN[0x3];                                   // 0x09F1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      CirclingDistance;                                        // 0x09F4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECircleDirection                                           Direction;                                               // 0x09F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateAroundTarget;                                     // 0x09F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7R5B[0x6];                                   // 0x09FA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxBlackboardKeySelector                           CustomRotationTarget;                                    // 0x0A00(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bUseCustomRotationTarget;                                // 0x0A10(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IOWN[0x7];                                   // 0x0A11(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_Rotation                          RotationSettings;                                        // 0x0A18(0x0550) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseRotation;                                            // 0x0F68(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTestDirectPath;                                         // 0x0F69(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugTestDirectPath;                                    // 0x0F6A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5X2[0x5];                                   // 0x0F6B(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnArrivedEventBP;                                        // 0x0F70(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R8MA[0x18];                                  // 0x0F80(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              GoToPointVersion;                                        // 0x0F98(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9EDF[0x7];                                   // 0x0F99(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_ActionAtPoint
	 * Size -> 0x0798 (FullSize[0x1738] - InheritedSize[0x0FA0])
	 */
	class UAIAction_ActionAtPoint : public UAIAction_GoToPoint
	{
	public:
		struct FAIAspectSettings_GbxAction                         ActionSettings;                                          // 0x0FA0(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bCheckLocationDuringAction;                              // 0x11D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRotationDuringAction;                                // 0x11D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRotationTargetDuringAction;                          // 0x11DA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EAY9[0x5];                                   // 0x11DB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_Rotation                          ActionRotationSettings;                                  // 0x11E0(0x0550) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseActionRotation;                                      // 0x1730(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              ActionAtPointVersion;                                    // 0x1731(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3LRH[0x6];                                   // 0x1732(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction
	 * Size -> 0x0008 (FullSize[0x0078] - InheritedSize[0x0070])
	 */
	class UBTTask_AIAction : public UBTTaskNode
	{
	public:
		class UBTDecorator_AIAction*                               ActionDecorator;                                         // 0x0070(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_ActionAtPoint
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_ActionAtPoint : public UBTTask_AIAction
	{
	public:
		class UAIAction_ActionAtPoint*                             Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Priority
	 * Size -> 0x0010 (FullSize[0x0170] - InheritedSize[0x0160])
	 */
	class UAIAction_Priority : public UAIAction_Selector
	{
	public:
		float                                                      TryInterruptPeriod;                                      // 0x0160(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      TryInterruptInsignificantPeriod;                         // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterruptWhileInsignificant;                            // 0x0168(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RU3R[0x7];                                   // 0x0169(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_AITree
	 * Size -> 0x0000 (FullSize[0x0170] - InheritedSize[0x0170])
	 */
	class UAIAction_AITree : public UAIAction_Priority
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Charge
	 * Size -> 0x0018 (FullSize[0x0FB8] - InheritedSize[0x0FA0])
	 */
	class UAIAction_Charge : public UAIAction_GoToPoint
	{
	public:
		struct FAIAspectSettings_Charge                            ChargeSettings;                                          // 0x0FA0(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_Charge
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_Charge : public UBTTask_AIAction
	{
	public:
		class UAIAction_Charge*                                    Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_CompositeChild
	 * Size -> 0x0010 (FullSize[0x0158] - InheritedSize[0x0148])
	 */
	class UAIAction_CompositeChild : public UAIAction
	{
	public:
		class UAIAction*                                           Action;                                                  // 0x0148(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCauseParentToStop;                                   // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_48X3[0x7];                                   // 0x0151(0x0007) MISSED OFFSET (PADDING)

	public:
		class UAIAction* CreateAction(class UClass* ActionClass);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Decorator
	 * Size -> 0x0000 (FullSize[0x0148] - InheritedSize[0x0148])
	 */
	class UAIAction_Decorator : public UAIAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_MoveNode
	 * Size -> 0x0158 (FullSize[0x02C8] - InheritedSize[0x0170])
	 */
	class UAIAction_MoveNode : public UAIAction_Priority
	{
	public:
		struct FGbxBlackboardKeySelector                           NodeKey;                                                 // 0x0170(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0180(0x0140) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              MoveNodeVersion;                                         // 0x02C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OZQZ[0x7];                                   // 0x02C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Dropship
	 * Size -> 0x0000 (FullSize[0x02C8] - InheritedSize[0x02C8])
	 */
	class UAIAction_Dropship : public UAIAction_MoveNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Follow
	 * Size -> 0x01E8 (FullSize[0x0358] - InheritedSize[0x0170])
	 */
	class UAIAction_Follow : public UAIAction_Priority
	{
	public:
		struct FAIAspectSettings_Follow                            Settings;                                                // 0x0170(0x0038) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x01A8(0x0140) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_FindClosestPlayer                 FindClosestPlayerSettings;                               // 0x02E8(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bFindClosestPlayer;                                      // 0x0308(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_D3SK[0x7];                                   // 0x0309(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxBlackboardKeySelector                           TeleportTarget;                                          // 0x0310(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           MoveTarget;                                              // 0x0320(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           Distance;                                                // 0x0330(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           BodyDirection;                                           // 0x0340(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              FollowVersion;                                           // 0x0350(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_V80Q[0x7];                                   // 0x0351(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_GoToPoint
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_GoToPoint : public UBTTask_AIAction
	{
	public:
		class UAIAction_GoToPoint*                                 Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Land
	 * Size -> 0x0388 (FullSize[0x0570] - InheritedSize[0x01E8])
	 */
	class UAIAction_Land : public UAIAction_Sequence
	{
	public:
		struct FAIAspectSettings_FlyToNavMesh                      FlyToNavMeshSettings;                                    // 0x01E8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAIAspectSettings_GbxAction                         AnimSettings;                                            // 0x01F8(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0430(0x0140) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_LeadRoute
	 * Size -> 0x01F8 (FullSize[0x0368] - InheritedSize[0x0170])
	 */
	class UAIAction_LeadRoute : public UAIAction_Priority
	{
	public:
		struct FAIAspectSettings_LeadRoute                         LeadSettings;                                            // 0x0170(0x0050) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x01C0(0x0140) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_FindClosestPlayer                 FindClosestPlayerSettings;                               // 0x0300(0x0020) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           MoveTarget;                                              // 0x0320(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           Distance;                                                // 0x0330(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           TeleportTarget;                                          // 0x0340(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           UnusedKey;                                               // 0x0350(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              LeadRouteVersion;                                        // 0x0360(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GF89[0x7];                                   // 0x0361(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_LeadRoute
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_LeadRoute : public UBTTask_AIAction
	{
	public:
		class UAIAction_LeadRoute*                                 Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Leap
	 * Size -> 0x0058 (FullSize[0x0FF8] - InheritedSize[0x0FA0])
	 */
	class UAIAction_Leap : public UAIAction_GoToPoint
	{
	public:
		struct FAIAspectSettings_Leap                              LeapSettings;                                            // 0x0FA0(0x0058) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_Leap
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_Leap : public UBTTask_AIAction
	{
	public:
		class UAIAction_Leap*                                      Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_LeapDirect
	 * Size -> 0x0400 (FullSize[0x0548] - InheritedSize[0x0148])
	 */
	class UAIAction_LeapDirect : public UAIAction
	{
	public:
		struct FAIAspectSettings_Leap                              LeapSettings;                                            // 0x0148(0x0058) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAIAspectSettings_EnvQuery                          QuerySettings;                                           // 0x01A0(0x03A0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseQuery;                                               // 0x0540(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_AK88[0x7];                                   // 0x0541(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_LeapDirect
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_LeapDirect : public UBTTask_AIAction
	{
	public:
		class UAIAction_LeapDirect*                                Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_LookAroundRandomly
	 * Size -> 0x0020 (FullSize[0x0168] - InheritedSize[0x0148])
	 */
	class UAIAction_LookAroundRandomly : public UAIAction
	{
	public:
		struct FLookAroundRandomlySettings                         Settings;                                                // 0x0148(0x000C) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TUZ9[0x14];                                  // 0x0154(0x0014) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_MoveNode
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_MoveNode : public UBTTask_AIAction
	{
	public:
		class UAIAction_MoveNode*                                  Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_MoveSpline
	 * Size -> 0x0190 (FullSize[0x02D8] - InheritedSize[0x0148])
	 */
	class UAIAction_MoveSpline : public UAIAction
	{
	public:
		struct FAIAspectSettings_MoveSpline                        MoveSplineSettings;                                      // 0x0148(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0198(0x0140) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		bool STATIC_SetupMoveSpline(class AActor* TargetActor, class UObject* TargetSpline, float Offset, bool bIsReverse);
		bool STATIC_ChangeSplineOffset(class AActor* TargetActor, float Offset);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_OnAggro
	 * Size -> 0x0478 (FullSize[0x0660] - InheritedSize[0x01E8])
	 */
	class UAIAction_OnAggro : public UAIAction_Sequence
	{
	public:
		bool                                                       bRotateBeforeAction;                                     // 0x01E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRotateDuringAction;                                     // 0x01E9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_8JYE[0x6];                                   // 0x01EA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_GbxAction                         ActionWhenFirstNoticer;                                  // 0x01F0(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIAspectSettings_GbxAction                         ActionWhenSecondNoticer;                                 // 0x0428(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Orbit
	 * Size -> 0x08B0 (FullSize[0x09F8] - InheritedSize[0x0148])
	 */
	class UAIAction_Orbit : public UAIAction
	{
	public:
		struct FAIAspectSettings_Orbit                             OrbitSettings;                                           // 0x0148(0x0220) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0368(0x0140) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Rotation                          RotationSettings;                                        // 0x04A8(0x0550) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Parallel
	 * Size -> 0x0008 (FullSize[0x0168] - InheritedSize[0x0160])
	 */
	class UAIAction_Parallel : public UAIAction_Composite
	{
	public:
		bool                                                       bWaitForAllChildren;                                     // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VCAU[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_ParallelChild
	 * Size -> 0x0008 (FullSize[0x0160] - InheritedSize[0x0158])
	 */
	class UAIAction_ParallelChild : public UAIAction_CompositeChild
	{
	public:
		bool                                                       bCanPreventActionFromStarting;                           // 0x0158(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCauseActionToSucceed;                                // 0x0159(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCanCauseActionToFail;                                   // 0x015A(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMustFinish;                                             // 0x015B(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_RG39[0x4];                                   // 0x015C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Plan
	 * Size -> 0x0020 (FullSize[0x0208] - InheritedSize[0x01E8])
	 */
	class UAIAction_Plan : public UAIAction_Sequence
	{
	public:
		struct FAIActionSettings_Plan                              Settings;                                                // 0x01E8(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_PlayGbxAction
	 * Size -> 0x0238 (FullSize[0x0380] - InheritedSize[0x0148])
	 */
	class UAIAction_PlayGbxAction : public UAIAction
	{
	public:
		struct FAIAspectSettings_GbxAction                         ActionSettings;                                          // 0x0148(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_PlayGbxAction
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_PlayGbxAction : public UBTTask_AIAction
	{
	public:
		class UAIAction_PlayGbxAction*                             Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Random
	 * Size -> 0x0008 (FullSize[0x0168] - InheritedSize[0x0160])
	 */
	class UAIAction_Random : public UAIAction_Selector
	{
	public:
		bool                                                       bUseCumulativeInverseWeight;                             // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F27J[0x3];                                   // 0x0161(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ResetRunCountTime;                                       // 0x0164(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_RandomChild
	 * Size -> 0x0010 (FullSize[0x0168] - InheritedSize[0x0158])
	 */
	class UAIAction_RandomChild : public UAIAction_CompositeChild
	{
	public:
		float                                                      Weight;                                                  // 0x0158(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    MaxRunCount;                                             // 0x015C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseMaxRunCount;                                         // 0x0160(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_8ON4[0x7];                                   // 0x0161(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Route
	 * Size -> 0x01E0 (FullSize[0x03C8] - InheritedSize[0x01E8])
	 */
	class UAIAction_Route : public UAIAction_Sequence
	{
	public:
		struct FAIAspectSettings_Route                             RouteSettings;                                           // 0x01E8(0x0028) Edit, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0210(0x0140) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           SmartAction;                                             // 0x0350(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           MoveTarget;                                              // 0x0360(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           Distance;                                                // 0x0370(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           BodyEnable;                                              // 0x0380(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           BodyTarget;                                              // 0x0390(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           LookEnable;                                              // 0x03A0(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           LookTarget;                                              // 0x03B0(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              RouteVersion;                                            // 0x03C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_F0EM[0x7];                                   // 0x03C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_Route
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_Route : public UBTTask_AIAction
	{
	public:
		class UAIAction_Route*                                     Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_UseCover
	 * Size -> 0x0E98 (FullSize[0x1008] - InheritedSize[0x0170])
	 */
	class UAIAction_UseCover : public UAIAction_Priority
	{
	public:
		bool                                                       bCanShootWhileMoving;                                    // 0x0170(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UseCoverVersion;                                         // 0x0171(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_P3NC[0x6];                                   // 0x0172(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_UseCover                          CoverSettings;                                           // 0x0178(0x0138) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FEnvQueryParams                                     CoverQuery;                                              // 0x02B0(0x00B8) Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FGbxQueryOptions                                    CoverQueryOptions;                                       // 0x0368(0x0238) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Weapon                            WeaponSettings;                                          // 0x05A0(0x03D0) Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0970(0x0140) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Rotation                          MovingRotationSettings;                                  // 0x0AB0(0x0550) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bRotateDuringMovement;                                   // 0x1000(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_61E2[0x7];                                   // 0x1001(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_SimpleCover
	 * Size -> 0x01B8 (FullSize[0x11C0] - InheritedSize[0x1008])
	 */
	class UAIAction_SimpleCover : public UAIAction_UseCover
	{
	public:
		bool                                                       bTakeRangesFromWeapon;                                   // 0x1008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GBWR[0x7];                                   // 0x1009(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           MinRange;                                                // 0x1010(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           IdealRange;                                              // 0x1090(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MaxRange;                                                // 0x1110(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UEnvQueryTestAsset*>                          AdditionalTests;                                         // 0x1190(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     DefaultEnvQuery;                                         // 0x11A0(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SimpleCoverVersion;                                      // 0x11B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GV7G[0x7];                                   // 0x11B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_WeaponAtPoint
	 * Size -> 0x0460 (FullSize[0x1400] - InheritedSize[0x0FA0])
	 */
	class UAIAction_WeaponAtPoint : public UAIAction_GoToPoint
	{
	public:
		bool                                                       bCanShootWhileMoving;                                    // 0x0FA0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QZ7P[0x7];                                   // 0x0FA1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_Weapon                            WeaponSettings;                                          // 0x0FA8(0x03D0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           HoldDuration;                                            // 0x1378(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseHoldDuration;                                        // 0x13F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              WeaponAtPointVersion;                                    // 0x13F9(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZTBA[0x6];                                   // 0x13FA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_SimpleHide
	 * Size -> 0x05F8 (FullSize[0x19F8] - InheritedSize[0x1400])
	 */
	class UAIAction_SimpleHide : public UAIAction_WeaponAtPoint
	{
	public:
		struct FGbxParam                                           MinRange;                                                // 0x1400(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           IdealRange;                                              // 0x1480(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MaxRange;                                                // 0x1500(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           FaceTarget;                                              // 0x1580(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           CanUseWeaponWhileMoving;                                 // 0x1600(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UGbxWeaponSlotData*>                          WeaponSlots;                                             // 0x1680(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FGbxParam                                           WeaponUseModeIndex;                                      // 0x1690(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           HideDuration;                                            // 0x1710(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIAspectSettings_GbxAction                         HideActionSettings;                                      // 0x1790(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bUseHideAction;                                          // 0x19C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_U897[0x7];                                   // 0x19C9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     DefaultEnvQuery;                                         // 0x19D0(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnvQuery*                                           DefaultEnvQueryAsset;                                    // 0x19E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SimpleHideVersion;                                       // 0x19F0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AL88[0x7];                                   // 0x19F1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_SimpleMelee
	 * Size -> 0x04E0 (FullSize[0x1C18] - InheritedSize[0x1738])
	 */
	class UAIAction_SimpleMelee : public UAIAction_ActionAtPoint
	{
	public:
		class UClass*                                              MeleeAction;                                             // 0x1738(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAIAspectSettings_GbxAction                         MeleeActionSettings;                                     // 0x1740(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bCanMove;                                                // 0x1978(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YXIV[0x7];                                   // 0x1979(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           ReachedHeight;                                           // 0x1980(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           ReachedDistance;                                         // 0x1A00(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		EMeleeRotationOption                                       FacingPolicyDuringAction;                                // 0x1A80(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QDDD[0x7];                                   // 0x1A81(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           OverrideAngle;                                           // 0x1A88(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bUseOverrideAngle;                                       // 0x1B08(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAlignBodyWithTarget;                                    // 0x1B09(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bKeepFacingTargetOnStop;                                 // 0x1B0A(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopWhenReached;                                        // 0x1B0B(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanStartWhenGoalIsUncertain;                            // 0x1B0C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4GWN[0x3];                                   // 0x1B0D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           Count;                                                   // 0x1B10(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           PlayRate;                                                // 0x1B90(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bCanBeInterrupted;                                       // 0x1C10(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              MeleeActionVersion;                                      // 0x1C11(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OAZ8[0x6];                                   // 0x1C12(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_SimpleRangedAttack
	 * Size -> 0x03F0 (FullSize[0x1B28] - InheritedSize[0x1738])
	 */
	class UAIAction_SimpleRangedAttack : public UAIAction_ActionAtPoint
	{
	public:
		struct FGbxParam                                           MinRange;                                                // 0x1738(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           IdealRange;                                              // 0x17B8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MaxRange;                                                // 0x1838(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MinRepositionDistance;                                   // 0x18B8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UEnvQueryTestAsset*>                          AdditionalTests;                                         // 0x1938(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      SphereTraceExtent;                                       // 0x1948(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDoArcTrace;                                             // 0x194C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0HLH[0x3];                                   // 0x194D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           ArcSpeed;                                                // 0x1950(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           ArcAnglePercent;                                         // 0x19D0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           OverrideAngle;                                           // 0x1A50(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bUseOverrideAngle;                                       // 0x1AD0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EMeleeRotationOption                                       FacingPolicyDuringAction;                                // 0x1AD1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAlignBodyWithTarget;                                    // 0x1AD2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bKeepFacingTargetOnStop;                                 // 0x1AD3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDistanceToTargetTestShouldFilterOnly;                   // 0x1AD4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FYM5[0x3];                                   // 0x1AD5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     DefaultEnvQuery;                                         // 0x1AD8(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     DefaultTraceTests;                                       // 0x1AF0(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnvQuery*                                           DefaultEnvQueryAsset;                                    // 0x1B08(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnvQuery*                                           DefaultTraceTestsAsset;                                  // 0x1B10(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnvQueryTest_Trace*                                 TraceTestInstance;                                       // 0x1B18(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SimpleRangedAttackVersion;                               // 0x1B20(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_J29H[0x7];                                   // 0x1B21(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_SimpleWeapon
	 * Size -> 0x0620 (FullSize[0x1A20] - InheritedSize[0x1400])
	 */
	class UAIAction_SimpleWeapon : public UAIAction_WeaponAtPoint
	{
	public:
		struct FGbxParam                                           CanUseWeaponWhileMoving;                                 // 0x1400(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bTakeRangesFromWeapon;                                   // 0x1480(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C3XN[0x7];                                   // 0x1481(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           MinRange;                                                // 0x1488(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           IdealRange;                                              // 0x1508(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           MaxRange;                                                // 0x1588(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UEnvQueryTestAsset*>                          AdditionalTests;                                         // 0x1608(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<class UGbxWeaponSlotData*>                          WeaponSlots;                                             // 0x1618(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FGbxParam                                           WeaponUseModeIndex;                                      // 0x1628(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           BurstCountOverride;                                      // 0x16A8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bOverrideBurstCount;                                     // 0x1728(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_156Q[0x7];                                   // 0x1729(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           BurstDelayOverride;                                      // 0x1730(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bOverrideBurstDelay;                                     // 0x17B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IT6S[0x7];                                   // 0x17B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           AccuracyOverride;                                        // 0x17B8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bOverrideAccuracy;                                       // 0x1838(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_RB37[0x7];                                   // 0x1839(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           SuppressingFireTime;                                     // 0x1840(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bUseSuppressingFireTime;                                 // 0x18C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseRepositionTicket;                                    // 0x18C1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9M21[0x6];                                   // 0x18C2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           MinRepositionDistance;                                   // 0x18C8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UAITicketDataAsset*                                  RepositionTicket;                                        // 0x1948(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGbxParam                                           TimeToStayAtSpotWhileShooting;                           // 0x1950(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bDistanceToTargetTestShouldFilterOnly;                   // 0x19D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q86W[0x7];                                   // 0x19D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSoftObjectPath                                     DefaultEnvQuery;                                         // 0x19D8(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSoftObjectPath                                     DefaultRepositionTicket;                                 // 0x19F0(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UEnvQuery*                                           DefaultEnvQueryAsset;                                    // 0x1A08(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAITicketDataAsset*                                  DefaultRepositionTicketAsset;                            // 0x1A10(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              SimpleWeaponVersion;                                     // 0x1A18(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YJDX[0x7];                                   // 0x1A19(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_StateMachine
	 * Size -> 0x0000 (FullSize[0x0160] - InheritedSize[0x0160])
	 */
	class UAIAction_StateMachine : public UAIAction_Selector
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_StateMachineChild
	 * Size -> 0x0010 (FullSize[0x0168] - InheritedSize[0x0158])
	 */
	class UAIAction_StateMachineChild : public UAIAction_CompositeChild
	{
	public:
		class UAIAction_StateMachineChild*                         OnSuccess;                                               // 0x0158(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UAIAction_StateMachineChild*                         OnFailure;                                               // 0x0160(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void GetAvailableStates(TArray<class UAIAction_StateMachineChild*>* Array);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Sweep
	 * Size -> 0x00A8 (FullSize[0x0AA0] - InheritedSize[0x09F8])
	 */
	class UAIAction_Sweep : public UAIAction_Orbit
	{
	public:
		struct FAIAspectSettings_Sweep                             SweepSettings;                                           // 0x09F8(0x00A8) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Swoop
	 * Size -> 0x1468 (FullSize[0x1650] - InheritedSize[0x01E8])
	 */
	class UAIAction_Swoop : public UAIAction_Sequence
	{
	public:
		struct FAIAspectSettings_Swoop                             SwoopSettings;                                           // 0x01E8(0x0320) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0508(0x0140) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Rotation                          MoveFarRotationSettings;                                 // 0x0648(0x0550) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseFarRotation;                                         // 0x0B98(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_V6CZ[0x7];                                   // 0x0B99(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_Rotation                          MoveNearRotationSettings;                                // 0x0BA0(0x0550) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseNearRotation;                                        // 0x10F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BTCZ[0x7];                                   // 0x10F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIAspectSettings_Rotation                          MovePassRotationSettings;                                // 0x10F8(0x0550) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUsePassRotation;                                        // 0x1648(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U4MV[0x7];                                   // 0x1649(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_TargetSequence
	 * Size -> 0x0198 (FullSize[0x0380] - InheritedSize[0x01E8])
	 */
	class UAIAction_TargetSequence : public UAIAction_Sequence
	{
	public:
		struct FGbxParam                                           TargetCountMin;                                          // 0x01E8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseTargetCountMin;                                      // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_B0HF[0x7];                                   // 0x0269(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           TargetCountMax;                                          // 0x0270(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseTargetCountMax;                                      // 0x02F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_YL22[0x7];                                   // 0x02F1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           TargetDistance;                                          // 0x02F8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseTargetDistance;                                      // 0x0378(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bPlayersOnly;                                            // 0x0379(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CHYV[0x6];                                   // 0x037A(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_Teleport
	 * Size -> 0x04F0 (FullSize[0x0638] - InheritedSize[0x0148])
	 */
	class UAIAction_Teleport : public UAIAction
	{
	public:
		struct FGbxBlackboardKeySelector                           GoalKey;                                                 // 0x0148(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Teleport                          TeleportSettings;                                        // 0x0158(0x0138) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_EnvQuery                          QuerySettings;                                           // 0x0290(0x03A0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseQuery;                                               // 0x0630(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P4X0[0x7];                                   // 0x0631(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_Teleport
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_Teleport : public UBTTask_AIAction
	{
	public:
		class UAIAction_Teleport*                                  Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_UseCover
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_UseCover : public UBTTask_AIAction
	{
	public:
		class UAIAction_UseCover*                                  Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_UseSmartObject
	 * Size -> 0x0FD8 (FullSize[0x11C0] - InheritedSize[0x01E8])
	 */
	class UAIAction_UseSmartObject : public UAIAction_Sequence
	{
	public:
		struct FAIAspectSettings_UseSmartObject                    SmartObjectSettings;                                     // 0x01E8(0x0478) Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0660(0x0140) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Rotation                          MoveToRotationSettings;                                  // 0x07A0(0x0550) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_EnvQuery                          QuerySettings;                                           // 0x0CF0(0x03A0) Edit, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bUseQuery;                                               // 0x1090(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_UHGX[0x7];                                   // 0x1091(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxBlackboardKeySelector                           SmartAction;                                             // 0x1098(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           MoveTarget;                                              // 0x10A8(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           Distance;                                                // 0x10B8(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           BodyTarget;                                              // 0x10C8(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           LookTarget;                                              // 0x10D8(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FGbxBlackboardKeySelector                           LookEnabled;                                             // 0x10E8(0x0010) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAIAspectSettings_Move                              MoveSettings;                                            // 0x10F8(0x0008) NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FEnvQueryParams                                     SmartObjectQuery;                                        // 0x1100(0x00B8) ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UseSmartObjectVersion;                                   // 0x11B8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7XY0[0x7];                                   // 0x11B9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_UseSmartObject
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_UseSmartObject : public UBTTask_AIAction
	{
	public:
		class UAIAction_UseSmartObject*                            Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_WeaponAtPoint
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_WeaponAtPoint : public UBTTask_AIAction
	{
	public:
		class UAIAction_WeaponAtPoint*                             Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_WeaponIdle
	 * Size -> 0x0920 (FullSize[0x0A68] - InheritedSize[0x0148])
	 */
	class UAIAction_WeaponIdle : public UAIAction
	{
	public:
		struct FAIAspectSettings_Weapon                            WeaponSettings;                                          // 0x0148(0x03D0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Rotation                          RotationSettings;                                        // 0x0518(0x0550) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_WeaponIdle
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_WeaponIdle : public UBTTask_AIAction
	{
	public:
		class UAIAction_WeaponIdle*                                Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIActionBlueprint
	 * Size -> 0x0018 (FullSize[0x0100] - InheritedSize[0x00E8])
	 */
	class UAIActionBlueprint : public UBlueprint
	{
	public:
		class UAIActionBlueprint*                                  ParentBlueprint;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UBlackboardData*                                     Blackboard;                                              // 0x00F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5GPS[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		bool STATIC_ShouldSkipBlackboardProperty(class UProperty* Property);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIActionBlueprintGeneratedClass
	 * Size -> 0x0000 (FullSize[0x02E0] - InheritedSize[0x02E0])
	 */
	class UAIActionBlueprintGeneratedClass : public UBlueprintGeneratedClass
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_RunScriptedAIAction
	 * Size -> 0x0040 (FullSize[0x00A8] - InheritedSize[0x0068])
	 */
	class UGameplayTask_RunScriptedAIAction : public UGameplayTask
	{
	public:
		class UAIActionComponent*                                  ActionComponent;                                         // 0x0068(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UClass*                                              ActionToRun;                                             // 0x0070(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Succeeded;                                               // 0x0078(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Failed;                                                  // 0x0088(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             Aborted;                                                 // 0x0098(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class UGameplayTask_RunScriptedAIAction* STATIC_RunScriptedAIAction_Object(class UObject* Object, class UClass* Action);
		class UGameplayTask_RunScriptedAIAction* STATIC_RunScriptedAIAction_Controller(class AGbxAIController* Controller, class UClass* Action);
		class UGameplayTask_RunScriptedAIAction* STATIC_RunScriptedAIAction_AIActionComponent(class UAIActionComponent* AIActionComponent, class UClass* Action);
		class UGameplayTask_RunScriptedAIAction* STATIC_RunScriptedAIAction_Actor(class AActor* Actor, class UClass* Action);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIActionComponent
	 * Size -> 0x0338 (FullSize[0x0510] - InheritedSize[0x01D8])
	 */
	class UAIActionComponent : public UBrainComponent
	{
	public:
		unsigned char                                              UnknownData_ENS0[0x48];                                  // 0x01D8(0x0048) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              MainAction;                                              // 0x0220(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedMoveAction;                                      // 0x0228(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedMoveSplineAction;                                // 0x0230(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedMoveToLevelSequenceAction;                       // 0x0238(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedLookAction;                                      // 0x0240(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedWaitAction;                                      // 0x0248(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedUseAction;                                       // 0x0250(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedCoverAction;                                     // 0x0258(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedFollowAction;                                    // 0x0260(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedRouteAction;                                     // 0x0268(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedLeadAction;                                      // 0x0270(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UClass*                                              ScriptedLandAction;                                      // 0x0278(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TMap<struct FGameplayTag, class UClass*>                   TaggedActionTable;                                       // 0x0280(0x0050) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		struct FAIActionInstance                                   ActionStack[0x2];                                        // 0x02D0(0x0060) Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_ZUW3[0x1E0];                                 // 0x0330(0x01E0) MISSED OFFSET (PADDING)

	public:
		void ReplaceMainAIAction(class UClass* Action);
		class UBlackboardData* GetBlackboardData();
		void AbortScriptedAIAction(bool bStopImmediately);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIActionManager
	 * Size -> 0x0030 (FullSize[0x0058] - InheritedSize[0x0028])
	 */
	class UAIActionManager : public UObject
	{
	public:
		unsigned char                                              UnknownData_OSM3[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxTickTimeMs;                                           // 0x0030(0x0004) ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HKT3[0x24];                                  // 0x0034(0x0024) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect
	 * Size -> 0x0008 (FullSize[0x0100] - InheritedSize[0x00F8])
	 */
	class UAIAspect : public UAIActionBase
	{
	public:
		struct FAIAspectExecutionSettings                          AspectExecutionSettings;                                 // 0x00F8(0x0005) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_TSXB[0x3];                                   // 0x00FD(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_ActorCollision
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UAIAspect_ActorCollision : public UAIAspect
	{
	public:
		struct FAIAspectSettings_ActorCollision                    Settings;                                                // 0x0100(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		void OnPawnHit(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, const struct FHitResult& Hit);
		void STATIC_GetOnCollisionOptions(TArray<class FName>* Options);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Condition
	 * Size -> 0x0248 (FullSize[0x0348] - InheritedSize[0x0100])
	 */
	class UAIAspect_Condition : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Condition                         Settings;                                                // 0x0100(0x0248) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetConditionDataDescription(const struct FAIAspectSettings_ConditionData& ConditionData);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_AIGroupCondition
	 * Size -> 0x0008 (FullSize[0x0350] - InheritedSize[0x0348])
	 */
	class UAIAspect_AIGroupCondition : public UAIAspect_Condition
	{
	public:
		struct FAIAspectSettings_AIGroupCondition                  GroupSettings;                                           // 0x0348(0x0008) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_AvoidWhileIdle
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UAIAspect_AvoidWhileIdle : public UAIAspect
	{
	public:
		bool                                                       bAvoidWhileIdle;                                         // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VC3B[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_BlackboardKey
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UAIAspect_BlackboardKey : public UAIAspect
	{
	public:
		struct FAIAspectSettings_BlackboardKey                     Settings;                                                // 0x0100(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetSettingsDescription(const struct FAIAspectSettings_BlackboardKey& BBKeySettings);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Charge
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UAIAspect_Charge : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Charge                            Settings;                                                // 0x0100(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Navigation
	 * Size -> 0x0140 (FullSize[0x0240] - InheritedSize[0x0100])
	 */
	class UAIAspect_Navigation : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Navigation                        Settings;                                                // 0x0100(0x0140) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetNavSettingsDescription(const struct FAIAspectSettings_Navigation& NavSettings, class UProperty* Property);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Circle
	 * Size -> 0x0030 (FullSize[0x0270] - InheritedSize[0x0240])
	 */
	class UAIAspect_Circle : public UAIAspect_Navigation
	{
	public:
		struct FGbxBlackboardKeySelector                           GoalKey;                                                 // 0x0240(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      Distance;                                                // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ECircleDirection                                           Direction;                                               // 0x0254(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EVKE[0x3];                                   // 0x0255(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MinOffsetInFrontOfTarget;                                // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOffsetInFrontOfTarget;                                // 0x025C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetAngle;                                             // 0x0260(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      GoalUpdateDistance;                                      // 0x0264(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bTestDirectPath;                                         // 0x0268(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDebugTestDirectPath;                                    // 0x0269(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxNavGoalReach                                           Reach;                                                   // 0x026A(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CI9I[0x5];                                   // 0x026B(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_ClaimSmartObject
	 * Size -> 0x04D8 (FullSize[0x05D8] - InheritedSize[0x0100])
	 */
	class UAIAspect_ClaimSmartObject : public UAIAspect
	{
	public:
		struct FAIAspectSettings_UseSmartObject                    SmartObjectSettings;                                     // 0x0100(0x0478) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           SmartAction;                                             // 0x0578(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           MoveTarget;                                              // 0x0588(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           Distance;                                                // 0x0598(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           BodyTarget;                                              // 0x05A8(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           LookTarget;                                              // 0x05B8(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           LookEnabled;                                             // 0x05C8(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Cooldown
	 * Size -> 0x0220 (FullSize[0x0320] - InheritedSize[0x0100])
	 */
	class UAIAspect_Cooldown : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Cooldown                          Settings;                                                // 0x0100(0x0220) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Crouch
	 * Size -> 0x0108 (FullSize[0x0208] - InheritedSize[0x0100])
	 */
	class UAIAspect_Crouch : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Crouch                            Settings;                                                // 0x0100(0x0108) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_DisableAvoidance
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UAIAspect_DisableAvoidance : public UAIAspect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_MoveNode
	 * Size -> 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
	 */
	class UAIAspect_MoveNode : public UAIAspect_Navigation
	{
	public:
		struct FGbxBlackboardKeySelector                           NodeKey;                                                 // 0x0240(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_UseNode
	 * Size -> 0x0000 (FullSize[0x0250] - InheritedSize[0x0250])
	 */
	class UAIAspect_UseNode : public UAIAspect_MoveNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_DropshipSpawn
	 * Size -> 0x0010 (FullSize[0x0260] - InheritedSize[0x0250])
	 */
	class UAIAspect_DropshipSpawn : public UAIAspect_UseNode
	{
	public:
		struct FAIAspectSettings_DropshipSpawn                     DropshipSettings;                                        // 0x0250(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_EnvQuery
	 * Size -> 0x03C0 (FullSize[0x04C0] - InheritedSize[0x0100])
	 */
	class UAIAspect_EnvQuery : public UAIAspect
	{
	public:
		struct FAIAspectSettings_EnvQuery                          Settings;                                                // 0x0100(0x03A0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_2ZHC[0x10];                                  // 0x04A0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnValueUpdatedBP;                                        // 0x04B0(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetQuerySettingsDescription(const struct FAIAspectSettings_EnvQuery& QuerySettings, class UProperty* Property);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_FaceNearbyCover
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class UAIAspect_FaceNearbyCover : public UAIAspect
	{
	public:
		struct FGbxBlackboardKeySelector                           CoverKey;                                                // 0x0100(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_GbxAction
	 * Size -> 0x0238 (FullSize[0x0338] - InheritedSize[0x0100])
	 */
	class UAIAspect_GbxAction : public UAIAspect
	{
	public:
		struct FAIAspectSettings_GbxAction                         Settings;                                                // 0x0100(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_FallToGround
	 * Size -> 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
	 */
	class UAIAspect_FallToGround : public UAIAspect_GbxAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_FindClosestPlayer
	 * Size -> 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
	 */
	class UAIAspect_FindClosestPlayer : public UAIAspect
	{
	public:
		struct FAIAspectSettings_FindClosestPlayer                 Settings;                                                // 0x0100(0x0020) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_FindCover
	 * Size -> 0x0008 (FullSize[0x04C8] - InheritedSize[0x04C0])
	 */
	class UAIAspect_FindCover : public UAIAspect_EnvQuery
	{
	public:
		bool                                                       bCheckFlanking;                                          // 0x04C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_SUU7[0x7];                                   // 0x04C1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_FlyToNavMesh
	 * Size -> 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
	 */
	class UAIAspect_FlyToNavMesh : public UAIAspect_Navigation
	{
	public:
		struct FAIAspectSettings_FlyToNavMesh                      FlyToNavMeshSettings;                                    // 0x0240(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_FollowUpdate
	 * Size -> 0x01A8 (FullSize[0x02A8] - InheritedSize[0x0100])
	 */
	class UAIAspect_FollowUpdate : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Follow                            Settings;                                                // 0x0100(0x0038) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FAIAspectSettings_Navigation                        NavSettings;                                             // 0x0138(0x0140) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           TeleportTarget;                                          // 0x0278(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           MoveTarget;                                              // 0x0288(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           Distance;                                                // 0x0298(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_GroupLocation
	 * Size -> 0x0098 (FullSize[0x0198] - InheritedSize[0x0100])
	 */
	class UAIAspect_GroupLocation : public UAIAspect
	{
	public:
		struct FAIAspectSettings_GroupLocation                     Settings;                                                // 0x0100(0x0098) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_IntCompare
	 * Size -> 0x00A0 (FullSize[0x01A0] - InheritedSize[0x0100])
	 */
	class UAIAspect_IntCompare : public UAIAspect
	{
	public:
		struct FAIAspectSettings_IntCompare                        Settings;                                                // 0x0100(0x00A0) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_IsInRange
	 * Size -> 0x0248 (FullSize[0x0348] - InheritedSize[0x0100])
	 */
	class UAIAspect_IsInRange : public UAIAspect
	{
	public:
		struct FAIAspectSettings_IsInRange                         Settings;                                                // 0x0100(0x0248) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_IsInTerritory
	 * Size -> 0x0018 (FullSize[0x0118] - InheritedSize[0x0100])
	 */
	class UAIAspect_IsInTerritory : public UAIAspect
	{
	public:
		struct FAIAspectSettings_IsInTerritory                     Settings;                                                // 0x0100(0x0018) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Land
	 * Size -> 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
	 */
	class UAIAspect_Land : public UAIAspect_Navigation
	{
	public:
		struct FAIAspectSettings_Land                              LandSettings;                                            // 0x0240(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DPS5[0x4];                                   // 0x024C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_LeadUpdate
	 * Size -> 0x0080 (FullSize[0x0180] - InheritedSize[0x0100])
	 */
	class UAIAspect_LeadUpdate : public UAIAspect
	{
	public:
		struct FAIAspectSettings_LeadRoute                         LeadSettings;                                            // 0x0100(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           MoveTarget;                                              // 0x0150(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           Distance;                                                // 0x0160(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           TeleportTarget;                                          // 0x0170(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Leap
	 * Size -> 0x0058 (FullSize[0x0158] - InheritedSize[0x0100])
	 */
	class UAIAspect_Leap : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Leap                              Settings;                                                // 0x0100(0x0058) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetQuerySettingsDescription(const struct FAIAspectSettings_Leap& LeapSettings, class UProperty* Property);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Location
	 * Size -> 0x01E0 (FullSize[0x02E0] - InheritedSize[0x0100])
	 */
	class UAIAspect_Location : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Location                          Settings;                                                // 0x0100(0x01E0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_LockTarget
	 * Size -> 0x0008 (FullSize[0x0108] - InheritedSize[0x0100])
	 */
	class UAIAspect_LockTarget : public UAIAspect
	{
	public:
		bool                                                       bFailOnTargetChange;                                     // 0x0100(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_EIR8[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_LookAroundRandomly
	 * Size -> 0x0050 (FullSize[0x0150] - InheritedSize[0x0100])
	 */
	class UAIAspect_LookAroundRandomly : public UAIAspect
	{
	public:
		unsigned char                                              UnknownData_JGU3[0x50];                                  // 0x0100(0x0050) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Loop
	 * Size -> 0x0198 (FullSize[0x0298] - InheritedSize[0x0100])
	 */
	class UAIAspect_Loop : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Loop                              Settings;                                                // 0x0100(0x0198) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetSettingsDescription(const struct FAIAspectSettings_Loop& LoopSettings);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_MoveSpline
	 * Size -> 0x0050 (FullSize[0x0290] - InheritedSize[0x0240])
	 */
	class UAIAspect_MoveSpline : public UAIAspect_Navigation
	{
	public:
		struct FAIAspectSettings_MoveSpline                        MoveSplineSettings;                                      // 0x0240(0x0050) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_NavBlackboard
	 * Size -> 0x0020 (FullSize[0x0260] - InheritedSize[0x0240])
	 */
	class UAIAspect_NavBlackboard : public UAIAspect_Navigation
	{
	public:
		struct FGbxBlackboardKeySelector                           GoalKey;                                                 // 0x0240(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      MinOffsetInFrontOfTarget;                                // 0x0250(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      MaxOffsetInFrontOfTarget;                                // 0x0254(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      OffsetAngle;                                             // 0x0258(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EGbxNavGoalReach                                           Reach;                                                   // 0x025C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_W9VN[0x3];                                   // 0x025D(0x0003) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_NavCover
	 * Size -> 0x0010 (FullSize[0x0250] - InheritedSize[0x0240])
	 */
	class UAIAspect_NavCover : public UAIAspect_Navigation
	{
	public:
		struct FGbxBlackboardKeySelector                           GoalKey;                                                 // 0x0240(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_NavFlyOffset
	 * Size -> 0x0120 (FullSize[0x0360] - InheritedSize[0x0240])
	 */
	class UAIAspect_NavFlyOffset : public UAIAspect_Navigation
	{
	public:
		struct FAIAspectSettings_NavFlyOffset                      OffsetSettings;                                          // 0x0240(0x0120) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Orbit
	 * Size -> 0x0220 (FullSize[0x0460] - InheritedSize[0x0240])
	 */
	class UAIAspect_Orbit : public UAIAspect_Navigation
	{
	public:
		struct FAIAspectSettings_Orbit                             OrbitSettings;                                           // 0x0240(0x0220) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Plan
	 * Size -> 0x0020 (FullSize[0x0120] - InheritedSize[0x0100])
	 */
	class UAIAspect_Plan : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Plan                              Settings;                                                // 0x0100(0x0020) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Rotation
	 * Size -> 0x0550 (FullSize[0x0650] - InheritedSize[0x0100])
	 */
	class UAIAspect_Rotation : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Rotation                          Settings;                                                // 0x0100(0x0550) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetRotationSettingsDescription(const struct FAIAspectSettings_Rotation& RotationSettings, class UProperty* Property);
		class FString STATIC_GetRotationChannelSettingsDescription(const struct FAIAspectSettings_RotationChannel& RotationChannelSettings, class UProperty* Property);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Route
	 * Size -> 0x0098 (FullSize[0x0198] - InheritedSize[0x0100])
	 */
	class UAIAspect_Route : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Route                             RouteSettings;                                           // 0x0100(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           MoveTarget;                                              // 0x0128(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           Distance;                                                // 0x0138(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           SmartAction;                                             // 0x0148(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           BodyEnable;                                              // 0x0158(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           BodyTarget;                                              // 0x0168(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           LookEnable;                                              // 0x0178(0x0010) NoDestructor, NativeAccessSpecifierPublic
		struct FGbxBlackboardKeySelector                           LookTarget;                                              // 0x0188(0x0010) NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Stance
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class UAIAspect_Stance : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Stance                            Settings;                                                // 0x0100(0x0010) Edit, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Sweep
	 * Size -> 0x00A8 (FullSize[0x0508] - InheritedSize[0x0460])
	 */
	class UAIAspect_Sweep : public UAIAspect_Orbit
	{
	public:
		struct FAIAspectSettings_Sweep                             SweepSettings;                                           // 0x0460(0x00A8) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Swoop
	 * Size -> 0x0340 (FullSize[0x0580] - InheritedSize[0x0240])
	 */
	class UAIAspect_Swoop : public UAIAspect_Navigation
	{
	public:
		struct FAIAspectSettings_Swoop                             SwoopSettings;                                           // 0x0240(0x0320) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnReachedFarBP;                                          // 0x0560(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnReachedNearBP;                                         // 0x0570(0x0010) ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_TakeOff
	 * Size -> 0x0008 (FullSize[0x0340] - InheritedSize[0x0338])
	 */
	class UAIAspect_TakeOff : public UAIAspect_GbxAction
	{
	public:
		float                                                      NearFlightDistance;                                      // 0x0338(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9IIA[0x4];                                   // 0x033C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Teleport
	 * Size -> 0x0138 (FullSize[0x0238] - InheritedSize[0x0100])
	 */
	class UAIAspect_Teleport : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Teleport                          Settings;                                                // 0x0100(0x0138) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetTeleportSettingsDescription(const struct FAIAspectSettings_Teleport& TeleportSettings, class UProperty* Property);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Territory
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class UAIAspect_Territory : public UAIAspect
	{
	public:
		TArray<struct FGbxBlackboardKeySelector>                   TerritoryKeys;                                           // 0x0100(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Ticket
	 * Size -> 0x0128 (FullSize[0x0228] - InheritedSize[0x0100])
	 */
	class UAIAspect_Ticket : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Ticket                            Settings;                                                // 0x0100(0x0128) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_TimedCondition
	 * Size -> 0x0118 (FullSize[0x0218] - InheritedSize[0x0100])
	 */
	class UAIAspect_TimedCondition : public UAIAspect
	{
	public:
		struct FAIAspectSettings_TimedCondition                    Settings;                                                // 0x0100(0x0118) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_TimeLimit
	 * Size -> 0x0108 (FullSize[0x0208] - InheritedSize[0x0100])
	 */
	class UAIAspect_TimeLimit : public UAIAspect
	{
	public:
		struct FAIAspectSettings_TimeLimit                         Settings;                                                // 0x0100(0x0108) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Timer
	 * Size -> 0x04C8 (FullSize[0x05C8] - InheritedSize[0x0100])
	 */
	class UAIAspect_Timer : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Timer                             Settings;                                                // 0x0100(0x04C8) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_UseCover
	 * Size -> 0x0138 (FullSize[0x0238] - InheritedSize[0x0100])
	 */
	class UAIAspect_UseCover : public UAIAspect
	{
	public:
		struct FAIAspectSettings_UseCover                          Settings;                                                // 0x0100(0x0138) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_UseSmartObject
	 * Size -> 0x0000 (FullSize[0x0338] - InheritedSize[0x0338])
	 */
	class UAIAspect_UseSmartObject : public UAIAspect_GbxAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_Weapon
	 * Size -> 0x03D0 (FullSize[0x04D0] - InheritedSize[0x0100])
	 */
	class UAIAspect_Weapon : public UAIAspect
	{
	public:
		struct FAIAspectSettings_Weapon                            Settings;                                                // 0x0100(0x03D0) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		class FString STATIC_GetWeaponSettingsDescription(const struct FAIAspectSettings_Weapon& WeaponSettings, class UProperty* Property);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspect_ZeroRotation
	 * Size -> 0x0010 (FullSize[0x0110] - InheritedSize[0x0100])
	 */
	class UAIAspect_ZeroRotation : public UAIAspect
	{
	public:
		struct FAIAspectSettings_ZeroRotation                      Settings;                                                // 0x0100(0x000C) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PC1J[0x4];                                   // 0x010C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAspectBlueprint
	 * Size -> 0x0008 (FullSize[0x00F0] - InheritedSize[0x00E8])
	 */
	class UAIAspectBlueprint : public UBlueprint
	{
	public:
		class UAIAspectBlueprint*                                  ParentBlueprint;                                         // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AICloakData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UAICloakData : public UDataAsset
	{
	public:
		TArray<struct FCloakCondition>                             CloakPriorities;                                         // 0x0030(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bDefaultCloaked;                                         // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_88ED[0x7];                                   // 0x0041(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AICloakComponent
	 * Size -> 0x00F8 (FullSize[0x0270] - InheritedSize[0x0178])
	 */
	class UAICloakComponent : public UActorComponent
	{
	public:
		class FScriptMulticastDelegate                             OnCloaked;                                               // 0x0178(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUncloaked;                                             // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UAICloakData*                                        DefaultCloakData;                                        // 0x0198(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bRender;                                                 // 0x01A0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCollide;                                                // 0x01A1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bVisible;                                                // 0x01A2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTargetable;                                             // 0x01A3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bGodMode;                                                // 0x01A4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDemigodMode;                                            // 0x01A5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowHitReactions;                                      // 0x01A6(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bOnlyMoveWhileCloaked;                                   // 0x01A7(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanCloakWithMovementHold;                               // 0x01A8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCloakedOnSpawn;                                         // 0x01A9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YO57[0x6];                                   // 0x01AA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class FName>                                        RenderExceptions;                                        // 0x01B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      MinimumTransitionTime;                                   // 0x01C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XVDA[0x4];                                   // 0x01C4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStanceDataProvider*                                 CloakedStance;                                           // 0x01C8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ActionCloak;                                             // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ActionUncloak;                                           // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCloakAfterAction;                                       // 0x01E0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUncloakAfterAction;                                     // 0x01E1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCanInterruptActions;                                    // 0x01E2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLockActions;                                            // 0x01E3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9AAQ[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAICloakData*                                        OverrideData;                                            // 0x01E8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxActionComponent*                                 ActionComp;                                              // 0x01F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTargetableComponent*                                TargetableComp;                                          // 0x01F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    NavComp;                                                 // 0x0200(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCharacterMovementComponent*                      MoveComp;                                                // 0x0208(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStanceComponent*                                    StanceComp;                                              // 0x0210(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDamageComponent*                                    DamageComp;                                              // 0x0218(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O408[0x10];                                  // 0x0220(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FSavedCollision                                     SavedCollision;                                          // 0x0230(0x0020) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FCloakRepData                                       RepData;                                                 // 0x0250(0x0002) Net, Transient, IsPlainOldData, RepNotify, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_9BPE[0x6];                                   // 0x0252(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCloakPrimData>                              PrimCompData;                                            // 0x0258(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SB7G[0x8];                                   // 0x0268(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetCloakData(class UAICloakData* NewCloakData);
		void OnRep_Cloaked();
		bool IsPlayingAction();
		bool IsCloakStateForced();
		bool IsCloaked();
		void InterruptCloakAction();
		class UAICloakData* GetCloakData();
		void ForceUncloak(bool bInCanPlayActions);
		void ForceCloak(bool bInCanPlayActions);
		void ClearForcedState();
		void ClearCloakData();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIConstraint
	 * Size -> 0x0000 (FullSize[0x0100] - InheritedSize[0x0100])
	 */
	class UAIConstraint : public UAIAspect
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIGroupBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAIGroupBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsUsingAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, bool bInterruptible);
		bool STATIC_IsTicketValid(struct FAITicketHandle* TicketHandle);
		void STATIC_ClearTicket(struct FAITicketHandle* TicketHandle, float HoldDuration);
		void STATIC_ClearAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float HoldDuration);
		bool STATIC_CanUseAITicket(class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, bool bInterruptible);
		bool STATIC_AddAITicket(struct FAITicketHandle* OutTicketHandle, class AAIController* AIUser, class UAITicketDataAsset* Ticket, float Value, float MaxDuration, bool bPriority, bool bInterruptible);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIGroupState
	 * Size -> 0x2818 (FullSize[0x2840] - InheritedSize[0x0028])
	 */
	class UAIGroupState : public UObject
	{
	public:
		unsigned char                                              UnknownData_KL0X[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USpawnerLinkComponent*                               LinkComponent;                                           // 0x0040(0x0008) Edit, ExportObject, ZeroConstructor, Transient, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAITicketManager                                    TicketManager;                                           // 0x0048(0x2718) Edit, EditConst, NativeAccessSpecifierPrivate
		struct FAICommunicationManager                             CommunicationManager;                                    // 0x2760(0x0048) Edit, EditConst, NativeAccessSpecifierPrivate
		struct FAIPlanManager                                      PlanManager;                                             // 0x27A8(0x0080) Edit, EditConst, NativeAccessSpecifierPrivate
		TArray<struct FTargetPersistentNotes>                      TargetPersistentNotes;                                   // 0x2828(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_SRXB[0x8];                                   // 0x2838(0x0008) MISSED OFFSET (PADDING)

	public:
		void OnThreatActorDied(class AActor* DamageReceiver, class AActor* DamageCauser);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AINode
	 * Size -> 0x0040 (FullSize[0x0498] - InheritedSize[0x0458])
	 */
	class AAINode : public AActor
	{
	public:
		class UAINodeComponent*                                    AINodeComponent;                                         // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPawnArrivedNode;                                       // 0x0460(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPawnDepartedNode;                                      // 0x0470(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_WH50[0x18];                                  // 0x0480(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnPawnDepartedNodeCB(class AActor* NodeActor, class APawn* DepartedPawn);
		void OnPawnArrivedNodeCB(class AActor* NodeActor, class APawn* ArrivedPawn);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AINodeBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAINodeBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		class AActor* STATIC_FindNearestNode(class UObject* WorldContextObject, const struct FVector& Location, bool bIncludeDisabled);
		void STATIC_FindAllNodes(TArray<class AActor*>* OutputNodes, class UObject* WorldContextObject, bool bIncludeDisabled);
		class AActor* STATIC_ChooseRandomNode(class UObject* WorldContextObject, bool bIncludeDisabled);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AINodeComponent
	 * Size -> 0x00A0 (FullSize[0x0790] - InheritedSize[0x06F0])
	 */
	class UAINodeComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_CXG0[0x8];                                   // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		bool                                                       bEnabled;                                                // 0x06F8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUseRouteSystem;                                         // 0x06F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A5SY[0x2];                                   // 0x06FA(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RouteFindNavHeight;                                      // 0x06FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bDrawRouteFindNavHeight;                                 // 0x0700(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_R4X4[0x3];                                   // 0x0701(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ArrivalThreshold;                                        // 0x0704(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ArrivalHeightThreshold;                                  // 0x0708(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToGround;                                           // 0x070C(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_51HI[0x3];                                   // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxSnapDistance;                                         // 0x0710(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_S101[0x4];                                   // 0x0714(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FAINodeLink>                                 LinksTo;                                                 // 0x0718(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnTemplate, NativeAccessSpecifierPublic
		TArray<class AActor*>                                      EditCache;                                               // 0x0728(0x0010) ZeroConstructor, Transient, DuplicateTransient, NativeAccessSpecifierPublic
		TArray<class UAINodeComponent*>                            LinksFrom;                                               // 0x0738(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPawnArrivedNode;                                       // 0x0748(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnPawnDepartedNode;                                      // 0x0758(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bLinkOnAltDrag;                                          // 0x0768(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bVisualizeWhileUnlinked;                                 // 0x0769(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRouteSelected;                                          // 0x076A(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bSelected;                                               // 0x076B(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_HMEC[0x24];                                  // 0x076C(0x0024) MISSED OFFSET (PADDING)

	public:
		class AActor* SelectNextNode();
		bool HasLinkTo(class AActor* Node);
		bool HasLinkFrom(class AActor* Node);
		bool HasArrived(const struct FVector& Point, float Error);
		int32_t GetLinkedNodeNum();
		class AActor* GetLinkedNode(int32_t I);
		void CreateLinkTo(class AActor* Node, float Weight);
		bool BreakLinkTo(class AActor* Node);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIPlanData
	 * Size -> 0x0090 (FullSize[0x00C0] - InheritedSize[0x0030])
	 */
	class UAIPlanData : public UGbxDataAsset
	{
	public:
		struct FGbxParam                                           MaxNumberOfInstances;                                    // 0x0030(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FPlanRoleRequirements>                       RoleRequirements;                                        // 0x00B0(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AISense_Proximity
	 * Size -> 0x0068 (FullSize[0x0100] - InheritedSize[0x0098])
	 */
	class UAISense_Proximity : public UAISense
	{
	public:
		unsigned char                                              UnknownData_MV3P[0x68];                                  // 0x0098(0x0068) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AISense_Threat
	 * Size -> 0x0088 (FullSize[0x0120] - InheritedSize[0x0098])
	 */
	class UAISense_Threat : public UAISense
	{
	public:
		unsigned char                                              UnknownData_RSSD[0x70];                                  // 0x0098(0x0070) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UTargetingComponent*>                         TargetingComponents;                                     // 0x0108(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		float                                                      UpdatePeriod;                                            // 0x0118(0x0004) Edit, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_3Z7W[0x4];                                   // 0x011C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AISenseConfig_Proximity
	 * Size -> 0x0008 (FullSize[0x0050] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Proximity : public UAISenseConfig
	{
	public:
		float                                                      SenseEnemyDistance;                                      // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x004C(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AISenseConfig_Threat
	 * Size -> 0x0010 (FullSize[0x0058] - InheritedSize[0x0048])
	 */
	class UAISenseConfig_Threat : public UAISenseConfig
	{
	public:
		struct FAISenseAffiliationFilter                           DetectionByAffiliation;                                  // 0x0048(0x0004) Edit, BlueprintVisible, BlueprintReadOnly, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_05VX[0x4];                                   // 0x004C(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Implementation;                                          // 0x0050(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, NoClear, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIStanceData
	 * Size -> 0x0010 (FullSize[0x00B8] - InheritedSize[0x00A8])
	 */
	class UAIStanceData : public UStanceData
	{
	public:
		class UHavokPathFindingData*                               AIPathFindData;                                          // 0x00A8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxStrafeType                                             AIStrafeType;                                            // 0x00B0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VSE3[0x7];                                   // 0x00B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AITargetingBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UAITargetingBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_IsThreatenedByInfo(class AActor* AIActor, const struct FTargetActorInfo& TargetInfo);
		bool STATIC_IsThreatenedBy(class AActor* AIActor, class AActor* Target);
		float STATIC_GetTargetSenseAge(const struct FTargetActorInfo& TargetInfo, class UClass* Sense);
		int32_t STATIC_GetNumTargetsInRange(class AActor* AIActor, float Radius);
		struct FVector STATIC_GetBestKnownLocation(class AActor* AIActor, class AActor* TargetActor, const class FName& Socket);
		bool STATIC_CalcTargetGroupLocation(class AActor* AIActor, float GroupDistance, struct FVector* Result);
		void STATIC_ApplyTargetScoringBoost(class AActor* TargetActor, const class FName& BoostName, EAITargetScoringBoost ScoringBoost, float DurationInSeconds);
		void STATIC_AISetTargetInBlackboard(class AActor* AIActor, const struct FGbxBlackboardKeySelector& Key, int32_t TargetIndex);
		void STATIC_AISetScriptedTarget(class AActor* AIActor, class AActor* TargetActor);
		void STATIC_AISendCommunication(class AActor* AIActor, float Radius);
		void STATIC_AIProvokeSpecificSense(class AActor* AITarget, class AActor* Source, class UClass* SenseType, const struct FVector& StimulusLocation);
		void STATIC_AIProvoke(class AActor* AITarget, class AActor* Source);
		void STATIC_AIPlayerProvoke(class AActor* AITarget);
		class AActor* STATIC_AIGetScriptedTarget(class AActor* AIActor);
		bool STATIC_AICanCommunicate(class AActor* AIActor, float Radius, float MinSenseAgeDelta);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AITask_UseLookAtPoint
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class UAITask_UseLookAtPoint : public UAITask
	{
	public:
		unsigned char                                              UnknownData_ZFBE[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULookAtPointComponent*                               LookAtPointComponent;                                    // 0x0080(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class ULookAtPointTag*                                     Tag;                                                     // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAITask_MoveTo*                                      MoveToTask;                                              // 0x0090(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GO3W[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		ESmartObjectTaskState                                      State;                                                   // 0x00A8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6TGA[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AITask_UsePerch
	 * Size -> 0x0040 (FullSize[0x00B0] - InheritedSize[0x0070])
	 */
	class UAITask_UsePerch : public UAITask
	{
	public:
		unsigned char                                              UnknownData_ZDRG[0x10];                                  // 0x0070(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPerchComponent*                                     PerchComponent;                                          // 0x0080(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UPerchTag*                                           Tag;                                                     // 0x0088(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_02DA[0x10];                                  // 0x0090(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAITask_MoveTo*                                      MoveToTask;                                              // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ESmartObjectTaskState                                      State;                                                   // 0x00A8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_43I9[0x7];                                   // 0x00A9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AITask_UseSmartObject
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UAITask_UseSmartObject : public UAITask
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AITicketDataAsset
	 * Size -> 0x0110 (FullSize[0x0140] - InheritedSize[0x0030])
	 */
	class UAITicketDataAsset : public UGbxDataAsset
	{
	public:
		struct FGbxParam                                           MaxValue;                                                // 0x0030(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           DefaultMaxHoldTime;                                      // 0x00B0(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bPerActor;                                               // 0x0130(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_99JV[0x7];                                   // 0x0131(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                ActorBlackboardKeyName;                                  // 0x0138(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIUsableComponent
	 * Size -> 0x0038 (FullSize[0x01B0] - InheritedSize[0x0178])
	 */
	class UAIUsableComponent : public UActorComponent
	{
	public:
		bool                                                       bEnabled;                                                // 0x0178(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VK67[0x7];                                   // 0x0179(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USmartObjectComponent*                               SmartObjectComponent;                                    // 0x0180(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UAIUseSlotComponent*>                         UseSlots;                                                // 0x0188(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_IFBR[0x18];                                  // 0x0198(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIUseComponent
	 * Size -> 0x0160 (FullSize[0x02D8] - InheritedSize[0x0178])
	 */
	class UAIUseComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_DBRK[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ReserveEvent;                                            // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             UnreserveEvent;                                          // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             BeginEvent;                                              // 0x01A0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             InterruptEvent;                                          // 0x01B0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             SuccessEvent;                                            // 0x01C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class APawn*                                               CachedPawn;                                              // 0x01D0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGbxAIController*                                    CachedController;                                        // 0x01D8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxActionComponent*                                 CachedActionComponent;                                   // 0x01E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FActionUseState                                     UseState;                                                // 0x01E8(0x00C0) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bInitializingAction;                                     // 0x02A8(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_72G4[0x7];                                   // 0x02A9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FActionCooldownInfo>                         GlobalCooldowns;                                         // 0x02B0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JZO4[0x18];                                  // 0x02C0(0x0018) MISSED OFFSET (PADDING)

	public:
		void StopUse(bool bSucceeded);
		bool RequestUse(class AActor* SmartObject, const struct FGameplayTag& ActionName, bool bAbortExisting, bool bUntilInterrupted);
		void OnUseCompleted(class UAITask* Task, ESmartObjectTaskResult Result);
		class AActor* GetCurrentObject();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIUseSlotComponent
	 * Size -> 0x0060 (FullSize[0x0750] - InheritedSize[0x06F0])
	 */
	class UAIUseSlotComponent : public UPrimitiveComponent
	{
	public:
		bool                                                       bEnabled;                                                // 0x06F0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bSnapToGround;                                           // 0x06F1(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESlotAlignRule                                             AlignRule;                                               // 0x06F2(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpOnArrival;                                        // 0x06F3(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bInterpRotationOnArrival;                                // 0x06F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VYL6[0x3];                                   // 0x06F5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      InterpOnArrivalTime;                                     // 0x06F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESmartObjectLookAtRule                                     LookAtRule;                                              // 0x06FC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverrideLookAtRule;                                     // 0x06FD(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_K4BS[0x2];                                   // 0x06FE(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LookAtSocket;                                            // 0x0700(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTagContainer                               ActionTypes;                                             // 0x0708(0x0020) Edit, NativeAccessSpecifierPublic
		float                                                      Radius;                                                  // 0x0728(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bMaxUsers;                                               // 0x072C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DZNM[0x3];                                   // 0x072D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxUsers;                                                // 0x0730(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceUsePhysNoneWithRootMotion;                         // 0x0734(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_5H5F[0x3];                                   // 0x0735(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AController*>                                 Users;                                                   // 0x0738(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2SKI[0x8];                                   // 0x0748(0x0008) MISSED OFFSET (PADDING)

	public:
		void GetAvailableSocketNames(TArray<class FName>* Array);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIWeaponUserComponent
	 * Size -> 0x0738 (FullSize[0x08B0] - InheritedSize[0x0178])
	 */
	class UAIWeaponUserComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_BJR6[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             ReloadEvent;                                             // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             BeginFiringEvent;                                        // 0x0190(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class AGbxAIController*                                    AIController;                                            // 0x01A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class AGbxCharacter*                                       GbxCharacter;                                            // 0x01A8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6YHF[0x10];                                  // 0x01B0(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      FireConeAngle;                                           // 0x01C0(0x0004) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_C83Q[0x2C];                                  // 0x01C4(0x002C) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              WeaponUser[0x10];                                        // 0x01F0(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxAI.AIWeaponUserComponent.WeaponUser
		unsigned char                                              Weapon[0x10];                                            // 0x0200(0x0010) UNKNOWN PROPERTY: InterfaceProperty GbxAI.AIWeaponUserComponent.Weapon
		class UDamageComponent*                                    DamageComponent;                                         // 0x0210(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoverUserComponent*                                 CoverUserComponent;                                      // 0x0218(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBlackboardComponent*                                BlackboardComponent;                                     // 0x0220(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIPerceptionComponent*                              PerceptionComponent;                                     // 0x0228(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTargetingComponent*                                 TargetingComponent;                                      // 0x0230(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCondition*                                       CanFireIf;                                               // 0x0238(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAIWeaponUseSettings                                Settings;                                                // 0x0240(0x0238) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIWeaponUseSettings                                SettingsOverride;                                        // 0x0478(0x0238) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bSuppressingFireTimeExpired;                             // 0x06B0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MW4G[0x7];                                   // 0x06B1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           BurstCountOverride;                                      // 0x06B8(0x0080) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bOverrideBurstCount;                                     // 0x0738(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1QNR[0x7];                                   // 0x0739(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           BurstDelayOverride;                                      // 0x0740(0x0080) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bOverrideBurstDelay;                                     // 0x07C0(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_T4CI[0x7];                                   // 0x07C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           AccuracyOverride;                                        // 0x07C8(0x0080) NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bOverrideAccuracy;                                       // 0x0848(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QBC7[0x3];                                   // 0x0849(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FNumericRange                                       DesiredRangeOverride;                                    // 0x084C(0x0008) NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bOverrideDesiredRange;                                   // 0x0854(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BQTD[0x5B];                                  // 0x0855(0x005B) MISSED OFFSET (PADDING)

	public:
		bool WantsToFire();
		void OnWeaponUsed();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AnimNotify_SmartObject
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UAnimNotify_SmartObject : public UAnimNotifyState
	{
	public:
		ESmartObjectNotify                                         Action;                                                  // 0x0030(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_423G[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AnimNotify_UseSmartAction
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAnimNotify_UseSmartAction : public UAnimNotify
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BlackboardKeyType_SmartAction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UBlackboardKeyType_SmartAction : public UBlackboardKeyType
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTComposite_Random
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UBTComposite_Random : public UBTComposite_Selector
	{
	public:
		TArray<struct FBTRandomEntrySettings>                      Entries;                                                 // 0x0090(0x0010) Edit, EditFixedSize, ZeroConstructor, NoClear, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTDecorator_AIAction
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UBTDecorator_AIAction : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.UBTDecorator_AITicket
	 * Size -> 0x0000 (FullSize[0x0068] - InheritedSize[0x0068])
	 */
	class UUBTDecorator_AITicket : public UBTDecorator
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTDecorator_GbxLoop
	 * Size -> 0x0128 (FullSize[0x0190] - InheritedSize[0x0068])
	 */
	class UBTDecorator_GbxLoop : public UBTDecorator
	{
	public:
		struct FGbxParam                                           LoopCount;                                               // 0x0068(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLoopCount;                                           // 0x00E8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4TDM[0x7];                                   // 0x00E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           LoopTime;                                                // 0x00F0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLoopTime;                                            // 0x0170(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_4AIR[0x7];                                   // 0x0171(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBTGbxLoopConditionData                             LoopCondition;                                           // 0x0178(0x0010) Edit, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseLoopCondition;                                       // 0x0188(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7VFT[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTDecorator_IsInRange
	 * Size -> 0x0080 (FullSize[0x0110] - InheritedSize[0x0090])
	 */
	class UBTDecorator_IsInRange : public UBTDecorator_BlackboardBase
	{
	public:
		struct FGbxParam                                           Range;                                                   // 0x0090(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTService_GameFocus
	 * Size -> 0x0000 (FullSize[0x00A0] - InheritedSize[0x00A0])
	 */
	class UBTService_GameFocus : public UBTService_DefaultFocus
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTService_GbxRunEQS
	 * Size -> 0x0000 (FullSize[0x00F8] - InheritedSize[0x00F8])
	 */
	class UBTService_GbxRunEQS : public UBTService_RunEQS
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_AIAction_Custom
	 * Size -> 0x0008 (FullSize[0x0080] - InheritedSize[0x0078])
	 */
	class UBTTask_AIAction_Custom : public UBTTask_AIAction
	{
	public:
		class UAIAction*                                           Action;                                                  // 0x0078(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_LookAt
	 * Size -> 0x0058 (FullSize[0x00C8] - InheritedSize[0x0070])
	 */
	class UBTTask_LookAt : public UBTTaskNode
	{
	public:
		float                                                      AngleThresholdDegrees;                                   // 0x0070(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q1WY[0x4];                                   // 0x0074(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FBlackboardKeySelector                              TargetActorKey;                                          // 0x0078(0x0028) Edit, NativeAccessSpecifierPrivate
		struct FBlackboardKeySelector                              TurnSpeedKey;                                            // 0x00A0(0x0028) Edit, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_MoveToComponent
	 * Size -> 0x0008 (FullSize[0x00A0] - InheritedSize[0x0098])
	 */
	class UBTTask_MoveToComponent : public UBTTask_BlackboardBase
	{
	public:
		float                                                      AcceptableRadius;                                        // 0x0098(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowStrafe;                                            // 0x009C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bStopOnOverlap;                                          // 0x009D(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAllowPartialPath;                                       // 0x009E(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bProjectGoalLocation;                                    // 0x009F(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_MoveToNode
	 * Size -> 0x0000 (FullSize[0x00B0] - InheritedSize[0x00B0])
	 */
	class UBTTask_MoveToNode : public UBTTask_MoveTo
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_UseCover
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTTask_UseCover : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.BTTask_UseSmartObject
	 * Size -> 0x0000 (FullSize[0x0070] - InheritedSize[0x0070])
	 */
	class UBTTask_UseSmartObject : public UBTTaskNode
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.Cover
	 * Size -> 0x00B8 (FullSize[0x0510] - InheritedSize[0x0458])
	 */
	class ACover : public AActor
	{
	public:
		struct FSoftObjectPath                                     DefaultCoverSlotName;                                    // 0x0458(0x0018) Config, GlobalConfig, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UCoverSlotData*                                      SlotType;                                                // 0x0470(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SlotInterval;                                            // 0x0478(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TotalWidth;                                              // 0x047C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSlotsAlwaysVisible;                                     // 0x0480(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDrawLineOfSight;                                        // 0x0481(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDrawAreas;                                              // 0x0482(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDrawInvalidViews;                                       // 0x0483(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDrawLocationTests;                                      // 0x0484(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_DLMQ[0x3];                                   // 0x0485(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoverSlotComponent*>                         Slots;                                                   // 0x0488(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bOverrideAutoAdjust;                                     // 0x0498(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_NBYQ[0x3];                                   // 0x0499(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoverAdjustParams                                  AutoAdjustParamsOverride;                                // 0x049C(0x0040) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QAT4[0x4];                                   // 0x04DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AActor*                                              TargetTestActor;                                         // 0x04E0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              HostileTestActor;                                        // 0x04E8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoAdjust;                                             // 0x04F0(0x0001) Edit, ZeroConstructor, Config, GlobalConfig, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OIGL[0x1F];                                  // 0x04F1(0x001F) MISSED OFFSET (PADDING)

	public:
		void SetEnabled(bool bEnabled);
		bool IsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.CoverSlotComponent
	 * Size -> 0x0150 (FullSize[0x0840] - InheritedSize[0x06F0])
	 */
	class UCoverSlotComponent : public UPrimitiveComponent
	{
	public:
		class UCoverSlotData*                                      SlotType;                                                // 0x06F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnabled;                                                // 0x06F8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bAutoDetect;                                             // 0x06F9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bValid;                                                  // 0x06FA(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_AW5I[0x5];                                   // 0x06FB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCoverSlotViewData>                          Views;                                                   // 0x0700(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		TArray<struct FCoverSlotViewFailData>                      FailedViews;                                             // 0x0710(0x0010) Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPrivate
		ECoverSlotHeight                                           SlotHeight;                                              // 0x0720(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_JS7D[0x7];                                   // 0x0721(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoverSlotComponent*>                         OverlappingSlots;                                        // 0x0728(0x0010) Edit, ExportObject, ZeroConstructor, EditConst, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QIYM[0x8];                                   // 0x0738(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoverLineOfSightData                               ExposedLosData;                                          // 0x0740(0x00B0) NativeAccessSpecifierPrivate
		class APawn*                                               SlotOwnerUsing;                                          // 0x07F0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class APawn*                                               SlotOwnerClaimed;                                        // 0x07F8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GQUZ[0x40];                                  // 0x0800(0x0040) MISSED OFFSET (PADDING)

	public:
		void SetEnabled(bool bNewEnabled);
		bool IsEnabled();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.CoverSlotData
	 * Size -> 0x0098 (FullSize[0x00C8] - InheritedSize[0x0030])
	 */
	class UCoverSlotData : public UGbxDataAsset
	{
	public:
		float                                                      SlotWidth;                                               // 0x0030(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlotHeightLow;                                           // 0x0034(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SlotHeightHigh;                                          // 0x0038(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOffGroundCover;                                         // 0x003C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7YZJ[0x3];                                   // 0x003D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoverLineOfSightParams                             ExposedParams;                                           // 0x0040(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		bool                                                       bCheckExposure;                                          // 0x0068(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_33S6[0x3];                                   // 0x0069(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoverAdjustParams                                  AutoAdjustParams;                                        // 0x006C(0x0040) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_DO0I[0x4];                                   // 0x00AC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UCoverViewData*>                              Views;                                                   // 0x00B0(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic
		struct FColor                                              ValidColor;                                              // 0x00C0(0x0004) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NavSearchRadius;                                         // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.CoverStyleData
	 * Size -> 0x0018 (FullSize[0x0048] - InheritedSize[0x0030])
	 */
	class UCoverStyleData : public UGbxDataAsset
	{
	public:
		ECoverStyleAnimType                                        AnimType;                                                // 0x0030(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_75DR[0x7];                                   // 0x0031(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoverViewData*                                      View;                                                    // 0x0038(0x0008) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoClear, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowLookAts;                                           // 0x0040(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bAllowAimOffsets;                                        // 0x0041(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bForceFiring;                                            // 0x0042(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_KQN2[0x5];                                   // 0x0043(0x0005) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCoverTransitionTable
	 * Size -> 0x0060 (FullSize[0x00A8] - InheritedSize[0x0048])
	 */
	class UGbxCoverTransitionTable : public UGbxAnimTable
	{
	public:
		class UGbxAnimSet*                                         AnimSet;                                                 // 0x0048(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FCoverTransitionFilters                             Filters;                                                 // 0x0050(0x0050) Edit, NativeAccessSpecifierPrivate
		float                                                      DefaultHeight;                                           // 0x00A0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q2ST[0x4];                                   // 0x00A4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.CoverUserComponent
	 * Size -> 0x0798 (FullSize[0x0910] - InheritedSize[0x0178])
	 */
	class UCoverUserComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_3UYW[0x8];                                   // 0x0178(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnCoverStateChanged;                                     // 0x0180(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IG43[0x50];                                  // 0x0190(0x0050) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoverAction                                        DesiredAction;                                           // 0x01E0(0x0130) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FCoverAction                                        CurrentAction;                                           // 0x0310(0x0130) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FCoverAction                                        PreviousAction;                                          // 0x0440(0x0130) Transient, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		ECoverUserState                                            State;                                                   // 0x0570(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ECoverUserState                                            DesiredState;                                            // 0x0571(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_W09T[0x6];                                   // 0x0572(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                TransitionName;                                          // 0x0578(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USkeletalMeshComponent*                              SkelMeshComponent;                                       // 0x0580(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGbxCharacter*                                       GbxCharacter;                                            // 0x0588(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGbxAIController*                                    GbxAIController;                                         // 0x0590(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UDamageComponent*                                    DamageComponent;                                         // 0x0598(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    GbxNavComponent;                                         // 0x05A0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStanceComponent*                                    StanceComponent;                                         // 0x05A8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTargetingComponent*                                 TargetingComponent;                                      // 0x05B0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIWeaponUserComponent*                              WeaponUserComponent;                                     // 0x05B8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavCharacterMovementComponent*                   MovementComponent;                                       // 0x05C0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FSavedCollision                                     SavedCollision;                                          // 0x05C8(0x0020) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_YM78[0x8];                                   // 0x05E8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FCoverClientData                                    ClientData;                                              // 0x05F0(0x0028) Net, Transient, RepNotify, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bFlanked;                                                // 0x0618(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_WSCB[0x3];                                   // 0x0619(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxVerticalNavDistance;                                  // 0x061C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxHorizontalNavDistance;                                // 0x0620(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxDeltaLocationThreshold;                               // 0x0624(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxDeltaRotationThreshold;                               // 0x0628(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ExitInterpSearchDistance;                                // 0x062C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TransitionBetweenTraceHeight;                            // 0x0630(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      WidthAdjustment;                                         // 0x0634(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      HeightAdjustment;                                        // 0x0638(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bDisableFootIk;                                          // 0x063C(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_UHXR[0x3];                                   // 0x063D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FCoverStyleUserData>                         Styles;                                                  // 0x0640(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class FString>                                      FireToIdleStates;                                        // 0x0650(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FGbxParam                                           DefaultIdleTime;                                         // 0x0660(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           DefaultFireTime;                                         // 0x06E0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGbxParam                                           DefaultWaitTimeBeforeSeekingBetterCover;                 // 0x0760(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAITicketUseData                                    TicketForAdvancingToBetterCover;                         // 0x07E0(0x0108) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FCoverFaceDirections                                FaceDirections;                                          // 0x08E8(0x0003) Edit, NoDestructor, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_7IDY[0x5];                                   // 0x08EB(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              HitReactionLayer;                                        // 0x08F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TransitionBlendTime;                                     // 0x08F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      NearCoverDistance;                                       // 0x08FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCoverTransitionTable*                            EnterTransitionTable;                                    // 0x0900(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCoverTransitionTable*                            BetweenTransitionTable;                                  // 0x0908(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void SetEnterTransitionTable(class UGbxCoverTransitionTable* NewTable);
		void OnRep_ClientData();
		void OnMovementModeChanged(class ACharacter* Character, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		class UCoverStyleData* GetStyle();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.CoverViewData
	 * Size -> 0x0048 (FullSize[0x0078] - InheritedSize[0x0030])
	 */
	class UCoverViewData : public UGbxDataAsset
	{
	public:
		ECoverSlotHeight                                           SlotHeight;                                              // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GET2[0x3];                                   // 0x0031(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FVector                                             ViewOffset;                                              // 0x0034(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FCoverLineOfSightParams                             TargetParams;                                            // 0x0040(0x0028) Edit, NoDestructor, NativeAccessSpecifierPublic
		float                                                      ForwardCheckDistance;                                    // 0x0068(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ForwardCheckExtent;                                      // 0x006C(0x000C) Edit, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryContext_AllTargets
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_AllTargets : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryContext_Friendlies
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Friendlies : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryContext_Target
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_Target : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryContext_TargetActualLocation
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UEnvQueryContext_TargetActualLocation : public UEnvQueryContext
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryGenerator_AINodes
	 * Size -> 0x00A0 (FullSize[0x0100] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_AINodes : public UEnvQueryGenerator
	{
	public:
		class UClass*                                              SearchCenter;                                            // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           SearchRadius;                                            // 0x0068(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FActorTagCompositeQuery                             TagQuery;                                                // 0x0098(0x0010) Edit, NativeAccessSpecifierPublic
		unsigned char                                              AllowedTypes[0x10];                                      // 0x00A8(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxAI.EnvQueryGenerator_AINodes.AllowedTypes
		unsigned char                                              bUseAllowedTypes : 1;                                    // 0x00B8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_21ZW[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              DisallowedTypes[0x10];                                   // 0x00C0(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxAI.EnvQueryGenerator_AINodes.DisallowedTypes
		unsigned char                                              bUseDisallowedTypes : 1;                                 // 0x00D0(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FFIX[0x7];                                   // 0x00D1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UClass*>                                      AllowedTypesCache;                                       // 0x00D8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		TArray<class UClass*>                                      DisallowedTypesCache;                                    // 0x00E8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_IQLQ[0x8];                                   // 0x00F8(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryGenerator_Cover
	 * Size -> 0x0050 (FullSize[0x00B0] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_Cover : public UEnvQueryGenerator
	{
	public:
		TArray<class UCoverSlotData*>                              SlotTypes;                                               // 0x0060(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		struct FAIDataProviderFloatValue                           SearchRadius;                                            // 0x0070(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UClass*                                              SearchCenter;                                            // 0x00A0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoverSlotData*                                      SlotType;                                                // 0x00A8(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryGenerator_DynamicPoints
	 * Size -> 0x0160 (FullSize[0x01F8] - InheritedSize[0x0098])
	 */
	class UEnvQueryGenerator_DynamicPoints : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		struct FAIDataProviderFloatValue                           InnerRadius;                                             // 0x0098(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           OuterRadius;                                             // 0x00C8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FEQSDynamicPointRange                               PointsPerRing;                                           // 0x00F8(0x0010) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEQSDynamicPointRange                               NumberOfRings;                                           // 0x0108(0x0010) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FEQSDynamicPointRange                               NumberOfLayers;                                          // 0x0118(0x0010) Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           TopLayerHeight;                                          // 0x0128(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           BottomLayerHeight;                                       // 0x0158(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bUseLayers : 1;                                          // 0x0188(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_9K6P[0x3];                                   // 0x0189(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    NumberOfPointsMin;                                       // 0x018C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		int32_t                                                    NumberOfPointsMax;                                       // 0x0190(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GNJA[0x4];                                   // 0x0194(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FEnvDirection                                       ArcDirection;                                            // 0x0198(0x0020) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ArcAngle;                                                // 0x01B8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              bDefineArc : 1;                                          // 0x01E8(0x0001) BIT_FIELD Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BIX8[0x7];                                   // 0x01E9(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              Center;                                                  // 0x01F0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryGenerator_FindLookAtPoint
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_FindLookAtPoint : public UEnvQueryGenerator
	{
	public:
		ELookAtPointType                                           LookAtPointType;                                         // 0x0060(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Q8H3[0x7];                                   // 0x0061(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           SearchRadius;                                            // 0x0068(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UClass*                                              SearchCenter;                                            // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryGenerator_FindPerch
	 * Size -> 0x0040 (FullSize[0x00A0] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_FindPerch : public UEnvQueryGenerator
	{
	public:
		class UPerchType*                                          PerchType;                                               // 0x0060(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAIDataProviderFloatValue                           SearchRadius;                                            // 0x0068(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UClass*                                              SearchCenter;                                            // 0x0098(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryGenerator_SmartAction
	 * Size -> 0x00E8 (FullSize[0x0148] - InheritedSize[0x0060])
	 */
	class UEnvQueryGenerator_SmartAction : public UEnvQueryGenerator
	{
	public:
		struct FAIDataProviderBoolValue                            CombatActions;                                           // 0x0060(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIDataProviderBoolValue                            PassiveActions;                                          // 0x0090(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              ActorTypes[0x10];                                        // 0x00C0(0x0010) UNKNOWN PROPERTY: ArrayProperty GbxAI.EnvQueryGenerator_SmartAction.ActorTypes
		TArray<class UClass*>                                      ActorTypesCache;                                         // 0x00D0(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_41QD[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTagContainer                               ActionNames;                                             // 0x00E8(0x0020) Edit, NativeAccessSpecifierPrivate
		struct FAIDataProviderFloatValue                           SearchRadius;                                            // 0x0108(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UClass*                                              SearchCenter;                                            // 0x0138(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		ETerritoryType                                             TerritoryArea;                                           // 0x0140(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseTerritoryArea;                                       // 0x0141(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TCLM[0x6];                                   // 0x0142(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryGenerator_SmartGrid
	 * Size -> 0x0010 (FullSize[0x00A8] - InheritedSize[0x0098])
	 */
	class UEnvQueryGenerator_SmartGrid : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		TArray<struct FSmartGridSearchSet>                         SearchSets;                                              // 0x0098(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryGenerator_Territory
	 * Size -> 0x0070 (FullSize[0x0108] - InheritedSize[0x0098])
	 */
	class UEnvQueryGenerator_Territory : public UEnvQueryGenerator_ProjectedPoints
	{
	public:
		ETerritoryType                                             TerritoryArea;                                           // 0x0098(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_P86Q[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FAIDataProviderFloatValue                           SpaceBetween;                                            // 0x00A0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           EverywhereRadius;                                        // 0x00D0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		ETerritoryMovementType                                     MovementType;                                            // 0x0100(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_MM1F[0x7];                                   // 0x0101(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryItemType_SmartAction
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UEnvQueryItemType_SmartAction : public UEnvQueryItemType_VectorBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_ActorHealth
	 * Size -> 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_ActorHealth : public UEnvQueryTest
	{
	public:
		bool                                                       bHealthPercentage;                                       // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHealthConsumed;                                         // 0x01D9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_A33B[0x6];                                   // 0x01DA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_AITicket
	 * Size -> 0x0038 (FullSize[0x0210] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_AITicket : public UEnvQueryTest
	{
	public:
		class UAITicketDataAsset*                                  AITicket;                                                // 0x01D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           Value;                                                   // 0x01E0(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_Angle
	 * Size -> 0x0108 (FullSize[0x02E0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Angle : public UEnvQueryTest
	{
	public:
		struct FEnvDirection                                       LineA;                                                   // 0x01D8(0x0020) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           LineAHeadingOffset;                                      // 0x01F8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           LineAPitchOffset;                                        // 0x0228(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FEnvDirection                                       LineB;                                                   // 0x0258(0x0020) Edit, DisableEditOnInstance, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           LineBHeadingOffset;                                      // 0x0278(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		struct FAIDataProviderFloatValue                           LineBPitchOffset;                                        // 0x02A8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		bool                                                       bTestHeading;                                            // 0x02D8(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bTestPitch;                                              // 0x02D9(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T6KH[0x6];                                   // 0x02DA(0x0006) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_ArcTrace
	 * Size -> 0x0068 (FullSize[0x0308] - InheritedSize[0x02A0])
	 */
	class UEnvQueryTest_ArcTrace : public UEnvQueryTest_Trace
	{
	public:
		struct FAIDataProviderFloatValue                           ArcSpeed;                                                // 0x02A0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FAIDataProviderFloatValue                           ArcAnglePercent;                                         // 0x02D0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		int32_t                                                    NumSegments;                                             // 0x0300(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S5RD[0x4];                                   // 0x0304(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_AttackerCountAgainstTarget
	 * Size -> 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_AttackerCountAgainstTarget : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_BlackboardKey
	 * Size -> 0x0010 (FullSize[0x01E8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_BlackboardKey : public UEnvQueryTest
	{
	public:
		struct FGbxBlackboardKeySelector                           BlackboardKey;                                           // 0x01D8(0x0010) Edit, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_Boundary
	 * Size -> 0x0030 (FullSize[0x0208] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_Boundary : public UEnvQueryTest
	{
	public:
		struct FAIDataProviderFloatValue                           Distance;                                                // 0x01D8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_CoverCurrent
	 * Size -> 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_CoverCurrent : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_CoverExposure
	 * Size -> 0x0038 (FullSize[0x0210] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_CoverExposure : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAIDataProviderBoolValue                            DoExposureTest;                                          // 0x01E0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_CoverView
	 * Size -> 0x0038 (FullSize[0x0210] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_CoverView : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAIDataProviderBoolValue                            DoViewTest;                                              // 0x01E0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_CurrentTarget
	 * Size -> 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_CurrentTarget : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_CustomScoringBoost
	 * Size -> 0x0020 (FullSize[0x01F8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_CustomScoringBoost : public UEnvQueryTest
	{
	public:
		float                                                      ReductionExtreme;                                        // 0x01D8(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReductionModerate;                                       // 0x01DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      ReductionLight;                                          // 0x01E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      NoBoostWeighting;                                        // 0x01E4(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmplificationLight;                                      // 0x01E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmplificationModerate;                                   // 0x01EC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AmplificationExtreme;                                    // 0x01F0(0x0004) Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_H1FU[0x4];                                   // 0x01F4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_DirectPath
	 * Size -> 0x0010 (FullSize[0x01E8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_DirectPath : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      CloseEnoughDistance;                                     // 0x01E0(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U36S[0x4];                                   // 0x01E4(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_GbxPath
	 * Size -> 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_GbxPath : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_IsInGodMode
	 * Size -> 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_IsInGodMode : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_MyMasterIsAttackingTarget
	 * Size -> 0x0028 (FullSize[0x0200] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_MyMasterIsAttackingTarget : public UEnvQueryTest
	{
	public:
		float                                                      DecayRate;                                               // 0x01D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_2K13[0x24];                                  // 0x01DC(0x0024) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_PetModifier
	 * Size -> 0x0010 (FullSize[0x01E8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_PetModifier : public UEnvQueryTest
	{
	public:
		struct FGameplayTag                                        PetTag;                                                  // 0x01D8(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        BossTag;                                                 // 0x01E0(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_PetOwnerDistance
	 * Size -> 0x0038 (FullSize[0x0210] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_PetOwnerDistance : public UEnvQueryTest
	{
	public:
		struct FAIDataProviderFloatValue                           MaxDistanceToOwner;                                      // 0x01D8(0x0030) Edit, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FGameplayTag                                        AnyDistanceTag;                                          // 0x0208(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_StandardCover
	 * Size -> 0x0158 (FullSize[0x0330] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_StandardCover : public UEnvQueryTest
	{
	public:
		class UClass*                                              FriendliesContext;                                       // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              TargetContext;                                           // 0x01E0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              ExposureContext;                                         // 0x01E8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAIDataProviderFloatValue                           TargetDistanceMinPriorToTakingCover;                     // 0x01F0(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIDataProviderFloatValue                           TargetDistanceMaxPriorToTakingCover;                     // 0x0220(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      TargetDistanceMinMultiplierAfterTakingCover;             // 0x0250(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      TargetDistanceMaxMultiplierAfterTakingCover;             // 0x0254(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAIDataProviderFloatValue                           QuerierMaxDistance;                                      // 0x0258(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIDataProviderBoolValue                            DoViewTest;                                              // 0x0288(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIDataProviderBoolValue                            DoExposureTest;                                          // 0x02B8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FAIDataProviderFloatValue                           FriendlyDistance;                                        // 0x02E8(0x0030) Edit, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPrivate
		float                                                      ScoringWeight_AlreadyAtCover;                            // 0x0318(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ScoringWeight_DistanceToQuerier;                         // 0x031C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ScoringWeight_DistanceToTarget;                          // 0x0320(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ScoringWeight_DistanceToFriendlies;                      // 0x0324(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ScoringWeight_CoverView;                                 // 0x0328(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      ScoringWeight_CoverExposure;                             // 0x032C(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_TacticalCover
	 * Size -> 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_TacticalCover : public UEnvQueryTest
	{
	public:
		class UClass*                                              Context;                                                 // 0x01D8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_TargetIsAttackingMyMaster
	 * Size -> 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_TargetIsAttackingMyMaster : public UEnvQueryTest
	{
	public:
		float                                                      DecayRate;                                               // 0x01D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_JSNP[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_TargetIsCloseToMyMaster
	 * Size -> 0x0080 (FullSize[0x0258] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_TargetIsCloseToMyMaster : public UEnvQueryTest
	{
	public:
		struct FGbxParam                                           DistanceThreshold;                                       // 0x01D8(0x0080) Edit, NoDestructor, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_TargetIsExposed
	 * Size -> 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_TargetIsExposed : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_TargetIsHurtingMe
	 * Size -> 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_TargetIsHurtingMe : public UEnvQueryTest
	{
	public:
		float                                                      DecayRate;                                               // 0x01D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_C1C2[0x4];                                   // 0x01DC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_TargetIsThreat
	 * Size -> 0x0000 (FullSize[0x01D8] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_TargetIsThreat : public UEnvQueryTest
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_TargetSensed
	 * Size -> 0x0028 (FullSize[0x0200] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_TargetSensed : public UEnvQueryTest
	{
	public:
		class FString                                              DevLabel;                                                // 0x01D8(0x0010) Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		TArray<class UClass*>                                      SensesToTestFor;                                         // 0x01E8(0x0010) Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected
		float                                                      TimeToCareAboutStimuli;                                  // 0x01F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_S38W[0x4];                                   // 0x01FC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_UberTrace
	 * Size -> 0x0018 (FullSize[0x02B8] - InheritedSize[0x02A0])
	 */
	class UEnvQueryTest_UberTrace : public UEnvQueryTest_Trace
	{
	public:
		TArray<struct FExtendedTraceInfo>                          TracesToPerform;                                         // 0x02A0(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bWantsTracesToHit;                                       // 0x02B0(0x0001) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_U5A4[0x7];                                   // 0x02B1(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.EnvQueryTest_WithinTerritory
	 * Size -> 0x0008 (FullSize[0x01E0] - InheritedSize[0x01D8])
	 */
	class UEnvQueryTest_WithinTerritory : public UEnvQueryTest
	{
	public:
		ETerritoryType                                             TerritoryArea;                                           // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FC0G[0x7];                                   // 0x01D9(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIResource_ScriptedAction
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAIResource_ScriptedAction : public UGameplayTaskResource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedAction
	 * Size -> 0x0058 (FullSize[0x00C0] - InheritedSize[0x0068])
	 */
	class UGameplayTask_ScriptedAction : public UGameplayTask
	{
	public:
		unsigned char                                              UnknownData_7C59[0x18];                                  // 0x0068(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class AGbxAIController*>                            Controllers;                                             // 0x0080(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class AGbxAIController*>                            AbortingControllers;                                     // 0x0090(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		class UAIAction*                                           ScriptedAIAction;                                        // 0x00A0(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_TMKI[0x18];                                  // 0x00A8(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnActorSpawned(class ASpawner* Spawner, class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedCover
	 * Size -> 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_ScriptedCover : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnArrived;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UCoverSlotComponent*                                 CoverSlot;                                               // 0x00D0(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoverUserComponent*                                 CoverUser;                                               // 0x00D8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BLZ9[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

	public:
		void TaskScriptedCoverDelegate__DelegateSignature();
		void STATIC_EndScriptedCover(class AActor* User);
		class UGameplayTask_ScriptedCover* STATIC_BeginScriptedCover(class AActor* User, class ACover* Cover);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedFollow
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_ScriptedFollow : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnStopped;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AActor*                                              ActorToFollow;                                           // 0x00D0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStanceDataProvider*                                 StanceProvider;                                          // 0x00D8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TaskScriptedMoveDelegate__DelegateSignature();
		class UGameplayTask_ScriptedFollow* STATIC_BeginScriptedFollow(class AActor* Follower, class AActor* ActorToFollow, class UStanceDataProvider* OptionalStance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedLand
	 * Size -> 0x0020 (FullSize[0x00E0] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_ScriptedLand : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnAborted;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic

	public:
		void TaskScriptedLandDelegate__DelegateSignature();
		class UGameplayTask_ScriptedLand* STATIC_BeginScriptedLand(class AActor* Lander);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedLead
	 * Size -> 0x0038 (FullSize[0x00F8] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_ScriptedLead : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnAborted;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AActor*                                              DestNode;                                                // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              ActorToLead;                                             // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStanceDataProvider*                                 StanceProvider;                                          // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TaskScriptedLeadDelegate__DelegateSignature();
		class UGameplayTask_ScriptedLead* STATIC_BeginScriptedLead(class AActor* Leader, class AActor* DestAINode, class AActor* ActorToLead, class UStanceDataProvider* OptionalStance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedMove
	 * Size -> 0x0040 (FullSize[0x0100] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_ScriptedMove : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnAborted;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AActor*                                              AINode;                                                  // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStanceDataProvider*                                 StanceProvider;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              LookAtActor;                                             // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bTeleportOnFail;                                         // 0x00F8(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_77E5[0x7];                                   // 0x00F9(0x0007) MISSED OFFSET (PADDING)

	public:
		void TaskScriptedMoveDelegate__DelegateSignature();
		class UGameplayTask_ScriptedMove* STATIC_BeginScriptedMoveActor(class AAIController* Target, class AActor* StartNode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor);
		class UGameplayTask_ScriptedMove* STATIC_BeginScriptedMove2(class AActor* User, class AActor* StartAINode, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor);
		class UGameplayTask_ScriptedMove* STATIC_BeginScriptedMove(class AActor* Target, class AActor* StartNode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, bool bTeleportOnFail);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedMoveSpline
	 * Size -> 0x0060 (FullSize[0x0120] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_ScriptedMoveSpline : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnAborted;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AActor*                                              Target;                                                  // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class USplineComponent*                                    SplineComponent;                                         // 0x00E8(0x0008) ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStanceDataProvider*                                 StanceProvider;                                          // 0x00F0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              LookAtActor;                                             // 0x00F8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UClass*                                              OptionalAIAction;                                        // 0x0100(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGbxSpawner*                                         DropOffSpawner;                                          // 0x0108(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AActor*                                              NextSpline;                                              // 0x0110(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_77FN[0x8];                                   // 0x0118(0x0008) MISSED OFFSET (PADDING)

	public:
		void TaskScriptedMoveDelegate__DelegateSignature(class AActor* Targeted);
		class UGameplayTask_ScriptedMoveSpline* STATIC_BeginScriptedMoveOnSpline(class AActor* Target, class AActor* StartSpline, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, float Offset, bool bReverse, bool bAddSpawned, class UStanceDataProvider* OptionalStance, class AActor* OptionalLookAtActor, class UClass* OptionalAIAction);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIAction_MoveToLevelSequence
	 * Size -> 0x0000 (FullSize[0x0FA0] - InheritedSize[0x0FA0])
	 */
	class UAIAction_MoveToLevelSequence : public UAIAction_GoToPoint
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedMoveToLevelSequence
	 * Size -> 0x00A0 (FullSize[0x0160] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_ScriptedMoveToLevelSequence : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnActorArrived;                                          // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActorFailedToArrive;                                   // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnAllActorsArrived;                                      // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnFailed;                                                // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FTRT[0x8];                                   // 0x0110(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxLevelSequenceActor*                              LevelSequenceActor;                                      // 0x0118(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2CYN[0x38];                                  // 0x0120(0x0038) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UStanceDataProvider*                                 StanceProvider;                                          // 0x0158(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TaskScriptedMoveDelegate__DelegateSignature();
		void TaskScriptedMoveActorsDelegate__DelegateSignature();
		void TaskScriptedMoveActorDelegate__DelegateSignature(class AActor* Actor);
		void OnLevelSequenceStopped();
		void OnLevelSequenceFinished();
		class UGameplayTask_ScriptedMoveToLevelSequence* STATIC_BeginScriptedMoveToLevelSequenceMulti(TArray<class AActor*> Targets, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance);
		class UGameplayTask_ScriptedMoveToLevelSequence* STATIC_BeginScriptedMoveToLevelSequence(class AActor* Target, class AGbxLevelSequenceActor* LevelSequenceActor, bool bStartSequence, class UStanceDataProvider* OptionalStance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_ScriptedRoute
	 * Size -> 0x0030 (FullSize[0x00F0] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_ScriptedRoute : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnAborted;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnCompleted;                                             // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class AActor*                                              AINode;                                                  // 0x00E0(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UStanceDataProvider*                                 StanceProvider;                                          // 0x00E8(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void TaskScriptedMoveDelegate__DelegateSignature();
		class UGameplayTask_ScriptedRoute* STATIC_BeginScriptedRoute2(class AActor* Target, class AActor* FirstAINode, EScriptedActionRule SuccessRule, EScriptedActionRule FailRule, bool bAddSpawned, class UStanceDataProvider* OptionalStance);
		class UGameplayTask_ScriptedRoute* STATIC_BeginScriptedRoute(class AActor* User, class AActor* FirstAINode, class UStanceDataProvider* OptionalStance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GameplayTask_SmartAction
	 * Size -> 0x0080 (FullSize[0x0140] - InheritedSize[0x00C0])
	 */
	class UGameplayTask_SmartAction : public UGameplayTask_ScriptedAction
	{
	public:
		class FScriptMulticastDelegate                             OnReserve;                                               // 0x00C0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnUnreserve;                                             // 0x00D0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnBegin;                                                 // 0x00E0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnInterrupt;                                             // 0x00F0(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnSuccess;                                               // 0x0100(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FSmartActionInfoContext                             Action;                                                  // 0x0110(0x0030) NoDestructor, NativeAccessSpecifierPrivate

	public:
		void UnreserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
		void SuccessCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
		void ReserveCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
		void InterruptCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
		void STATIC_EndSmartAction(class AActor* User);
		class UGameplayTask_SmartAction* STATIC_BeginSmartAction(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
		void BeginCallback(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag);
		void AITaskEvent__DelegateSignature();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAction_CoverHitReaction
	 * Size -> 0x0018 (FullSize[0x00D0] - InheritedSize[0x00B8])
	 */
	class UGbxAction_CoverHitReaction : public UGbxAction_SimpleAnim
	{
	public:
		TArray<struct FCoverHitReactionItem>                       Styles;                                                  // 0x00B8(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		float                                                      BlendInTime;                                             // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x00CC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAction_CoverTransition
	 * Size -> 0x0000 (FullSize[0x0060] - InheritedSize[0x0060])
	 */
	class UGbxAction_CoverTransition : public UGbxAction
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAction_Navigation
	 * Size -> 0x0008 (FullSize[0x00C0] - InheritedSize[0x00B8])
	 */
	class UGbxAction_Navigation : public UGbxAction_SimpleAnim
	{
	public:
		bool                                                       bMaintainRootVelocity;                                   // 0x00B8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0CKF[0x7];                                   // 0x00B9(0x0007) MISSED OFFSET (PADDING)

	public:
		struct FVector K2_GetExitLocation();
		struct FVector K2_GetEntryLocation();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAction_NavAnim
	 * Size -> 0x00E8 (FullSize[0x01A8] - InheritedSize[0x00C0])
	 */
	class UGbxAction_NavAnim : public UGbxAction_Navigation
	{
	public:
		float                                                      EntryTime;                                               // 0x00C0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendInTime;                                             // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      BlendOutTime;                                            // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BCA5[0x4];                                   // 0x00CC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                AnimSlot;                                                // 0x00D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAnimMeshList                                       NavAnimations;                                           // 0x00D8(0x0078) Edit, NativeAccessSpecifierPrivate
		bool                                                       bLerpLocation;                                           // 0x0150(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bLerpRotation;                                           // 0x0151(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUseStretchy;                                            // 0x0152(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_OOUF[0x5];                                   // 0x0153(0x0005) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FStretchBonesSettings                               StretchBonesSettings;                                    // 0x0158(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPrivate
		class UAnimSequenceBase*                                   NavAnim;                                                 // 0x0188(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FAnimActionDef                                      NavAnimation;                                            // 0x0190(0x0018) Deprecated, NoDestructor, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAction_NavJump
	 * Size -> 0x0228 (FullSize[0x02E8] - InheritedSize[0x00C0])
	 */
	class UGbxAction_NavJump : public UGbxAction_Navigation
	{
	public:
		struct FStretchBonesSettings                               StretchBonesSettings;                                    // 0x00C0(0x0030) Edit, DisableEditOnInstance, NoDestructor, NativeAccessSpecifierPublic
		float                                                      RotationTime;                                            // 0x00F0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bCancelRotationOnActionStop;                             // 0x00F4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bApplyRotationOnStart;                                   // 0x00F5(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_1RWF[0x2];                                   // 0x00F6(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      BlendInTime;                                             // 0x00F8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      BlendOutTime;                                            // 0x00FC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class FName                                                AnimSlot;                                                // 0x0100(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimMeshList                                       JumpEnterAnims;                                          // 0x0108(0x0078) Edit, Protected, NativeAccessSpecifierProtected
		struct FAnimMeshList                                       JumpExitAnims;                                           // 0x0180(0x0078) Edit, Protected, NativeAccessSpecifierProtected
		struct FAnimMeshList                                       JumpIdleAnims;                                           // 0x01F8(0x0078) Edit, Protected, NativeAccessSpecifierProtected
		ENavJumpRotation                                           RotationDirective;                                       // 0x0270(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLockRotation;                                           // 0x0271(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavJumpStage                                              DisablePhysicsStage;                                     // 0x0272(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		ENavJumpStage                                              EnablePhysicsStage;                                      // 0x0273(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArcSpeed;                                                // 0x0274(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArcAnglePercent;                                         // 0x0278(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      MaxPrediction;                                           // 0x027C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		float                                                      ArcTimeScale;                                            // 0x0280(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bLimitHitReactions;                                      // 0x0284(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_6Y58[0x3];                                   // 0x0285(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAnimSequenceBase*                                   JumpEnter;                                               // 0x0288(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequenceBase*                                   JumpExit;                                                // 0x0290(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		class UAnimSequenceBase*                                   JumpIdle;                                                // 0x0298(0x0008) ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FAnimActionDef                                      JumpEnterAnim;                                           // 0x02A0(0x0018) Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimActionDef                                      JumpExitAnim;                                            // 0x02B8(0x0018) Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected
		struct FAnimActionDef                                      JumpIdleAnim;                                            // 0x02D0(0x0018) Deprecated, NoDestructor, Protected, NativeAccessSpecifierProtected

	public:
		void OnIdle(class AActor* Actor);
		void OnExit(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAction_NavHomingJump
	 * Size -> 0x0008 (FullSize[0x02F0] - InheritedSize[0x02E8])
	 */
	class UGbxAction_NavHomingJump : public UGbxAction_NavJump
	{
	public:
		float                                                      MaxHomingDistance;                                       // 0x02E8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_AIAL[0x4];                                   // 0x02EC(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAction_NavLerp
	 * Size -> 0x0028 (FullSize[0x00E8] - InheritedSize[0x00C0])
	 */
	class UGbxAction_NavLerp : public UGbxAction_Navigation
	{
	public:
		bool                                                       bWaitForDistance;                                        // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_4CPZ[0x3];                                   // 0x00C1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHorizontalDistance;                                   // 0x00C4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      MaxVerticalDistance;                                     // 0x00C8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bWaitForVelocity;                                        // 0x00CC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_O3LE[0x3];                                   // 0x00CD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxVelocity;                                             // 0x00D0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bCallAlmostDone;                                         // 0x00D4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_ZTAB[0x3];                                   // 0x00D5(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      AlmostedDoneTime;                                        // 0x00D8(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSpecifyLerpTime;                                        // 0x00DC(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FKZ3[0x3];                                   // 0x00DD(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LerpTime;                                                // 0x00E0(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bVisible;                                                // 0x00E4(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_QUT2[0x3];                                   // 0x00E5(0x0003) MISSED OFFSET (PADDING)

	public:
		void OnAlmostDone(class AActor* Actor);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAIBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxAIBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetPerceivableToAllAI(class AActor* Actor, bool bPerceivable);
		void STATIC_SetAIPathFindingData(class AActor* InActor, class UHavokPathFindingData* PathFindingData);
		void STATIC_SetAINavAreaData(class AActor* InActor, class UGbxNavAreaData* NavAreaData);
		void STATIC_ResetTeamForAllAIChildren(class AActor* Actor);
		bool STATIC_IsActorThreatened(class AActor* InActor);
		bool STATIC_GetValueAsActorAndLocation(class UBlackboardComponent* Blackboard, const struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location);
		bool STATIC_GetBlackboardValueAsActorAndLocation(class UBTNode* BTNode, const struct FBlackboardKeySelector& Key, class AActor** Actor, struct FVector* Location);
		void STATIC_AIScriptedUseWeapon(class AActor* Actor, bool bUseWeapon);
		void STATIC_AIScriptedAction(class AActor* Actor, class UClass* Action);
		bool STATIC_AIIsWithinTerritory(class AActor* AIActor, ETerritoryType Zone);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAIController
	 * Size -> 0x0128 (FullSize[0x06C0] - InheritedSize[0x0598])
	 */
	class AGbxAIController : public AAIController
	{
	public:
		unsigned char                                              UnknownData_9QJ3[0x30];                                  // 0x0598(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class AGbxCharacter*                                       GbxCharacter;                                            // 0x05C8(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FVector                                             SpawnLocation;                                           // 0x05D0(0x000C) Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B9SL[0x4];                                   // 0x05DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxCharacterMovementComponent*                      MovementComponent;                                       // 0x05E0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTargetingComponent*                                 TargetingComponent;                                      // 0x05E8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTargetableComponent*                                TargetableComponent;                                     // 0x05F0(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTeamComponent*                                      TeamComponent;                                           // 0x05F8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_FD2B[0x8];                                   // 0x0600(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UAIActionComponent*                                  AIActionComponent;                                       // 0x0608(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTerritoryComponent*                                 DefaultTerritory;                                        // 0x0610(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UTerritoryComponent*                                 CurrentTerritory;                                        // 0x0618(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxSpawnerComponent*                                SpawnerComponent;                                        // 0x0620(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxNavComponent*                                    GbxNavComponent;                                         // 0x0628(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIUseComponent*                                     AIUseComponent;                                          // 0x0630(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UAIWeaponUserComponent*>                      WeaponUserComponents;                                    // 0x0638(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		class UGbxActionComponent*                                 GbxActionComponent;                                      // 0x0648(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class AActor*>                                      ChildActors;                                             // 0x0650(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_039X[0x8];                                   // 0x0660(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnAggro;                                                 // 0x0668(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             OnDeAggro;                                               // 0x0678(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VTDD[0x30];                                  // 0x0688(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxLevelSequencePlayer*                             LevelSequencePlayerController;                           // 0x06B8(0x0008) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		void SetTerritory(class UTerritoryComponent* Territory);
		void SetTeam(class UTeam* Team);
		void SetObstacleAvoidanceLock(bool bDisable, const class FName& Reason);
		void ResetTerritoryToDefault();
		void OnMyWeaponHitSomething(class AActor* HitActor, const struct FVector& HitLocation);
		class UAIWeaponUserComponent* GetWeaponUserComponent();
		class UAIUseComponent* GetUseComponent();
		class UTerritoryComponent* GetTerritory();
		class UTeamComponent* GetTeamComponent();
		class UTeam* GetTeam();
		class UTargetingComponent* GetTargetingComponent();
		class UTargetableComponent* GetTargetableComponent();
		class USpawnerComponent* GetSpawnerComponent();
		class ASpawner* GetSpawner();
		class UAIPerceptionComponent* GetPerceptionComponent();
		int32_t GetNumChildActors();
		class UGbxNavComponent* GetNavComponent();
		class UGbxCharacterMovementComponent* GetMovementComponent();
		class UAIGroupState* GetGroupState();
		class AGbxCharacter* GetGbxCharacter();
		class UGbxActionComponent* GetGbxActionComponent();
		TArray<class AActor*> GetChildActors();
		class UBlackboardComponent* GetBlackboardComponent();
		class UBlackboardData* GetBlackboardAsset();
		int32_t GetAIGroupSize();
		void GetAIGroupList(TArray<class AActor*>* AIGroupList, bool bIncludeSelf, float InRadius);
		class UAIActionComponent* GetAIActionComponent();
		void ChildDestroyed(class AActor* DestroyedActor);
		void CheckPauseWhileFalling(class ACharacter* TheCharacter, EMovementMode PrevMovementMode, unsigned char PreviousCustomMode);
		void AddChildActors(TArray<class AActor*> NewChildren);
		void AddChildActor(class AActor* NewChild);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAINavSystem
	 * Size -> 0x0000 (FullSize[0x0438] - InheritedSize[0x0438])
	 */
	class UGbxAINavSystem : public UGbxNavSystem
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAISystem
	 * Size -> 0x0010 (FullSize[0x0140] - InheritedSize[0x0130])
	 */
	class UGbxAISystem : public UGbxAISystemBase
	{
	public:
		class UAIActionManager*                                    AIActionManager;                                         // 0x0130(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAIGroupState*                                       PlayerAIGroupState;                                      // 0x0138(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxAnimStateManager_Cover
	 * Size -> 0x0048 (FullSize[0x0080] - InheritedSize[0x0038])
	 */
	class UGbxAnimStateManager_Cover : public UGbxAnimStateManager
	{
	public:
		ECoverUserAnimState                                        Type;                                                    // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_S4AY[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UCoverStyleData*                                     Style;                                                   // 0x0040(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		TArray<class UCoverViewData*>                              Views;                                                   // 0x0048(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPrivate
		class UGbxCoverTransitionTable*                            TransitionTable;                                         // 0x0058(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UCoverUserComponent*                                 CoverUser;                                               // 0x0060(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCharacterAnimInstance*                           GbxCharAnimInstance;                                     // 0x0068(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxCharacterMovementComponent*                      GbxCharMoveComponent;                                    // 0x0070(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UAnimSequence*                                       AnimSequence;                                            // 0x0078(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		void Owner_PostBeginPlay();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxBehaviorTreeComponent
	 * Size -> 0x0000 (FullSize[0x0328] - InheritedSize[0x0328])
	 */
	class UGbxBehaviorTreeComponent : public UBehaviorTreeComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_AI_IsInRange
	 * Size -> 0x0098 (FullSize[0x0120] - InheritedSize[0x0088])
	 */
	class UGbxCondition_AI_IsInRange : public UGbxCondition
	{
	public:
		struct FGbxBlackboardKeySelector                           Target;                                                  // 0x0088(0x0010) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic
		struct FGbxParam                                           Range;                                                   // 0x0098(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bInvertRange;                                            // 0x0118(0x0001) Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Y6TB[0x7];                                   // 0x0119(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_AI_IsMoving
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_AI_IsMoving : public UGbxCondition
	{
	public:
		float                                                      SpeedThreshold;                                          // 0x0088(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_T14I[0x4];                                   // 0x008C(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_AIHasNearbyAllies
	 * Size -> 0x0108 (FullSize[0x0190] - InheritedSize[0x0088])
	 */
	class UGbxCondition_AIHasNearbyAllies : public UGbxCondition
	{
	public:
		struct FGbxParam                                           AllyCount;                                               // 0x0088(0x0080) Edit, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           Distance;                                                // 0x0108(0x0080) Edit, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bUseDistance;                                            // 0x0188(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EANN[0x7];                                   // 0x0189(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_BlackboardKey
	 * Size -> 0x0018 (FullSize[0x00A0] - InheritedSize[0x0088])
	 */
	class UGbxCondition_BlackboardKey : public UGbxCondition
	{
	public:
		struct FGbxBlackboardKeySelector                           Key;                                                     // 0x0088(0x0010) Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPrivate
		bool                                                       bInvertResult;                                           // 0x0098(0x0001) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_81UZ[0x7];                                   // 0x0099(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_CanFidgetNow
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_CanFidgetNow : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_HasEnemyTarget
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_HasEnemyTarget : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_HasFriendlyTarget
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_HasFriendlyTarget : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_HasPlayerTarget
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_HasPlayerTarget : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_HasTargetsInRange
	 * Size -> 0x0100 (FullSize[0x0188] - InheritedSize[0x0088])
	 */
	class UGbxCondition_HasTargetsInRange : public UGbxCondition
	{
	public:
		struct FGbxParam                                           Range;                                                   // 0x0088(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           NumTargets;                                              // 0x0108(0x0080) Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_IsActorThreatened
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsActorThreatened : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_IsAttachedToOtherActor
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsAttachedToOtherActor : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_IsCloaked
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsCloaked : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_IsInCover
	 * Size -> 0x0000 (FullSize[0x0088] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsInCover : public UGbxCondition
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxCondition_IsInStance
	 * Size -> 0x0010 (FullSize[0x0098] - InheritedSize[0x0088])
	 */
	class UGbxCondition_IsInStance : public UGbxCondition
	{
	public:
		class UStanceType*                                         StanceToMatch;                                           // 0x0088(0x0008) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      OptionalSpeedThreshold;                                  // 0x0090(0x0004) Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_L7F6[0x4];                                   // 0x0094(0x0004) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxEqsTestingPawn
	 * Size -> 0x0030 (FullSize[0x09D0] - InheritedSize[0x09A0])
	 */
	class AGbxEqsTestingPawn : public AEQSTestingPawn
	{
	public:
		class UGbxCharacterMovementComponent*                      GbxCharacterMovement;                                    // 0x09A0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UTargetableComponent*                                TargetableComponent;                                     // 0x09A8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageComponent*                                    DamageComponent;                                         // 0x09B0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UDamageCauserComponent*                              DamageCauserComponent;                                   // 0x09B8(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UGameplayTagContainerComponent*                      GameplayTagContainerComponent;                           // 0x09C0(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      BaseAimHeight;                                           // 0x09C8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      AimHeightFromGround;                                     // 0x09CC(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SmartObject
	 * Size -> 0x0010 (FullSize[0x0468] - InheritedSize[0x0458])
	 */
	class ASmartObject : public AActor
	{
	public:
		class USmartObjectComponent*                               SmartObjectComponent;                                    // 0x0458(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGbxActionComponent*                                 GbxActionComponent;                                      // 0x0460(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class USmartObjectComponent* GetSmartObjectComponent();
		class UGbxActionComponent* GetGbxActionComponent();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxSmartObject
	 * Size -> 0x0000 (FullSize[0x0468] - InheritedSize[0x0468])
	 */
	class AGbxSmartObject : public ASmartObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxSpawner
	 * Size -> 0x0048 (FullSize[0x0630] - InheritedSize[0x05E8])
	 */
	class AGbxSpawner : public ASpawner
	{
	public:
		unsigned char                                              UnknownData_TDA2[0x18];                                  // 0x05E8(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnThreatened;                                            // 0x0600(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class UGbxSpawnerComponent*                                GbxSpawnerComponent;                                     // 0x0610(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class USpawnNodeComponent*                                 SpawnNodeComponent;                                      // 0x0618(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UBalanceStateComponent*                              BalanceStateComponent;                                   // 0x0620(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class UGameplayTasksComponent*                             GameplayTasksComponent;                                  // 0x0628(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UGameplayTasksComponent* GetGameplayTasksComponent();
		class UAINodeComponent* GetAINodeComponent();
		class UAIGroupState* GetAIGroupState();
		bool DEPRECATED_IsThreatened();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxSpawnerComponent
	 * Size -> 0x0030 (FullSize[0x09C0] - InheritedSize[0x0990])
	 */
	class UGbxSpawnerComponent : public USpawnerComponent
	{
	public:
		class AGbxSpawner*                                         GbxSpawner;                                              // 0x0990(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class AGbxSpawner*                                         GroupGbxSpawner;                                         // 0x0998(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGameplayTagContainer                               AdditionalGameplayTags;                                  // 0x09A0(0x0020) Edit, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.GbxSpawnPoint
	 * Size -> 0x0008 (FullSize[0x04C8] - InheritedSize[0x04C0])
	 */
	class AGbxSpawnPoint : public ASpawnPoint
	{
	public:
		class USpawnNodeComponent*                                 SpawnNodeComponent;                                      // 0x04C0(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		bool STATIC_HasNavNearSpawnPointFor(class USpawnPointComponent* SpawnPointComp, class USpawnOptionData* SpawnOptions);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.LookAtPoint
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class ALookAtPoint : public AActor
	{
	public:
		class ULookAtPointComponent*                               LookAtPointComponent;                                    // 0x0458(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.LookAtPointComponent
	 * Size -> 0x01A0 (FullSize[0x0890] - InheritedSize[0x06F0])
	 */
	class ULookAtPointComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_RU4S[0x8];                                   // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class ULookAtPointTag*                                     LookAtPointTag;                                          // 0x06F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnabled;                                                // 0x0700(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bSearchDataOverride;                                     // 0x0701(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_MBFT[0x2];                                   // 0x0702(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SearchHeightOverride;                                    // 0x0704(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SearchRadiusOverride;                                    // 0x0708(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUsageTimeOverride;                                      // 0x070C(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_2QHE[0x3];                                   // 0x070D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           UsageTimeOverride;                                       // 0x0710(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bUserCooldownTimeOverride;                               // 0x0790(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B4M2[0x7];                                   // 0x0791(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           UserCooldownTimeOverride;                                // 0x0798(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TMap<class AController*, float>                            CooldownMap;                                             // 0x0818(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<struct FSmartObjectUseRequest>                      UserList;                                                // 0x0868(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_30Y0[0x18];                                  // 0x0878(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.LookAtPointTag
	 * Size -> 0x01B0 (FullSize[0x01E0] - InheritedSize[0x0030])
	 */
	class ULookAtPointTag : public UGbxDataAsset
	{
	public:
		ELookAtPointType                                           LookAtPointType;                                         // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EFacingChannel                                             FacingStyle;                                             // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_VXVE[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGameplayTag                                        ActionType;                                              // 0x0038(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchHeight;                                            // 0x0040(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      SearchRadius;                                            // 0x0044(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           UseChance;                                               // 0x0048(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UGbxCondition*                                       UseCondition;                                            // 0x00C8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bGetInCloser;                                            // 0x00D0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GVEA[0x3];                                   // 0x00D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      UseRadius;                                               // 0x00D4(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           UsageTime;                                               // 0x00D8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           UserCooldownTime;                                        // 0x0158(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bMaxUsers;                                               // 0x01D8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0QUR[0x3];                                   // 0x01D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxUsers;                                                // 0x01DC(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.Perch
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class APerch : public AActor
	{
	public:
		class UPerchComponent*                                     PerchComponent;                                          // 0x0458(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.PerchComponent
	 * Size -> 0x0250 (FullSize[0x0940] - InheritedSize[0x06F0])
	 */
	class UPerchComponent : public UPrimitiveComponent
	{
	public:
		unsigned char                                              UnknownData_3L7H[0x8];                                   // 0x06F0(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UPerchTag*                                           PerchTag;                                                // 0x06F8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bEnabled;                                                // 0x0700(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_B0FW[0x3];                                   // 0x0701(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      SearchRadius;                                            // 0x0704(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      SearchHeight;                                            // 0x0708(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		float                                                      UseRadius;                                               // 0x070C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		bool                                                       bUsageTimeOverride;                                      // 0x0710(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_1VTP[0x7];                                   // 0x0711(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           UsageTimeOverride;                                       // 0x0718(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bCooldownTimeOverride;                                   // 0x0798(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_0THJ[0x7];                                   // 0x0799(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           CooldownTimeOverride;                                    // 0x07A0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		bool                                                       bUserCooldownTimeOverride;                               // 0x0820(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_5WQY[0x7];                                   // 0x0821(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           UserCooldownTimeOverride;                                // 0x0828(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPrivate
		struct FSmartObjectUseRequest                              Claimant;                                                // 0x08A8(0x0028) Transient, NativeAccessSpecifierPrivate
		float                                                      CooldownTime;                                            // 0x08D0(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_LSAK[0x4];                                   // 0x08D4(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TMap<class AAIController*, float>                          CooldownMap;                                             // 0x08D8(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_Z1PY[0x18];                                  // 0x0928(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.PerchTag
	 * Size -> 0x0190 (FullSize[0x01C0] - InheritedSize[0x0030])
	 */
	class UPerchTag : public UGbxDataAsset
	{
	public:
		class UPerchType*                                          PerchType;                                               // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGameplayTag                                        ActionType;                                              // 0x0038(0x0008) Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           UsageTime;                                               // 0x0040(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           CooldownTime;                                            // 0x00C0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           UserCooldownTime;                                        // 0x0140(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.PerchType
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UPerchType : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.ScriptedBehaviorTreeLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UScriptedBehaviorTreeLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_PerformScriptedAbort(class AActor* Target, bool bStopImmediately);
		void STATIC_BeginScriptedWait(class AActor* Target, class UStanceDataProvider* OptionalStance);
		void STATIC_BeginScriptedLook(class AActor* Target, class AActor* LookAtActor, bool bAimAtActor, bool bFireWeaponAtActor, class UStanceDataProvider* OptionalStance);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SmartObjectAction
	 * Size -> 0x02A0 (FullSize[0x02D0] - InheritedSize[0x0030])
	 */
	class USmartObjectAction : public UGbxDataAsset
	{
	public:
		bool                                                       bPassiveAction;                                          // 0x0030(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCombatAction;                                           // 0x0031(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NQB8[0x6];                                   // 0x0032(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           UseChance;                                               // 0x0038(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		class UGbxCondition*                                       UseCondition;                                            // 0x00B8(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUsageTime;                                              // 0x00C0(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_EXZT[0x7];                                   // 0x00C1(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		struct FGbxParam                                           UsageTime;                                               // 0x00C8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		bool                                                       bMaxUsers;                                               // 0x0148(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GCJV[0x3];                                   // 0x0149(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    MaxUsers;                                                // 0x014C(0x0004) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           ActionCooldownTime;                                      // 0x0150(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           LocalUserCooldownTime;                                   // 0x01D0(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           GlobalUserCooldownTime;                                  // 0x0250(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.AIResource_SmartObject
	 * Size -> 0x0000 (FullSize[0x0038] - InheritedSize[0x0038])
	 */
	class UAIResource_SmartObject : public UGameplayTaskResource
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SmartObjectInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USmartObjectInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SmartObjectBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USmartObjectBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		bool STATIC_UseSmartObject(class AActor* User, class AActor* SmartObject, const struct FGameplayTag& ActionTag, bool bAbortExisting, bool bUntilInterrupted);
		void STATIC_AbortSmartObjectUse(class AActor* User);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SmartObjectComponent
	 * Size -> 0x0350 (FullSize[0x04C8] - InheritedSize[0x0178])
	 */
	class USmartObjectComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_L9XU[0x10];                                  // 0x0178(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnActionReserved;                                        // 0x0188(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActionUsageBegan;                                      // 0x0198(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnObjectActionEnded;                                     // 0x01A8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnActionUsageEnded;                                      // 0x01B8(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		bool                                                       bUseInRoutes;                                            // 0x01C8(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		ESmartObjectLookAtRule                                     LookAtRule;                                              // 0x01C9(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_BU7H[0x6];                                   // 0x01CA(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FName                                                LookAtSocket;                                            // 0x01D0(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxParam                                           UseLookAtQuery;                                          // 0x01D8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           LookAtQueryDuration;                                     // 0x0258(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           LookAtQueryForgetDuration;                               // 0x02D8(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FGbxParam                                           LookAtQueryPeriod;                                       // 0x0358(0x0080) Edit, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		struct FEnvQueryParams                                     LookAtQuery;                                             // 0x03D8(0x00B8) Edit, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<struct FSmartObjectActionState>                     Actions;                                                 // 0x0490(0x0010) Edit, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic
		TArray<class UAIUseSlotComponent*>                         UseSlots;                                                // 0x04A0(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_GIN2[0x18];                                  // 0x04B0(0x0018) MISSED OFFSET (PADDING)

	public:
		void UnreserveEventSignature(class APawn* User);
		void ToggleActionSet(const struct FSmartObjectActionSet& ActionSet);
		void SuccessEventSignature(class APawn* User);
		void ReserveEventSignature(class APawn* User);
		void OnActionEnded(EGbxActionEndState EndState, const struct FGameplayTag& ActionName, class AController* User);
		void InterruptEventSignature(class APawn* User);
		void GetAvailableSocketNames(TArray<class FName>* Array);
		void GetActionUsers(const struct FGameplayTag& ActionTag, TArray<class APawn*>* OutUsers);
		void EnableAllActions();
		void EnableAction(const struct FGameplayTag& ActionTag);
		void DisableAllActions();
		void DisableAction(const struct FGameplayTag& ActionTag);
		void BeginEventSignature(class APawn* User);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SmartObjectPreviewComponent
	 * Size -> 0x0048 (FullSize[0x0830] - InheritedSize[0x07E8])
	 */
	class USmartObjectPreviewComponent : public UPreviewComponent
	{
	public:
		TArray<struct FSmartObjectPreviewState>                    PreviewList;                                             // 0x07E8(0x0010) ZeroConstructor, Transient, DuplicateTransient, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		int32_t                                                    ActiveAISlotIdx;                                         // 0x07F8(0x0004) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_0R1A[0x4];                                   // 0x07FC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UClass*                                              PreviewAction;                                           // 0x0800(0x0008) Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bAutoCycle;                                              // 0x0808(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxTriggerProperty                                 CycleActor;                                              // 0x0809(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		bool                                                       bShowAction;                                             // 0x080A(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		bool                                                       bRepeatAction;                                           // 0x080B(0x0001) Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected
		struct FGbxTriggerProperty                                 ReplayAction;                                            // 0x080C(0x0001) Edit, Transient, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_J5JX[0x3];                                   // 0x080D(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TWeakObjectPtr<class UGbxActionComponent>                  ActionComponent;                                         // 0x0810(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_LSJX[0x18];                                  // 0x0818(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnReplayAction();
		void OnCycleActor(ECycleDirection Direction);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SmartObjectUser
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USmartObjectUser : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SpawnBlueprintLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class USpawnBlueprintLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_SetSpawnOptions(class AActor* SpawnerActor, class USpawnOptionData* SpawnOptions);
		class ASpawner* STATIC_GenerateSpawnerByRadius(class AActor* Instigator, class USpawnerStyle* Style, float Radius, ETeamAttitude MinRequiredAttitude);
		class ASpawner* STATIC_GenerateSpawnerByOwningSpawner(class AActor* Instigator, class USpawnerStyle* Style);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.SpawnNodeComponent
	 * Size -> 0x0000 (FullSize[0x0790] - InheritedSize[0x0790])
	 */
	class USpawnNodeComponent : public UAINodeComponent
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAI.Territory
	 * Size -> 0x0008 (FullSize[0x0460] - InheritedSize[0x0458])
	 */
	class ATerritory : public AInfo
	{
	public:
		class UTerritoryComponent*                                 TerritoryComponent;                                      // 0x0458(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		class UTerritoryComponent* GetTerritoryComponent();
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

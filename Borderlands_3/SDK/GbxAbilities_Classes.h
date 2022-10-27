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
	 * Class GbxAbilities.GbxAbility
	 * Size -> 0x00C0 (FullSize[0x00E8] - InheritedSize[0x0028])
	 */
	class UGbxAbility : public UObject
	{
	public:
		unsigned char                                              UnknownData_ULWE[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FText                                                AbilityName;                                             // 0x0040(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		class FText                                                AbilityDescription;                                      // 0x0058(0x0018) Edit, BlueprintVisible, BlueprintReadOnly, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected
		TArray<struct FGbxAbilityEffect>                           AbilityEffects;                                          // 0x0070(0x0010) Edit, ZeroConstructor, DisableEditOnInstance, ContainsInstancedReference, Protected, NativeAccessSpecifierProtected
		unsigned char                                              UnknownData_VT9B[0x10];                                  // 0x0080(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxAbilityManagerComponent*                         Manager;                                                 // 0x0090(0x0008) BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxAbilityDurationType                                    DurationType;                                            // 0x0098(0x0001) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_R498[0x3];                                   // 0x0099(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Duration;                                                // 0x009C(0x0004) BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxAbilityState                                           DesiredAbilityState;                                     // 0x00A0(0x0001) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		EGbxAbilityState                                           AbilityState;                                            // 0x00A1(0x0001) BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_VNRT[0x6];                                   // 0x00A2(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<struct FGbxAbilityEffectInstance>                   AbilityEffectInstances;                                  // 0x00A8(0x0010) ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_6HQB[0x10];                                  // 0x00B8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UGbxAbilityManagerComponent*                         PendingManager;                                          // 0x00C8(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_XFJ5[0x18];                                  // 0x00D0(0x0018) MISSED OFFSET (PADDING)

	public:
		void OnUnregistered();
		void OnResumed();
		void OnRep_Manager();
		void OnRep_AbilityState();
		void OnRegistered();
		void OnPaused();
		void OnForcedRefresh();
		void OnDeactivated();
		void OnActivated();
		bool IsReplicated();
		class AActor* GetAbilityOwner();
		void Client_Deactivate();
		EGbxAbilityState CalculateAbilityState();
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAbilities.GbxAbilityEffectTargetResolutionData
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxAbilityEffectTargetResolutionData : public UGbxDataAsset
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAbilities.GbxAbilityManagerComponent
	 * Size -> 0x00D0 (FullSize[0x0248] - InheritedSize[0x0178])
	 */
	class UGbxAbilityManagerComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_NDKF[0x30];                                  // 0x0178(0x0030) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class UGbxAbility*>                                 Abilities;                                               // 0x01A8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UGbxAbility*>                                 ReplicatedAbilities;                                     // 0x01B8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TArray<class UGbxAbility*>                                 PendingReplicatedAbilities;                              // 0x01C8(0x0010) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		TMap<class UClass*, class UGbxAbility*>                    RegisteredAbilities;                                     // 0x01D8(0x0050) ZeroConstructor, Transient, NativeAccessSpecifierPrivate
		struct FGbxAbilityManagerComponentListLock                 ListLock;                                                // 0x0228(0x0020) Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate

	public:
		bool RemoveAbility(class UClass* AbilityClass);
		bool HasAbility(class UClass* AbilityClass);
		class UGbxAbility* FindAbility(class UClass* AbilityClass);
		class UGbxAbility* AddAbility(const struct FGbxAbilitySpec& Spec);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAbilities.GbxAbilityAttributePropertyValueResolver
	 * Size -> 0x0028 (FullSize[0x00D8] - InheritedSize[0x00B0])
	 */
	class UGbxAbilityAttributePropertyValueResolver : public UAttributePropertyValueResolver
	{
	public:
		unsigned char                                              GbxAbilityClass[0x28];                                   // 0x00B0(0x0028) UNKNOWN PROPERTY: SoftClassProperty GbxAbilities.GbxAbilityAttributePropertyValueResolver.GbxAbilityClass

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Owner
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxAbilityEffectTargetResolutionData_Owner : public UGbxAbilityEffectTargetResolutionData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAbilities.GbxAbilityEffectTargetResolutionData_Self
	 * Size -> 0x0000 (FullSize[0x0030] - InheritedSize[0x0030])
	 */
	class UGbxAbilityEffectTargetResolutionData_Self : public UGbxAbilityEffectTargetResolutionData
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAbilities.GbxAbilityResourceControllerBlueprintFunctionLibrary
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UGbxAbilityResourceControllerBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
	{
	public:
		void STATIC_UnregisterResourcePoolDelegate(struct FGbxAbilityResourceController_ResourcePoolDelegate* Controller, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec);
		void STATIC_UnregisterConditionalDamageModifier(struct FGbxAbilityResourceController_ConditionalDamageModifier* Controller, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec);
		void STATIC_UnregisterAbilityDelegate(struct FGbxAbilityResourceController_ScriptDelegate* Controller, const struct FGbxAbilityResourceSpec_ScriptDelegate& Spec);
		void STATIC_RegisterResourcePoolDelegate(struct FGbxAbilityResourceController_ResourcePoolDelegate* Controller, const struct FGbxAbilityResourceSpec_ResourcePoolDelegate& Spec);
		void STATIC_RegisterConditionalDamageModifier(struct FGbxAbilityResourceController_ConditionalDamageModifier* Controller, const struct FGbxAbilityResourceSpec_ConditionalDamageModifier& Spec);
		void STATIC_RegisterAbilityDelegate(struct FGbxAbilityResourceController_ScriptDelegate* Controller, const struct FGbxAbilityResourceSpec_ScriptDelegate& Spec);
		static UClass* StaticClass();
	};

	/**
	 * Class GbxAbilities.GbxCondition_HasAbility
	 * Size -> 0x0008 (FullSize[0x0090] - InheritedSize[0x0088])
	 */
	class UGbxCondition_HasAbility : public UGbxCondition
	{
	public:
		class UClass*                                              AbilityClass;                                            // 0x0088(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

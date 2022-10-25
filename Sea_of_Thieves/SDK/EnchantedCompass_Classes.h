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
	// # Classes
	// --------------------------------------------------
	/**
	 * Class EnchantedCompass.EnchantedCompassProximityAnnouncementComponent
	 * Size -> 0x0128 (FullSize[0x01F0] - InheritedSize[0x00C8])
	 */
	class UEnchantedCompassProximityAnnouncementComponent : public UActorComponent
	{
	public:
		class UWwiseEvent*                                         StartAnnouncingEvent;                                    // 0x00C8(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UWwiseEvent*                                         StopAnnouncingEvent;                                     // 0x00D0(0x0008) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		float                                                      MaxFrequencyDistanceSquared;                             // 0x00D8(0x0004) Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_V36F[0x4];                                   // 0x00DC(0x0004) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		unsigned char                                              WielderOrientation[0x10];                                // 0x00E0(0x0010) UNKNOWN PROPERTY: InterfaceProperty EnchantedCompass.EnchantedCompassProximityAnnouncementComponent.WielderOrientation
		unsigned char                                              WielderWwiseEmitterInterface[0x10];                      // 0x00F0(0x0010) UNKNOWN PROPERTY: InterfaceProperty EnchantedCompass.EnchantedCompassProximityAnnouncementComponent.WielderWwiseEmitterInterface
		unsigned char                                              OwnerWieldableInterface[0x10];                           // 0x0100(0x0010) UNKNOWN PROPERTY: InterfaceProperty EnchantedCompass.EnchantedCompassProximityAnnouncementComponent.OwnerWieldableInterface
		unsigned char                                              ObjectMessagingDispatcher[0x10];                         // 0x0110(0x0010) UNKNOWN PROPERTY: InterfaceProperty EnchantedCompass.EnchantedCompassProximityAnnouncementComponent.ObjectMessagingDispatcher
		bool                                                       IsSettingEnabled;                                        // 0x0120(0x0001) ZeroConstructor, IsPlainOldData, NoDestructor
		unsigned char                                              UnknownData_OX8Z[0xCF];                                  // 0x0121(0x00CF) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.MultiTargetEnchantedCompass
	 * Size -> 0x0038 (FullSize[0x0890] - InheritedSize[0x0858])
	 */
	class AMultiTargetEnchantedCompass : public ACompass
	{
	public:
		TArray<struct FVector>                                     Locations;                                               // 0x0858(0x0010) Edit, Net, ZeroConstructor, Transient, EditConst
		TArray<struct FGuid>                                       LocationIds;                                             // 0x0868(0x0010) ZeroConstructor, Transient
		class UInventoryItemComponent*                             InventoryItem;                                           // 0x0878(0x0008) Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		class UEnchantedCompassProximityAnnouncementComponent*     ProximityAnnouncementComponent;                          // 0x0880(0x0008) Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_MF5N[0x8];                                   // 0x0888(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.PrototypeMultiTargetEnchantedCompass
	 * Size -> 0x0000 (FullSize[0x0890] - InheritedSize[0x0890])
	 */
	class APrototypeMultiTargetEnchantedCompass : public AMultiTargetEnchantedCompass
	{
	public:
		float GetFloatMax();
		float CalculateDesiredYaw(const struct FRotator& CompassRotation);
		TArray<struct FVector> BP_GetTargetLocations();
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStep
	 * Size -> 0x0010 (FullSize[0x00A0] - InheritedSize[0x0090])
	 */
	class UTaleQuestMultiTargetCompassAddTrackedLocationStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_PI02[0x8];                                   // 0x0090(0x0008) Fix Super Size
		class UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc* Desc;                                                    // 0x0098(0x0008) ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestMultiTargetCompassAddTrackedLocationStepDesc
	 * Size -> 0x0040 (FullSize[0x00C0] - InheritedSize[0x0080])
	 */
	class UTaleQuestMultiTargetCompassAddTrackedLocationStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableVector                                Location;                                                // 0x0080(0x0020)
		struct FQuestVariableGuid                                  TargetID;                                                // 0x00A0(0x0020)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStep
	 * Size -> 0x0018 (FullSize[0x00A8] - InheritedSize[0x0090])
	 */
	class UTaleQuestMultiTargetCompassRemoveTrackedLocationStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_NMDN[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_2VRQ[0x10];                                  // 0x0098(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc
	 * Size -> 0x0020 (FullSize[0x00A0] - InheritedSize[0x0080])
	 */
	class UTaleQuestMultiTargetCompassRemoveTrackedLocationStepDesc : public UTaleQuestStepDesc
	{
	public:
		struct FQuestVariableGuid                                  TargetID;                                                // 0x0080(0x0020) Edit, DisableEditOnInstance

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestMultiTargetCompassService
	 * Size -> 0x0020 (FullSize[0x0140] - InheritedSize[0x0120])
	 */
	class UTaleQuestMultiTargetCompassService : public UTaleQuestToolService
	{
	public:
		unsigned char                                              UnknownData_3CSA[0x20];                                  // 0x0120(0x0020) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestMultiTargetCompassServiceDesc
	 * Size -> 0x0008 (FullSize[0x0038] - InheritedSize[0x0030])
	 */
	class UTaleQuestMultiTargetCompassServiceDesc : public UTaleQuestToolServiceDesc
	{
	public:
		class UClass*                                              CompassDesc;                                             // 0x0030(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestSetCompassTargetToTargetStep
	 * Size -> 0x0048 (FullSize[0x00D8] - InheritedSize[0x0090])
	 */
	class UTaleQuestSetCompassTargetToTargetStep : public UTaleQuestStep
	{
	public:
		unsigned char                                              UnknownData_9WDP[0x8];                                   // 0x0090(0x0008) Fix Super Size
		unsigned char                                              UnknownData_BHFS[0x40];                                  // 0x0098(0x0040) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestSetCompassTargetBaseStepDesc
	 * Size -> 0x0008 (FullSize[0x0088] - InheritedSize[0x0080])
	 */
	class UTaleQuestSetCompassTargetBaseStepDesc : public UTaleQuestStepDesc
	{
	public:
		ETargetUpdateReason                                        TargetUpdateReason;                                      // 0x0080(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E32E[0x7];                                   // 0x0081(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestSetCompassTargetToActorStepDesc
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	class UTaleQuestSetCompassTargetToActorStepDesc : public UTaleQuestSetCompassTargetBaseStepDesc
	{
	public:
		struct FQuestVariableActor                                 TargetActor;                                             // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class EnchantedCompass.TaleQuestSetCompassTargetToPointStepDesc
	 * Size -> 0x0020 (FullSize[0x00A8] - InheritedSize[0x0088])
	 */
	class UTaleQuestSetCompassTargetToPointStepDesc : public UTaleQuestSetCompassTargetBaseStepDesc
	{
	public:
		struct FQuestVariableOrientedPoint                         TargetPoint;                                             // 0x0088(0x0020) Edit

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

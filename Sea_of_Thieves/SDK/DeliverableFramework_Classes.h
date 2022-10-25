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
	 * Class DeliverableFramework.DeliverableRequirementBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDeliverableRequirementBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_R1XE[0x8];                                   // 0x0028(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDeliverableInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRedirectionInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDeliverableRedirectionInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableComponent
	 * Size -> 0x0020 (FullSize[0x00E8] - InheritedSize[0x00C8])
	 */
	class UDeliverableComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_23N4[0x10];                                  // 0x00C8(0x0010) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDeliverableRequirementsDataAsset*                   DeliveryRequirementsAsset;                               // 0x00D8(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash
		unsigned char                                              UnknownData_E0I9[0x8];                                   // 0x00E0(0x0008) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRedirectionComponent
	 * Size -> 0x0010 (FullSize[0x00D8] - InheritedSize[0x00C8])
	 */
	class UDeliverableRedirectionComponent : public UActorComponent
	{
	public:
		unsigned char                                              UnknownData_9TJP[0x8];                                   // 0x00C8(0x0008) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class UDeliverableRedirectionContextBase*                  Context;                                                 // 0x00D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRedirectionContextBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDeliverableRedirectionContextBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRedirectionNoContext
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDeliverableRedirectionNoContext : public UDeliverableRedirectionContextBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRedirectionCompositeContext
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UDeliverableRedirectionCompositeContext : public UDeliverableRedirectionContextBase
	{
	public:
		TArray<class UDeliverableRedirectionContextBase*>          Contexts;                                                // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
		unsigned char                                              UnknownData_S3OQ[0x18];                                  // 0x0038(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRedirectionDestinationDescriptorBase
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDeliverableRedirectionDestinationDescriptorBase : public UObject
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRedirectionContextHandlerBase
	 * Size -> 0x0008 (FullSize[0x0030] - InheritedSize[0x0028])
	 */
	class UDeliverableRedirectionContextHandlerBase : public UObject
	{
	public:
		class UDeliverableRedirectionDestinationDescriptorBase*    DestinationDescriptor;                                   // 0x0028(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, PersistentInstance, HasGetValueTypeHash

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRedirectionLiteralDestinationDescriptor
	 * Size -> 0x0038 (FullSize[0x0060] - InheritedSize[0x0028])
	 */
	class UDeliverableRedirectionLiteralDestinationDescriptor : public UDeliverableRedirectionDestinationDescriptorBase
	{
	public:
		class FText                                                Destination;                                             // 0x0028(0x0018) ELEMENT_SIZE_MISMATCH Edit
		unsigned char                                              UnknownData_5R7I[0x20];                                  // 0x0040(0x0020) FIX WRONG TYPE SIZE OF PREVIOUS PROPERTY

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableRequirementsDataAsset
	 * Size -> 0x0028 (FullSize[0x0050] - InheritedSize[0x0028])
	 */
	class UDeliverableRequirementsDataAsset : public UDataAsset
	{
	public:
		TArray<class UDeliverableRequirementBase*>                 Requirements;                                            // 0x0028(0x0010) Edit, ExportObject, ZeroConstructor, ContainsInstancedReference
		struct FDeliverableRequirementFeatureOverride              FeatureOverrideRequirements;                             // 0x0038(0x0018) Edit, ContainsInstancedReference

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class DeliverableFramework.DeliverableTooltipCustomizerInterface
	 * Size -> 0x0000 (FullSize[0x0028] - InheritedSize[0x0028])
	 */
	class UDeliverableTooltipCustomizerInterface : public UInterface
	{
	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

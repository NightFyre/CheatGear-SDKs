#pragma once

/**
 * Name: The_Complex
 * Version: 9349459
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
	 * Class LiveLinkComponents.LiveLinkComponentController
	 * Size -> 0x00B8 (FullSize[0x0168] - InheritedSize[0x00B0])
	 */
	class ULiveLinkComponentController : public UActorComponent
	{
	public:
		struct FLiveLinkSubjectRepresentation                      SubjectRepresentation;                                   // 0x00B0(0x0010) Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic
		TMap<class UClass*, class ULiveLinkControllerBase*>        ControllerMap;                                           // 0x00C0(0x0050) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, NoClear, Interp, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic
		bool                                                       bUpdateInEditor;                                         // 0x0110(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_31O5[0x7];                                   // 0x0111(0x0007) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class FScriptMulticastDelegate                             OnLiveLinkUpdated;                                       // 0x0118(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		class FScriptMulticastDelegate                             OnControllerMapUpdatedDelegate;                          // 0x0128(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic
		struct FComponentReference                                 ComponentToControl;                                      // 0x0138(0x0028) Edit, DisableEditOnTemplate, NativeAccessSpecifierPublic
		bool                                                       bDisableEvaluateLiveLinkWhenSpawnable;                   // 0x0160(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bEvaluateLiveLink;                                       // 0x0161(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bUpdateInPreviewEditor;                                  // 0x0162(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_NH3L[0x5];                                   // 0x0163(0x0005) MISSED OFFSET (PADDING)

	public:
		void SetSubjectRepresentation(const struct FLiveLinkSubjectRepresentation& InSubjectRepresentation);
		struct FLiveLinkSubjectRepresentation GetSubjectRepresentation();
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkComponents.LiveLinkComponentSettings
	 * Size -> 0x0050 (FullSize[0x0078] - InheritedSize[0x0028])
	 */
	class ULiveLinkComponentSettings : public UObject
	{
	public:
		TMap<class UClass*, class UClass*>                         DefaultControllerForRole;                                // 0x0028(0x0050) Edit, Config, UObjectWrapper, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkComponents.LiveLinkControllerBase
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class ULiveLinkControllerBase : public UObject
	{
	public:
		unsigned char                                              UnknownData_NNHQ[0x18];                                  // 0x0028(0x0018) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkComponents.LiveLinkLightController
	 * Size -> 0x0000 (FullSize[0x0040] - InheritedSize[0x0040])
	 */
	class ULiveLinkLightController : public ULiveLinkControllerBase
	{
	public:
		static UClass* StaticClass();
	};

	/**
	 * Class LiveLinkComponents.LiveLinkTransformController
	 * Size -> 0x0008 (FullSize[0x0048] - InheritedSize[0x0040])
	 */
	class ULiveLinkTransformController : public ULiveLinkControllerBase
	{
	public:
		struct FLiveLinkTransformControllerData                    TransformData;                                           // 0x0040(0x0006) Edit, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CCCO[0x2];                                   // 0x0046(0x0002) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

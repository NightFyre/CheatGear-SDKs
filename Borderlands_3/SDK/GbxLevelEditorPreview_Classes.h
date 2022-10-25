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
	 * Class GbxLevelEditorPreview.GbxLevelEditorPreviewComponent
	 * Size -> 0x0020 (FullSize[0x02F0] - InheritedSize[0x02D0])
	 */
	class UGbxLevelEditorPreviewComponent : public USceneComponent
	{
	public:
		class UGbxLevelEditorPreviewDefinition*                    Definition;                                              // 0x02D0(0x0008) Edit, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, PersistentInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FGbxLevelEditorPreviewInstanceData                  InstanceData;                                            // 0x02D8(0x0008) Edit, NoDestructor, NativeAccessSpecifierPrivate
		class FString                                              CachedInstanceNamePrefix;                                // 0x02E0(0x0010) ZeroConstructor, Transient, DuplicateTransient, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxLevelEditorPreview.GbxLevelEditorPreviewDefinition
	 * Size -> 0x0018 (FullSize[0x0040] - InheritedSize[0x0028])
	 */
	class UGbxLevelEditorPreviewDefinition : public UObject
	{
	public:
		class FText                                                PreviewTitle;                                            // 0x0028(0x0018) Edit, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxLevelEditorPreview.GbxLevelEditorPreviewAnimation
	 * Size -> 0x0010 (FullSize[0x0050] - InheritedSize[0x0040])
	 */
	class UGbxLevelEditorPreviewAnimation : public UGbxLevelEditorPreviewDefinition
	{
	public:
		TArray<struct FPreviewAnimationDescriptor>                 DescriptorList;                                          // 0x0040(0x0010) Edit, ZeroConstructor, NativeAccessSpecifierPublic

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class GbxLevelEditorPreview.GbxLevelEditorPreviewSettings
	 * Size -> 0x0008 (FullSize[0x0040] - InheritedSize[0x0038])
	 */
	class UGbxLevelEditorPreviewSettings : public UDeveloperSettings
	{
	public:
		bool                                                       AllowLevelEditorPreviewComponent;                        // 0x0038(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ODJI[0x7];                                   // 0x0039(0x0007) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

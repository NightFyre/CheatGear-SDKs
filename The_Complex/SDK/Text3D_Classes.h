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
	 * Class Text3D.Text3DActor
	 * Size -> 0x0008 (FullSize[0x0280] - InheritedSize[0x0278])
	 */
	class AText3DActor : public AActor
	{
	public:
		class UText3DComponent*                                    Text3DComponent;                                         // 0x0278(0x0008) Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate

	public:
		static UClass* StaticClass();
	};

	/**
	 * Class Text3D.Text3DCharacterTransform
	 * Size -> 0x00B0 (FullSize[0x0360] - InheritedSize[0x02B0])
	 */
	class UText3DCharacterTransform : public USceneComponent
	{
	public:
		bool                                                       bLocationEnabled;                                        // 0x02B0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_3OHD[0x3];                                   // 0x02B1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LocationProgress;                                        // 0x02B4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EText3DCharacterEffectOrder                                LocationOrder;                                           // 0x02B8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_PQKW[0x3];                                   // 0x02B9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      LocationRange;                                           // 0x02BC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             LocationDistance;                                        // 0x02C0(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleEnabled;                                           // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_F6IU[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleProgress;                                           // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EText3DCharacterEffectOrder                                ScaleOrder;                                              // 0x02E0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_CTOB[0x3];                                   // 0x02E1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      ScaleRange;                                              // 0x02E4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleBegin;                                              // 0x02E8(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FVector                                             ScaleEnd;                                                // 0x0300(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bRotateEnabled;                                          // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_FZBT[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotateProgress;                                          // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EText3DCharacterEffectOrder                                RotateOrder;                                             // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_D24B[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      RotateRange;                                             // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		struct FRotator                                            RotateBegin;                                             // 0x0328(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		struct FRotator                                            RotateEnd;                                               // 0x0340(0x0018) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_XPEK[0x8];                                   // 0x0358(0x0008) MISSED OFFSET (PADDING)

	public:
		void SetScaleRange(float Range);
		void SetScaleProgress(float Progress);
		void SetScaleOrder(EText3DCharacterEffectOrder Order);
		void SetScaleEnd(const struct FVector& Value);
		void SetScaleEnabled(bool bEnabled);
		void SetScaleBegin(const struct FVector& Value);
		void SetRotateRange(float Range);
		void SetRotateProgress(float Progress);
		void SetRotateOrder(EText3DCharacterEffectOrder Order);
		void SetRotateEnd(const struct FRotator& Value);
		void SetRotateEnabled(bool bEnabled);
		void SetRotateBegin(const struct FRotator& Value);
		void SetLocationRange(float Range);
		void SetLocationProgress(float Progress);
		void SetLocationOrder(EText3DCharacterEffectOrder Order);
		void SetLocationEnabled(bool bEnabled);
		void SetLocationDistance(const struct FVector& Distance);
		static UClass* StaticClass();
	};

	/**
	 * Class Text3D.Text3DComponent
	 * Size -> 0x0100 (FullSize[0x03B0] - InheritedSize[0x02B0])
	 */
	class UText3DComponent : public USceneComponent
	{
	public:
		class FText                                                Text;                                                    // 0x02B0(0x0018) Edit, BlueprintVisible, NativeAccessSpecifierPublic
		float                                                      Extrude;                                                 // 0x02C8(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      Bevel;                                                   // 0x02CC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EText3DBevelType                                           BevelType;                                               // 0x02D0(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_7QWF[0x3];                                   // 0x02D1(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		int32_t                                                    BevelSegments;                                           // 0x02D4(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOutline;                                                // 0x02D8(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_O85H[0x3];                                   // 0x02D9(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      OutlineExpand;                                           // 0x02DC(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  FrontMaterial;                                           // 0x02E0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  BevelMaterial;                                           // 0x02E8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  ExtrudeMaterial;                                         // 0x02F0(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UMaterialInterface*                                  BackMaterial;                                            // 0x02F8(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		class UFont*                                               Font;                                                    // 0x0300(0x0008) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EText3DHorizontalTextAlignment                             HorizontalAlignment;                                     // 0x0308(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		EText3DVerticalTextAlignment                               VerticalAlignment;                                       // 0x0309(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_JNI5[0x2];                                   // 0x030A(0x0002) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      Kerning;                                                 // 0x030C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      LineSpacing;                                             // 0x0310(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		float                                                      WordSpacing;                                             // 0x0314(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMaxWidth;                                            // 0x0318(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_HUDD[0x3];                                   // 0x0319(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxWidth;                                                // 0x031C(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bHasMaxHeight;                                           // 0x0320(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_0ERW[0x3];                                   // 0x0321(0x0003) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		float                                                      MaxHeight;                                               // 0x0324(0x0004) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bScaleProportionally;                                    // 0x0328(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bCastShadow;                                             // 0x0329(0x0001) Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_ESDM[0x6];                                   // 0x032A(0x0006) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		class USceneComponent*                                     TextRoot;                                                // 0x0330(0x0008) ExportObject, ZeroConstructor, Transient, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		class FScriptMulticastDelegate                             TextGeneratedDelegate;                                   // 0x0338(0x0010) ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_3ZHD[0x40];                                  // 0x0348(0x0040) MISSED OFFSET (FIX SPACE BETWEEN PREVIOUS PROPERTY)
		TArray<class USceneComponent*>                             CharacterKernings;                                       // 0x0388(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		TArray<class UStaticMeshComponent*>                        CharacterMeshes;                                         // 0x0398(0x0010) ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_GR63[0x8];                                   // 0x03A8(0x0008) MISSED OFFSET (PADDING)

	public:
		void TextGenerated__DelegateSignature();
		void SetWordSpacing(float Value);
		void SetVerticalAlignment(EText3DVerticalTextAlignment Value);
		void SetText(const class FText& Value);
		void SetScaleProportionally(bool Value);
		void SetOutlineExpand(float Value);
		void SetOutline(bool bValue);
		void SetMaxWidth(float Value);
		void SetMaxHeight(float Value);
		void SetLineSpacing(float Value);
		void SetKerning(float Value);
		void SetHorizontalAlignment(EText3DHorizontalTextAlignment Value);
		void SetHasMaxWidth(bool Value);
		void SetHasMaxHeight(bool Value);
		void SetFrontMaterial(class UMaterialInterface* Value);
		void SetFreeze(bool bFreeze);
		void SetFont(class UFont* InFont);
		void SetExtrudeMaterial(class UMaterialInterface* Value);
		void SetExtrude(float Value);
		void SetCastShadow(bool NewCastShadow);
		void SetBevelType(EText3DBevelType Value);
		void SetBevelSegments(int32_t Value);
		void SetBevelMaterial(class UMaterialInterface* Value);
		void SetBevel(float Value);
		void SetBackMaterial(class UMaterialInterface* Value);
		TArray<class UStaticMeshComponent*> GetGlyphMeshComponents();
		class UStaticMeshComponent* GetGlyphMeshComponent(int32_t Index);
		TArray<class USceneComponent*> GetGlyphKerningComponents();
		class USceneComponent* GetGlyphKerningComponent(int32_t Index);
		int32_t GetGlyphCount();
		void GetBounds(struct FVector* Origin, struct FVector* BoxExtent);
		static UClass* StaticClass();
	};

	/**
	 * Class Text3D.Text3DEngineSubsystem
	 * Size -> 0x0068 (FullSize[0x0098] - InheritedSize[0x0030])
	 */
	class UText3DEngineSubsystem : public UEngineSubsystem
	{
	public:
		class UMaterial*                                           DefaultMaterial;                                         // 0x0030(0x0008) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		TMap<uint32_t, struct FCachedFontData>                     CachedFonts;                                             // 0x0038(0x0050) NativeAccessSpecifierPrivate
		unsigned char                                              UnknownData_BSDF[0x10];                                  // 0x0088(0x0010) MISSED OFFSET (PADDING)

	public:
		static UClass* StaticClass();
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

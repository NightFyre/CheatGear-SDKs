#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: demo-v1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * ScriptStruct TemplateSequence.TemplateSequenceBindingOverrideData
	 * Size -> 0x000C
	 */
	struct FTemplateSequenceBindingOverrideData
	{
	public:
		TWeakObjectPtr<class UObject>                              Object;                                                  // 0x0000(0x0008) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic
		bool                                                       bOverridesDefault;                                       // 0x0008(0x0001) Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_Q33D[0x3];                                   // 0x0009(0x0003) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TemplateSequence.TemplateSequenceInstanceData
	 * Size -> 0x0018 (FullSize[0x0020] - InheritedSize[0x0008])
	 */
	struct FTemplateSequenceInstanceData : public FMovieSceneSequenceInstanceData
	{
	public:
		struct FMovieSceneEvaluationOperand                        Operand;                                                 // 0x0008(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic
		unsigned char                                              UnknownData_OWS3[0x4];                                   // 0x001C(0x0004) MISSED OFFSET (PADDING)
	};

	/**
	 * ScriptStruct TemplateSequence.TemplateSequenceSectionTemplate
	 * Size -> 0x0028 (FullSize[0x0048] - InheritedSize[0x0020])
	 */
	struct FTemplateSequenceSectionTemplate : public FMovieSceneEvalTemplate
	{
	public:
		struct FFrameNumber                                        SectionStartTime;                                        // 0x0020(0x0004) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FGuid                                               OuterBindingId;                                          // 0x0024(0x0010) ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
		struct FMovieSceneEvaluationOperand                        InnerOperand;                                            // 0x0034(0x0014) NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif

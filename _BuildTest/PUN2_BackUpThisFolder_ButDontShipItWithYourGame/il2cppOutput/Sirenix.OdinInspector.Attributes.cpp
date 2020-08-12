#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// Sirenix.OdinInspector.AssetListAttribute
struct AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF;
// Sirenix.OdinInspector.AssetSelectorAttribute
struct AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096;
// Sirenix.OdinInspector.AssetsOnlyAttribute
struct AssetsOnlyAttribute_t4B998F8AD66F2A00BEEB3E219675169C703792A1;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// Sirenix.OdinInspector.BoxGroupAttribute
struct BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6;
// Sirenix.OdinInspector.ButtonAttribute
struct ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47;
// Sirenix.OdinInspector.ButtonGroupAttribute
struct ButtonGroupAttribute_tDC19026AD744C75F907B2B44C890011F39CC5355;
// Sirenix.OdinInspector.ChildGameObjectsOnlyAttribute
struct ChildGameObjectsOnlyAttribute_t99ADCD6484122DF797B717FD12EDD9F5E1AC478A;
// Sirenix.OdinInspector.ColorPaletteAttribute
struct ColorPaletteAttribute_t4A81C5208D921F284CFB229A7725EC96DFD8E5B5;
// Sirenix.OdinInspector.CustomContextMenuAttribute
struct CustomContextMenuAttribute_t70FD6594A1970EA3D164B840161CBC3E8E600EB7;
// Sirenix.OdinInspector.CustomValueDrawerAttribute
struct CustomValueDrawerAttribute_tE49F17D7241B5B464D8456B163F8C56923917D60;
// Sirenix.OdinInspector.DelayedPropertyAttribute
struct DelayedPropertyAttribute_t3B9B78F65E2D6939F7B61C7410ADFF395DCA7C89;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// Sirenix.OdinInspector.DetailedInfoBoxAttribute
struct DetailedInfoBoxAttribute_t2AE8658829B606862E843757085ADD8A0DE19907;
// Sirenix.OdinInspector.DictionaryDrawerSettings
struct DictionaryDrawerSettings_tAA898EA1B98F778FB5A03EA7996CAC669B0ED434;
// Sirenix.OdinInspector.DisableContextMenuAttribute
struct DisableContextMenuAttribute_t488F1D54F6C91D1C17BC2365B993D84CD19C9A86;
// Sirenix.OdinInspector.DisableIfAttribute
struct DisableIfAttribute_t5699C1C9B82D9CE13598B7757457BB439454FA27;
// Sirenix.OdinInspector.DisableInEditorModeAttribute
struct DisableInEditorModeAttribute_t97721B0DDF6E7AACEE6E726D671175D580E39ACB;
// Sirenix.OdinInspector.DisableInInlineEditorsAttribute
struct DisableInInlineEditorsAttribute_tBD42DA94EF0C7EF5E8CBFCF9F7BF6EBA4BDDA0B7;
// Sirenix.OdinInspector.DisableInNonPrefabsAttribute
struct DisableInNonPrefabsAttribute_t4E2DCCE8E14E9DB3F1875BA677CBFB5FBCA3B5B1;
// Sirenix.OdinInspector.DisableInPlayModeAttribute
struct DisableInPlayModeAttribute_tF2DB70F76C4B9EEB1D6C22CA518534792D7D31F5;
// Sirenix.OdinInspector.DisableInPrefabAssetsAttribute
struct DisableInPrefabAssetsAttribute_t9D1E468944E87537B18601EAD10CB765FE0A24C3;
// Sirenix.OdinInspector.DisableInPrefabInstancesAttribute
struct DisableInPrefabInstancesAttribute_tFD597BDAF438F3CBB62D7ABE8275628F08D2E22A;
// Sirenix.OdinInspector.DisableInPrefabsAttribute
struct DisableInPrefabsAttribute_t9BFDE824C44F0D079670C41E0E1D93E159A5E9CA;
// Sirenix.OdinInspector.DisplayAsStringAttribute
struct DisplayAsStringAttribute_tDF4C917E4B96691E50E0BF8D6341C1FC1588D1A0;
// Sirenix.OdinInspector.DoNotDrawAsReferenceAttribute
struct DoNotDrawAsReferenceAttribute_t1733822E81BCF25AD73D17BDA6728D0C47992C7D;
// Sirenix.OdinInspector.DontApplyToListElementsAttribute
struct DontApplyToListElementsAttribute_tFD5D5B532B6272DE43CA24544629F6FB415B311C;
// Sirenix.OdinInspector.DrawWithUnityAttribute
struct DrawWithUnityAttribute_t1AAE718BB4943F79D46CD517AC31A2E48959FC1E;
// Sirenix.OdinInspector.EnableForPrefabOnlyAttribute
struct EnableForPrefabOnlyAttribute_tB522C6AEAEC726EA14C18F4385448BF608A3DA79;
// Sirenix.OdinInspector.EnableGUIAttribute
struct EnableGUIAttribute_tAC87F02189063A1B338EDDBC33318272F5C3D3C7;
// Sirenix.OdinInspector.EnableIfAttribute
struct EnableIfAttribute_t0C1D534F8FB1F9C9B0732523502B76572C10727F;
// Sirenix.OdinInspector.EnumPagingAttribute
struct EnumPagingAttribute_tADC2A440F2917740F298F8C04750969B255028A5;
// Sirenix.OdinInspector.EnumToggleButtonsAttribute
struct EnumToggleButtonsAttribute_tD54F6B17BE4A797851707A83930C5BB1EEF66189;
// Sirenix.OdinInspector.FilePathAttribute
struct FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B;
// Sirenix.OdinInspector.FolderPathAttribute
struct FolderPathAttribute_t2B3B21E242BF56572EA687BEA45B26107C1F41D0;
// Sirenix.OdinInspector.FoldoutGroupAttribute
struct FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA;
// Sirenix.OdinInspector.GUIColorAttribute
struct GUIColorAttribute_tA4CDDCA58D98DDBD285E924022FC73A2D5E85002;
// Sirenix.OdinInspector.HideDuplicateReferenceBoxAttribute
struct HideDuplicateReferenceBoxAttribute_tB65A17F36ACD251F29188E445E76EDD648D12589;
// Sirenix.OdinInspector.HideIfAttribute
struct HideIfAttribute_t2BB8103DD9C18BF0806E5D5DEE78F4001E818774;
// Sirenix.OdinInspector.HideIfGroupAttribute
struct HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165;
// Sirenix.OdinInspector.HideInEditorModeAttribute
struct HideInEditorModeAttribute_t9F5756D45CE7426470CE4382C9E6818B31195722;
// Sirenix.OdinInspector.HideInInlineEditorsAttribute
struct HideInInlineEditorsAttribute_t45CDA705EF1C3919B45A516B1E342017FF12C3D3;
// Sirenix.OdinInspector.HideInNonPrefabsAttribute
struct HideInNonPrefabsAttribute_tA040FA7BBF8C5B002CC32FF584DE1E2DAD42FDE1;
// Sirenix.OdinInspector.HideInPlayModeAttribute
struct HideInPlayModeAttribute_t9A0C32CA0CF0F2A43B9504C2EBB8697C3567BEA7;
// Sirenix.OdinInspector.HideInPrefabAssetsAttribute
struct HideInPrefabAssetsAttribute_t28859BF475E9B798F4B69479F3E7402D52272317;
// Sirenix.OdinInspector.HideInPrefabInstancesAttribute
struct HideInPrefabInstancesAttribute_tF60A009AB5AFB1E0335EE88D40AE7C9D848BD150;
// Sirenix.OdinInspector.HideInPrefabsAttribute
struct HideInPrefabsAttribute_t610200AA7F661259BDA8F79DA6223D2B658DE5F4;
// Sirenix.OdinInspector.HideInTablesAttribute
struct HideInTablesAttribute_t6EA180FD533AC515DF20B12230BF58971527B1EE;
// Sirenix.OdinInspector.HideLabelAttribute
struct HideLabelAttribute_tE49F93206248913152A2763A259CEABC8C634733;
// Sirenix.OdinInspector.HideMonoScriptAttribute
struct HideMonoScriptAttribute_t1D325E99CE0BA9AD28D82386996F75E6AA9C4EBA;
// Sirenix.OdinInspector.HideNetworkBehaviourFieldsAttribute
struct HideNetworkBehaviourFieldsAttribute_tBA402A4536647625FF68DB186BF03A781C042820;
// Sirenix.OdinInspector.HideReferenceObjectPickerAttribute
struct HideReferenceObjectPickerAttribute_tC9A271A405B334ECF2C6F7D4A536650ADD7274A2;
// Sirenix.OdinInspector.HorizontalGroupAttribute
struct HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// Sirenix.OdinInspector.IncludeMyAttributesAttribute
struct IncludeMyAttributesAttribute_t6943BFE4C9994BB53F22A86A586B5CE7EBDBF4BF;
// Sirenix.OdinInspector.IndentAttribute
struct IndentAttribute_tDD6597C05729531BA226F91C47E1B87B2A31AC8F;
// Sirenix.OdinInspector.InfoBoxAttribute
struct InfoBoxAttribute_tD2CBFDC2F3C53791F8821B7C6AA0A74CC17035B7;
// Sirenix.OdinInspector.InlineButtonAttribute
struct InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1;
// Sirenix.OdinInspector.InlineEditorAttribute
struct InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5;
// Sirenix.OdinInspector.InlinePropertyAttribute
struct InlinePropertyAttribute_t458D3BEFAA7AA75DDC2FBA478D35858CA501EDBC;
// Sirenix.OdinInspector.LabelTextAttribute
struct LabelTextAttribute_t814941A9EEF13DBD64BB1E8D2522157FCE6104F7;
// Sirenix.OdinInspector.LabelWidthAttribute
struct LabelWidthAttribute_tDB275565D5A1DBC93FDAA47ABC1D1AC34AF769A4;
// Sirenix.OdinInspector.ListDrawerSettingsAttribute
struct ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060;
// Sirenix.OdinInspector.MaxValueAttribute
struct MaxValueAttribute_tDE6F43F1FA837264D5FB445AE3FD90399D5C50A1;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Sirenix.OdinInspector.MinMaxSliderAttribute
struct MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7;
// Sirenix.OdinInspector.MinValueAttribute
struct MinValueAttribute_t796488D6DA2E5C0A2D3C9C9A491E55C30DE24E5A;
// Sirenix.OdinInspector.MultiLinePropertyAttribute
struct MultiLinePropertyAttribute_t8E5072FB9813750CFF7E5BF3E5AF36248D49DA8A;
// Sirenix.OdinInspector.OdinRegisterAttributeAttribute
struct OdinRegisterAttributeAttribute_t76DCC6FBC87190DF6CEA72E5A95972A0C277AA73;
// Sirenix.OdinInspector.OnInspectorGUIAttribute
struct OnInspectorGUIAttribute_t00B121908C6763DE1C90CFAAA5EA9481FA5E2543;
// Sirenix.OdinInspector.OnValueChangedAttribute
struct OnValueChangedAttribute_tCB399324DBFE5B539E58190EEFFF65DDAE54F53C;
// Sirenix.OdinInspector.PreviewFieldAttribute
struct PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3;
// Sirenix.OdinInspector.ProgressBarAttribute
struct ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585;
// Sirenix.OdinInspector.PropertyGroupAttribute
struct PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC;
// Sirenix.OdinInspector.PropertyOrderAttribute
struct PropertyOrderAttribute_t291D24D911501C22DFD4885D5D8A967D12D51BA6;
// Sirenix.OdinInspector.PropertyRangeAttribute
struct PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155;
// Sirenix.OdinInspector.PropertySpaceAttribute
struct PropertySpaceAttribute_t1DFA91C2DDEC7BD33AD1C7B12E963C7BE3B7C0F2;
// Sirenix.OdinInspector.PropertyTooltipAttribute
struct PropertyTooltipAttribute_t8047641A70C4A6B06E4F5B7301DAC380DA4EAF0A;
// Sirenix.OdinInspector.ReadOnlyAttribute
struct ReadOnlyAttribute_t6ABE89F7B844D5B9B60A7032AE72B2AB74CD6BD2;
// Sirenix.OdinInspector.RequiredAttribute
struct RequiredAttribute_t0D25485F34E769C08AF7AFFB831AB03045584B56;
// Sirenix.OdinInspector.ResponsiveButtonGroupAttribute
struct ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// Sirenix.OdinInspector.SceneObjectsOnlyAttribute
struct SceneObjectsOnlyAttribute_t5FD1F8BCE579E5C948EDEACC3D84B9A92A335097;
// Sirenix.OdinInspector.ShowDrawerChainAttribute
struct ShowDrawerChainAttribute_t7E24C9E0A157A9BB8C71B209FD224B15B8CAA7B5;
// Sirenix.OdinInspector.ShowForPrefabOnlyAttribute
struct ShowForPrefabOnlyAttribute_t36E125BF7BCF070CE3A36E48733877A5DC88A7A3;
// Sirenix.OdinInspector.ShowIfAttribute
struct ShowIfAttribute_tADCA17DE04CA086A84731CE92C1453A1014C1276;
// Sirenix.OdinInspector.ShowIfGroupAttribute
struct ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE;
// Sirenix.OdinInspector.ShowInInlineEditorsAttribute
struct ShowInInlineEditorsAttribute_t8A5EA75D74A3F5AAE0FD09BA0F819E2206E82CC7;
// Sirenix.OdinInspector.ShowInInspectorAttribute
struct ShowInInspectorAttribute_t32120F244A3048FD51028573FF8746BEFCCCB188;
// Sirenix.OdinInspector.ShowOdinSerializedPropertiesInInspectorAttribute
struct ShowOdinSerializedPropertiesInInspectorAttribute_tEE14FEFB0FB4F61B77E5E2B9D4B49B0067DD8809;
// Sirenix.OdinInspector.ShowPropertyResolverAttribute
struct ShowPropertyResolverAttribute_t9D1FF8EB98635FD841940F990C325C7222E53A04;
// Sirenix.OdinInspector.SuffixLabelAttribute
struct SuffixLabelAttribute_t037E0B7A9267FE217458F360324CB81AC97D4216;
// Sirenix.OdinInspector.SuppressInvalidAttributeErrorAttribute
struct SuppressInvalidAttributeErrorAttribute_t2896A7EC0558B1368A3E4D151DB86DB05AF1A242;
// Sirenix.OdinInspector.TabGroupAttribute
struct TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF;
// Sirenix.OdinInspector.TableColumnWidthAttribute
struct TableColumnWidthAttribute_t51389CA96D7DB70E1AB0C5510B828071CA031988;
// Sirenix.OdinInspector.TableListAttribute
struct TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A;
// Sirenix.OdinInspector.TableMatrixAttribute
struct TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5;
// Sirenix.OdinInspector.TitleAttribute
struct TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2;
// Sirenix.OdinInspector.TitleGroupAttribute
struct TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2;
// Sirenix.OdinInspector.ToggleAttribute
struct ToggleAttribute_t966D64C017A35B7FB3D634C717543F42E7BF4FB5;
// Sirenix.OdinInspector.ToggleGroupAttribute
struct ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA;
// Sirenix.OdinInspector.ToggleLeftAttribute
struct ToggleLeftAttribute_t5F93AAEF9F198EC45ED753969C321A60454EAAA0;
// Sirenix.OdinInspector.TypeFilterAttribute
struct TypeFilterAttribute_t0168A857763118E8C0800DC3132E730160608902;
// Sirenix.OdinInspector.TypeInfoBoxAttribute
struct TypeInfoBoxAttribute_t327B0B2EFE3F33BF6897555A44D751B4FB1CB762;
// Sirenix.OdinInspector.ValidateInputAttribute
struct ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C;
// Sirenix.OdinInspector.ValueDropdownAttribute
struct ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C;
// Sirenix.OdinInspector.VerticalGroupAttribute
struct VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Sirenix.OdinInspector.WrapAttribute
struct WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8;
// Sirenix.OdinInspector.AssetSelectorAttribute/<>c
struct U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951;
// Sirenix.OdinInspector.TabGroupAttribute/TabSubGroupAttribute
struct TabSubGroupAttribute_tCD5574179789F2FFC2F6FE36AFF617C134B07874;
// System.Func`2<System.Object,System.Object>
struct Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436;
// System.Func`2<System.String,System.String>
struct Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t52B1AC8D9E5E1ED28DF6C46A37C9A1B00B394F9D;
// System.Collections.Generic.IEnumerable`1<System.String>
struct IEnumerable_1_tBD60400523D840591A17E4CBBACC79397F68FAA2;
// System.Collections.Generic.IList`1<Sirenix.OdinInspector.PropertyGroupAttribute>
struct IList_1_t4AB61DDE3506ECA3ACC66C3894B6C758DB6B2FE4;
// System.Collections.Generic.List`1<Sirenix.OdinInspector.PropertyGroupAttribute>
struct List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.String>
struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentNullException
struct ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB;
// System.Attribute
struct Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.NotImplementedException
struct NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Sirenix.OdinInspector.PropertyGroupAttribute[]
struct PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TabSubGroupAttribute_tCD5574179789F2FFC2F6FE36AFF617C134B07874_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0B13B52780344FB2960F902E01BC99A1B7E5A4B5;
IL2CPP_EXTERN_C String_t* _stringLiteral43E3531262B01D6352A62A076F3CA58EB20D257F;
IL2CPP_EXTERN_C String_t* _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
IL2CPP_EXTERN_C String_t* _stringLiteral6E9E619437A54F36D60249F4E555066130AFDC3C;
IL2CPP_EXTERN_C String_t* _stringLiteral7F87C5EE8E2AF3096FEB1F359E7640DC822F9ACD;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3;
IL2CPP_EXTERN_C String_t* _stringLiteralA46F01FBD653440FE1C9E92E2A2D40AAB3645653;
IL2CPP_EXTERN_C String_t* _stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07;
IL2CPP_EXTERN_C String_t* _stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB;
IL2CPP_EXTERN_C String_t* _stringLiteralD13C29EFE248E598FB27D17F13DBD3AF1D765FB8;
IL2CPP_EXTERN_C String_t* _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InlineEditorAttribute__ctor_m0D73D4171968AA3A711238B2650A8D06B5B0DC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m1D45B1E8B37CFAA4312157DCC87E105ECAE6C611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBCA6BA07CA772E0A0725055E7BB85526110A238E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PropertyGroupAttribute_Combine_mF0ED33E113BD28E7992ADD345F8129A1AB9C6A58_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cset_PathsU3Eb__12_0_m35A081627585DE3088EDD8A01D7CA18E7129EF97_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AssetSelectorAttribute_get_Paths_m3A2B3F73CF3D73C0B82FC48AB2CE4E9BEBAA2E1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AssetSelectorAttribute_set_Paths_mE8FB06A16BE7C529ADC8B6E413163C1D99CDCCBB_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoxGroupAttribute_CombineValuesWith_m70F4A55A14D1AC27892814F928CB28CF42DFCB04_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t BoxGroupAttribute__ctor_mF2EBBC8847BA081A52BEBB0C08C1D10C37FBDB9B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t DictionaryDrawerSettings__ctor_mD5A1224F5E7A01C37C4C8943694D10187C7EBA6D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t FoldoutGroupAttribute_CombineValuesWith_mE4E3F1E87F7FEFB298FCCCC3B06EBC2E06D8F285_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HideIfGroupAttribute_CombineValuesWith_m1B9C277C0251FBC47CA732912B54B8E7EF256279_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HorizontalGroupAttribute_CombineValuesWith_mEC076F3B2496A4AA6457005E2C372778B8997630_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t HorizontalGroupAttribute__ctor_m5D0073C2082B3361CD63D6B4C63535D3F63EF48C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t InlineEditorAttribute__ctor_m0D73D4171968AA3A711238B2650A8D06B5B0DC79_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t MultiLinePropertyAttribute__ctor_mFEFE038EFE303EA54F9E115011EEFB5AD21CA60F_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PropertyGroupAttribute_Combine_mF0ED33E113BD28E7992ADD345F8129A1AB9C6A58_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ResponsiveButtonGroupAttribute_CombineValuesWith_m9C7C9C25182E935D148A7AFC73A267D6997F5352_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ShowIfGroupAttribute_CombineValuesWith_m8C86B5EBE9A6D6BFB5A460A09D92524A5968E05E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TabGroupAttribute_CombineValuesWith_m19635967229C423E88C8D4F44F70FDE65043BA7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TabGroupAttribute_Sirenix_OdinInspector_Internal_ISubGroupProviderAttribute_GetSubGroupAttributes_m79E28A523A400EC2BC82B2889EFBFD163B2E1F7A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TabGroupAttribute_Sirenix_OdinInspector_Internal_ISubGroupProviderAttribute_RepathMemberAttribute_mE6D4594E1370026C4409C8723AB218B24F498CBE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TabGroupAttribute__ctor_m3808A005FA0A5A6163159AD65D5BBFE7C217FC28_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TabGroupAttribute__ctor_mCC569AB49EC9077F27B371438E672F74BD76D585_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TableListAttribute_get_ScrollViewHeight_m276413EC14EE2A7342EBD8F1DA45304FBACE126C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TitleAttribute__ctor_mCEBD0EFF93B60DA2C5D656734DE8BEA4F6FFD8E3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t TitleGroupAttribute_CombineValuesWith_m82EFA8E9F909599EC0719B9EB33A6EA98D2262F1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ToggleGroupAttribute_CombineValuesWith_m22ACFE41F5F963228A0DFCAAF45A18749CBC4C82_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t U3CU3Ec__cctor_m93FE361544050182092D4EE3D786D759D2A888B9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_com_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_pinvoke_FromNativeMethodDefinition_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VerticalGroupAttribute_CombineValuesWith_mC8162974BCE52295246BD9B3676FF9091FD9E77D_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t VerticalGroupAttribute__ctor_m5DE5C1FEBEB0B42B660086132FD4BB32015CE337_MetadataUsageId;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t8E2AD0C65AF33B159FC3C302256047327A50ABF9 
{
public:

public:
};


// System.Object


// Sirenix.OdinInspector.AssetSelectorAttribute_<>c
struct  U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_StaticFields
{
public:
	// Sirenix.OdinInspector.AssetSelectorAttribute_<>c Sirenix.OdinInspector.AssetSelectorAttribute_<>c::<>9
	U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 * ___U3CU3E9_0;
	// System.Func`2<System.String,System.String> Sirenix.OdinInspector.AssetSelectorAttribute_<>c::<>9__12_0
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___U3CU3E9__12_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__12_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_StaticFields, ___U3CU3E9__12_0_1)); }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * get_U3CU3E9__12_0_1() const { return ___U3CU3E9__12_0_1; }
	inline Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A ** get_address_of_U3CU3E9__12_0_1() { return &___U3CU3E9__12_0_1; }
	inline void set_U3CU3E9__12_0_1(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * value)
	{
		___U3CU3E9__12_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__12_0_1), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.Attribute
struct  Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71  : public RuntimeObject
{
public:

public:
};


// System.Collections.Generic.List`1<Sirenix.OdinInspector.PropertyGroupAttribute>
struct  List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA, ____items_1)); }
	inline PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7* get__items_1() const { return ____items_1; }
	inline PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA_StaticFields, ____emptyArray_5)); }
	inline PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PropertyGroupAttributeU5BU5D_t2260356A60771AD06FE7F12284FD8B72D9A381D7* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.String>
struct  List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____items_1)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__items_1() const { return ____items_1; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_StaticFields, ____emptyArray_5)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get__emptyArray_5() const { return ____emptyArray_5; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// Sirenix.OdinInspector.AssetListAttribute
struct  AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.AssetListAttribute::AutoPopulate
	bool ___AutoPopulate_0;
	// System.String Sirenix.OdinInspector.AssetListAttribute::Tags
	String_t* ___Tags_1;
	// System.String Sirenix.OdinInspector.AssetListAttribute::LayerNames
	String_t* ___LayerNames_2;
	// System.String Sirenix.OdinInspector.AssetListAttribute::AssetNamePrefix
	String_t* ___AssetNamePrefix_3;
	// System.String Sirenix.OdinInspector.AssetListAttribute::Path
	String_t* ___Path_4;
	// System.String Sirenix.OdinInspector.AssetListAttribute::CustomFilterMethod
	String_t* ___CustomFilterMethod_5;

public:
	inline static int32_t get_offset_of_AutoPopulate_0() { return static_cast<int32_t>(offsetof(AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF, ___AutoPopulate_0)); }
	inline bool get_AutoPopulate_0() const { return ___AutoPopulate_0; }
	inline bool* get_address_of_AutoPopulate_0() { return &___AutoPopulate_0; }
	inline void set_AutoPopulate_0(bool value)
	{
		___AutoPopulate_0 = value;
	}

	inline static int32_t get_offset_of_Tags_1() { return static_cast<int32_t>(offsetof(AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF, ___Tags_1)); }
	inline String_t* get_Tags_1() const { return ___Tags_1; }
	inline String_t** get_address_of_Tags_1() { return &___Tags_1; }
	inline void set_Tags_1(String_t* value)
	{
		___Tags_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tags_1), (void*)value);
	}

	inline static int32_t get_offset_of_LayerNames_2() { return static_cast<int32_t>(offsetof(AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF, ___LayerNames_2)); }
	inline String_t* get_LayerNames_2() const { return ___LayerNames_2; }
	inline String_t** get_address_of_LayerNames_2() { return &___LayerNames_2; }
	inline void set_LayerNames_2(String_t* value)
	{
		___LayerNames_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___LayerNames_2), (void*)value);
	}

	inline static int32_t get_offset_of_AssetNamePrefix_3() { return static_cast<int32_t>(offsetof(AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF, ___AssetNamePrefix_3)); }
	inline String_t* get_AssetNamePrefix_3() const { return ___AssetNamePrefix_3; }
	inline String_t** get_address_of_AssetNamePrefix_3() { return &___AssetNamePrefix_3; }
	inline void set_AssetNamePrefix_3(String_t* value)
	{
		___AssetNamePrefix_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AssetNamePrefix_3), (void*)value);
	}

	inline static int32_t get_offset_of_Path_4() { return static_cast<int32_t>(offsetof(AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF, ___Path_4)); }
	inline String_t* get_Path_4() const { return ___Path_4; }
	inline String_t** get_address_of_Path_4() { return &___Path_4; }
	inline void set_Path_4(String_t* value)
	{
		___Path_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Path_4), (void*)value);
	}

	inline static int32_t get_offset_of_CustomFilterMethod_5() { return static_cast<int32_t>(offsetof(AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF, ___CustomFilterMethod_5)); }
	inline String_t* get_CustomFilterMethod_5() const { return ___CustomFilterMethod_5; }
	inline String_t** get_address_of_CustomFilterMethod_5() { return &___CustomFilterMethod_5; }
	inline void set_CustomFilterMethod_5(String_t* value)
	{
		___CustomFilterMethod_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomFilterMethod_5), (void*)value);
	}
};


// Sirenix.OdinInspector.AssetSelectorAttribute
struct  AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.AssetSelectorAttribute::IsUniqueList
	bool ___IsUniqueList_0;
	// System.Boolean Sirenix.OdinInspector.AssetSelectorAttribute::DrawDropdownForListElements
	bool ___DrawDropdownForListElements_1;
	// System.Boolean Sirenix.OdinInspector.AssetSelectorAttribute::DisableListAddButtonBehaviour
	bool ___DisableListAddButtonBehaviour_2;
	// System.Boolean Sirenix.OdinInspector.AssetSelectorAttribute::ExcludeExistingValuesInList
	bool ___ExcludeExistingValuesInList_3;
	// System.Boolean Sirenix.OdinInspector.AssetSelectorAttribute::ExpandAllMenuItems
	bool ___ExpandAllMenuItems_4;
	// System.Boolean Sirenix.OdinInspector.AssetSelectorAttribute::FlattenTreeView
	bool ___FlattenTreeView_5;
	// System.Int32 Sirenix.OdinInspector.AssetSelectorAttribute::DropdownWidth
	int32_t ___DropdownWidth_6;
	// System.Int32 Sirenix.OdinInspector.AssetSelectorAttribute::DropdownHeight
	int32_t ___DropdownHeight_7;
	// System.String Sirenix.OdinInspector.AssetSelectorAttribute::DropdownTitle
	String_t* ___DropdownTitle_8;
	// System.String[] Sirenix.OdinInspector.AssetSelectorAttribute::SearchInFolders
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___SearchInFolders_9;
	// System.String Sirenix.OdinInspector.AssetSelectorAttribute::Filter
	String_t* ___Filter_10;

public:
	inline static int32_t get_offset_of_IsUniqueList_0() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___IsUniqueList_0)); }
	inline bool get_IsUniqueList_0() const { return ___IsUniqueList_0; }
	inline bool* get_address_of_IsUniqueList_0() { return &___IsUniqueList_0; }
	inline void set_IsUniqueList_0(bool value)
	{
		___IsUniqueList_0 = value;
	}

	inline static int32_t get_offset_of_DrawDropdownForListElements_1() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___DrawDropdownForListElements_1)); }
	inline bool get_DrawDropdownForListElements_1() const { return ___DrawDropdownForListElements_1; }
	inline bool* get_address_of_DrawDropdownForListElements_1() { return &___DrawDropdownForListElements_1; }
	inline void set_DrawDropdownForListElements_1(bool value)
	{
		___DrawDropdownForListElements_1 = value;
	}

	inline static int32_t get_offset_of_DisableListAddButtonBehaviour_2() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___DisableListAddButtonBehaviour_2)); }
	inline bool get_DisableListAddButtonBehaviour_2() const { return ___DisableListAddButtonBehaviour_2; }
	inline bool* get_address_of_DisableListAddButtonBehaviour_2() { return &___DisableListAddButtonBehaviour_2; }
	inline void set_DisableListAddButtonBehaviour_2(bool value)
	{
		___DisableListAddButtonBehaviour_2 = value;
	}

	inline static int32_t get_offset_of_ExcludeExistingValuesInList_3() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___ExcludeExistingValuesInList_3)); }
	inline bool get_ExcludeExistingValuesInList_3() const { return ___ExcludeExistingValuesInList_3; }
	inline bool* get_address_of_ExcludeExistingValuesInList_3() { return &___ExcludeExistingValuesInList_3; }
	inline void set_ExcludeExistingValuesInList_3(bool value)
	{
		___ExcludeExistingValuesInList_3 = value;
	}

	inline static int32_t get_offset_of_ExpandAllMenuItems_4() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___ExpandAllMenuItems_4)); }
	inline bool get_ExpandAllMenuItems_4() const { return ___ExpandAllMenuItems_4; }
	inline bool* get_address_of_ExpandAllMenuItems_4() { return &___ExpandAllMenuItems_4; }
	inline void set_ExpandAllMenuItems_4(bool value)
	{
		___ExpandAllMenuItems_4 = value;
	}

	inline static int32_t get_offset_of_FlattenTreeView_5() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___FlattenTreeView_5)); }
	inline bool get_FlattenTreeView_5() const { return ___FlattenTreeView_5; }
	inline bool* get_address_of_FlattenTreeView_5() { return &___FlattenTreeView_5; }
	inline void set_FlattenTreeView_5(bool value)
	{
		___FlattenTreeView_5 = value;
	}

	inline static int32_t get_offset_of_DropdownWidth_6() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___DropdownWidth_6)); }
	inline int32_t get_DropdownWidth_6() const { return ___DropdownWidth_6; }
	inline int32_t* get_address_of_DropdownWidth_6() { return &___DropdownWidth_6; }
	inline void set_DropdownWidth_6(int32_t value)
	{
		___DropdownWidth_6 = value;
	}

	inline static int32_t get_offset_of_DropdownHeight_7() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___DropdownHeight_7)); }
	inline int32_t get_DropdownHeight_7() const { return ___DropdownHeight_7; }
	inline int32_t* get_address_of_DropdownHeight_7() { return &___DropdownHeight_7; }
	inline void set_DropdownHeight_7(int32_t value)
	{
		___DropdownHeight_7 = value;
	}

	inline static int32_t get_offset_of_DropdownTitle_8() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___DropdownTitle_8)); }
	inline String_t* get_DropdownTitle_8() const { return ___DropdownTitle_8; }
	inline String_t** get_address_of_DropdownTitle_8() { return &___DropdownTitle_8; }
	inline void set_DropdownTitle_8(String_t* value)
	{
		___DropdownTitle_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DropdownTitle_8), (void*)value);
	}

	inline static int32_t get_offset_of_SearchInFolders_9() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___SearchInFolders_9)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_SearchInFolders_9() const { return ___SearchInFolders_9; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_SearchInFolders_9() { return &___SearchInFolders_9; }
	inline void set_SearchInFolders_9(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___SearchInFolders_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SearchInFolders_9), (void*)value);
	}

	inline static int32_t get_offset_of_Filter_10() { return static_cast<int32_t>(offsetof(AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096, ___Filter_10)); }
	inline String_t* get_Filter_10() const { return ___Filter_10; }
	inline String_t** get_address_of_Filter_10() { return &___Filter_10; }
	inline void set_Filter_10(String_t* value)
	{
		___Filter_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Filter_10), (void*)value);
	}
};


// Sirenix.OdinInspector.AssetsOnlyAttribute
struct  AssetsOnlyAttribute_t4B998F8AD66F2A00BEEB3E219675169C703792A1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.ChildGameObjectsOnlyAttribute
struct  ChildGameObjectsOnlyAttribute_t99ADCD6484122DF797B717FD12EDD9F5E1AC478A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.ChildGameObjectsOnlyAttribute::IncludeSelf
	bool ___IncludeSelf_0;

public:
	inline static int32_t get_offset_of_IncludeSelf_0() { return static_cast<int32_t>(offsetof(ChildGameObjectsOnlyAttribute_t99ADCD6484122DF797B717FD12EDD9F5E1AC478A, ___IncludeSelf_0)); }
	inline bool get_IncludeSelf_0() const { return ___IncludeSelf_0; }
	inline bool* get_address_of_IncludeSelf_0() { return &___IncludeSelf_0; }
	inline void set_IncludeSelf_0(bool value)
	{
		___IncludeSelf_0 = value;
	}
};


// Sirenix.OdinInspector.ColorPaletteAttribute
struct  ColorPaletteAttribute_t4A81C5208D921F284CFB229A7725EC96DFD8E5B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.ColorPaletteAttribute::PaletteName
	String_t* ___PaletteName_0;
	// System.Boolean Sirenix.OdinInspector.ColorPaletteAttribute::ShowAlpha
	bool ___ShowAlpha_1;

public:
	inline static int32_t get_offset_of_PaletteName_0() { return static_cast<int32_t>(offsetof(ColorPaletteAttribute_t4A81C5208D921F284CFB229A7725EC96DFD8E5B5, ___PaletteName_0)); }
	inline String_t* get_PaletteName_0() const { return ___PaletteName_0; }
	inline String_t** get_address_of_PaletteName_0() { return &___PaletteName_0; }
	inline void set_PaletteName_0(String_t* value)
	{
		___PaletteName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PaletteName_0), (void*)value);
	}

	inline static int32_t get_offset_of_ShowAlpha_1() { return static_cast<int32_t>(offsetof(ColorPaletteAttribute_t4A81C5208D921F284CFB229A7725EC96DFD8E5B5, ___ShowAlpha_1)); }
	inline bool get_ShowAlpha_1() const { return ___ShowAlpha_1; }
	inline bool* get_address_of_ShowAlpha_1() { return &___ShowAlpha_1; }
	inline void set_ShowAlpha_1(bool value)
	{
		___ShowAlpha_1 = value;
	}
};


// Sirenix.OdinInspector.CustomContextMenuAttribute
struct  CustomContextMenuAttribute_t70FD6594A1970EA3D164B840161CBC3E8E600EB7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.CustomContextMenuAttribute::MenuItem
	String_t* ___MenuItem_0;
	// System.String Sirenix.OdinInspector.CustomContextMenuAttribute::MethodName
	String_t* ___MethodName_1;

public:
	inline static int32_t get_offset_of_MenuItem_0() { return static_cast<int32_t>(offsetof(CustomContextMenuAttribute_t70FD6594A1970EA3D164B840161CBC3E8E600EB7, ___MenuItem_0)); }
	inline String_t* get_MenuItem_0() const { return ___MenuItem_0; }
	inline String_t** get_address_of_MenuItem_0() { return &___MenuItem_0; }
	inline void set_MenuItem_0(String_t* value)
	{
		___MenuItem_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MenuItem_0), (void*)value);
	}

	inline static int32_t get_offset_of_MethodName_1() { return static_cast<int32_t>(offsetof(CustomContextMenuAttribute_t70FD6594A1970EA3D164B840161CBC3E8E600EB7, ___MethodName_1)); }
	inline String_t* get_MethodName_1() const { return ___MethodName_1; }
	inline String_t** get_address_of_MethodName_1() { return &___MethodName_1; }
	inline void set_MethodName_1(String_t* value)
	{
		___MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MethodName_1), (void*)value);
	}
};


// Sirenix.OdinInspector.CustomValueDrawerAttribute
struct  CustomValueDrawerAttribute_tE49F17D7241B5B464D8456B163F8C56923917D60  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.CustomValueDrawerAttribute::MethodName
	String_t* ___MethodName_0;

public:
	inline static int32_t get_offset_of_MethodName_0() { return static_cast<int32_t>(offsetof(CustomValueDrawerAttribute_tE49F17D7241B5B464D8456B163F8C56923917D60, ___MethodName_0)); }
	inline String_t* get_MethodName_0() const { return ___MethodName_0; }
	inline String_t** get_address_of_MethodName_0() { return &___MethodName_0; }
	inline void set_MethodName_0(String_t* value)
	{
		___MethodName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MethodName_0), (void*)value);
	}
};


// Sirenix.OdinInspector.DelayedPropertyAttribute
struct  DelayedPropertyAttribute_t3B9B78F65E2D6939F7B61C7410ADFF395DCA7C89  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DisableContextMenuAttribute
struct  DisableContextMenuAttribute_t488F1D54F6C91D1C17BC2365B993D84CD19C9A86  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.DisableContextMenuAttribute::DisableForMember
	bool ___DisableForMember_0;
	// System.Boolean Sirenix.OdinInspector.DisableContextMenuAttribute::DisableForCollectionElements
	bool ___DisableForCollectionElements_1;

public:
	inline static int32_t get_offset_of_DisableForMember_0() { return static_cast<int32_t>(offsetof(DisableContextMenuAttribute_t488F1D54F6C91D1C17BC2365B993D84CD19C9A86, ___DisableForMember_0)); }
	inline bool get_DisableForMember_0() const { return ___DisableForMember_0; }
	inline bool* get_address_of_DisableForMember_0() { return &___DisableForMember_0; }
	inline void set_DisableForMember_0(bool value)
	{
		___DisableForMember_0 = value;
	}

	inline static int32_t get_offset_of_DisableForCollectionElements_1() { return static_cast<int32_t>(offsetof(DisableContextMenuAttribute_t488F1D54F6C91D1C17BC2365B993D84CD19C9A86, ___DisableForCollectionElements_1)); }
	inline bool get_DisableForCollectionElements_1() const { return ___DisableForCollectionElements_1; }
	inline bool* get_address_of_DisableForCollectionElements_1() { return &___DisableForCollectionElements_1; }
	inline void set_DisableForCollectionElements_1(bool value)
	{
		___DisableForCollectionElements_1 = value;
	}
};


// Sirenix.OdinInspector.DisableIfAttribute
struct  DisableIfAttribute_t5699C1C9B82D9CE13598B7757457BB439454FA27  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.DisableIfAttribute::MemberName
	String_t* ___MemberName_0;
	// System.Object Sirenix.OdinInspector.DisableIfAttribute::Value
	RuntimeObject * ___Value_1;

public:
	inline static int32_t get_offset_of_MemberName_0() { return static_cast<int32_t>(offsetof(DisableIfAttribute_t5699C1C9B82D9CE13598B7757457BB439454FA27, ___MemberName_0)); }
	inline String_t* get_MemberName_0() const { return ___MemberName_0; }
	inline String_t** get_address_of_MemberName_0() { return &___MemberName_0; }
	inline void set_MemberName_0(String_t* value)
	{
		___MemberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(DisableIfAttribute_t5699C1C9B82D9CE13598B7757457BB439454FA27, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}
};


// Sirenix.OdinInspector.DisableInEditorModeAttribute
struct  DisableInEditorModeAttribute_t97721B0DDF6E7AACEE6E726D671175D580E39ACB  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DisableInInlineEditorsAttribute
struct  DisableInInlineEditorsAttribute_tBD42DA94EF0C7EF5E8CBFCF9F7BF6EBA4BDDA0B7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DisableInNonPrefabsAttribute
struct  DisableInNonPrefabsAttribute_t4E2DCCE8E14E9DB3F1875BA677CBFB5FBCA3B5B1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DisableInPlayModeAttribute
struct  DisableInPlayModeAttribute_tF2DB70F76C4B9EEB1D6C22CA518534792D7D31F5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DisableInPrefabAssetsAttribute
struct  DisableInPrefabAssetsAttribute_t9D1E468944E87537B18601EAD10CB765FE0A24C3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DisableInPrefabInstancesAttribute
struct  DisableInPrefabInstancesAttribute_tFD597BDAF438F3CBB62D7ABE8275628F08D2E22A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DisableInPrefabsAttribute
struct  DisableInPrefabsAttribute_t9BFDE824C44F0D079670C41E0E1D93E159A5E9CA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DisplayAsStringAttribute
struct  DisplayAsStringAttribute_tDF4C917E4B96691E50E0BF8D6341C1FC1588D1A0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.DisplayAsStringAttribute::Overflow
	bool ___Overflow_0;

public:
	inline static int32_t get_offset_of_Overflow_0() { return static_cast<int32_t>(offsetof(DisplayAsStringAttribute_tDF4C917E4B96691E50E0BF8D6341C1FC1588D1A0, ___Overflow_0)); }
	inline bool get_Overflow_0() const { return ___Overflow_0; }
	inline bool* get_address_of_Overflow_0() { return &___Overflow_0; }
	inline void set_Overflow_0(bool value)
	{
		___Overflow_0 = value;
	}
};


// Sirenix.OdinInspector.DoNotDrawAsReferenceAttribute
struct  DoNotDrawAsReferenceAttribute_t1733822E81BCF25AD73D17BDA6728D0C47992C7D  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DontApplyToListElementsAttribute
struct  DontApplyToListElementsAttribute_tFD5D5B532B6272DE43CA24544629F6FB415B311C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.DrawWithUnityAttribute
struct  DrawWithUnityAttribute_t1AAE718BB4943F79D46CD517AC31A2E48959FC1E  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.EnableForPrefabOnlyAttribute
struct  EnableForPrefabOnlyAttribute_tB522C6AEAEC726EA14C18F4385448BF608A3DA79  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.EnableGUIAttribute
struct  EnableGUIAttribute_tAC87F02189063A1B338EDDBC33318272F5C3D3C7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.EnableIfAttribute
struct  EnableIfAttribute_t0C1D534F8FB1F9C9B0732523502B76572C10727F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.EnableIfAttribute::MemberName
	String_t* ___MemberName_0;
	// System.Object Sirenix.OdinInspector.EnableIfAttribute::Value
	RuntimeObject * ___Value_1;

public:
	inline static int32_t get_offset_of_MemberName_0() { return static_cast<int32_t>(offsetof(EnableIfAttribute_t0C1D534F8FB1F9C9B0732523502B76572C10727F, ___MemberName_0)); }
	inline String_t* get_MemberName_0() const { return ___MemberName_0; }
	inline String_t** get_address_of_MemberName_0() { return &___MemberName_0; }
	inline void set_MemberName_0(String_t* value)
	{
		___MemberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(EnableIfAttribute_t0C1D534F8FB1F9C9B0732523502B76572C10727F, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}
};


// Sirenix.OdinInspector.EnumPagingAttribute
struct  EnumPagingAttribute_tADC2A440F2917740F298F8C04750969B255028A5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.EnumToggleButtonsAttribute
struct  EnumToggleButtonsAttribute_tD54F6B17BE4A797851707A83930C5BB1EEF66189  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.FilePathAttribute
struct  FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.FilePathAttribute::AbsolutePath
	bool ___AbsolutePath_0;
	// System.String Sirenix.OdinInspector.FilePathAttribute::Extensions
	String_t* ___Extensions_1;
	// System.String Sirenix.OdinInspector.FilePathAttribute::ParentFolder
	String_t* ___ParentFolder_2;
	// System.Boolean Sirenix.OdinInspector.FilePathAttribute::RequireValidPath
	bool ___RequireValidPath_3;
	// System.Boolean Sirenix.OdinInspector.FilePathAttribute::RequireExistingPath
	bool ___RequireExistingPath_4;
	// System.Boolean Sirenix.OdinInspector.FilePathAttribute::UseBackslashes
	bool ___UseBackslashes_5;
	// System.Boolean Sirenix.OdinInspector.FilePathAttribute::<ReadOnly>k__BackingField
	bool ___U3CReadOnlyU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_AbsolutePath_0() { return static_cast<int32_t>(offsetof(FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B, ___AbsolutePath_0)); }
	inline bool get_AbsolutePath_0() const { return ___AbsolutePath_0; }
	inline bool* get_address_of_AbsolutePath_0() { return &___AbsolutePath_0; }
	inline void set_AbsolutePath_0(bool value)
	{
		___AbsolutePath_0 = value;
	}

	inline static int32_t get_offset_of_Extensions_1() { return static_cast<int32_t>(offsetof(FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B, ___Extensions_1)); }
	inline String_t* get_Extensions_1() const { return ___Extensions_1; }
	inline String_t** get_address_of_Extensions_1() { return &___Extensions_1; }
	inline void set_Extensions_1(String_t* value)
	{
		___Extensions_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Extensions_1), (void*)value);
	}

	inline static int32_t get_offset_of_ParentFolder_2() { return static_cast<int32_t>(offsetof(FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B, ___ParentFolder_2)); }
	inline String_t* get_ParentFolder_2() const { return ___ParentFolder_2; }
	inline String_t** get_address_of_ParentFolder_2() { return &___ParentFolder_2; }
	inline void set_ParentFolder_2(String_t* value)
	{
		___ParentFolder_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParentFolder_2), (void*)value);
	}

	inline static int32_t get_offset_of_RequireValidPath_3() { return static_cast<int32_t>(offsetof(FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B, ___RequireValidPath_3)); }
	inline bool get_RequireValidPath_3() const { return ___RequireValidPath_3; }
	inline bool* get_address_of_RequireValidPath_3() { return &___RequireValidPath_3; }
	inline void set_RequireValidPath_3(bool value)
	{
		___RequireValidPath_3 = value;
	}

	inline static int32_t get_offset_of_RequireExistingPath_4() { return static_cast<int32_t>(offsetof(FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B, ___RequireExistingPath_4)); }
	inline bool get_RequireExistingPath_4() const { return ___RequireExistingPath_4; }
	inline bool* get_address_of_RequireExistingPath_4() { return &___RequireExistingPath_4; }
	inline void set_RequireExistingPath_4(bool value)
	{
		___RequireExistingPath_4 = value;
	}

	inline static int32_t get_offset_of_UseBackslashes_5() { return static_cast<int32_t>(offsetof(FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B, ___UseBackslashes_5)); }
	inline bool get_UseBackslashes_5() const { return ___UseBackslashes_5; }
	inline bool* get_address_of_UseBackslashes_5() { return &___UseBackslashes_5; }
	inline void set_UseBackslashes_5(bool value)
	{
		___UseBackslashes_5 = value;
	}

	inline static int32_t get_offset_of_U3CReadOnlyU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B, ___U3CReadOnlyU3Ek__BackingField_6)); }
	inline bool get_U3CReadOnlyU3Ek__BackingField_6() const { return ___U3CReadOnlyU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CReadOnlyU3Ek__BackingField_6() { return &___U3CReadOnlyU3Ek__BackingField_6; }
	inline void set_U3CReadOnlyU3Ek__BackingField_6(bool value)
	{
		___U3CReadOnlyU3Ek__BackingField_6 = value;
	}
};


// Sirenix.OdinInspector.FolderPathAttribute
struct  FolderPathAttribute_t2B3B21E242BF56572EA687BEA45B26107C1F41D0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.FolderPathAttribute::AbsolutePath
	bool ___AbsolutePath_0;
	// System.String Sirenix.OdinInspector.FolderPathAttribute::ParentFolder
	String_t* ___ParentFolder_1;
	// System.Boolean Sirenix.OdinInspector.FolderPathAttribute::RequireValidPath
	bool ___RequireValidPath_2;
	// System.Boolean Sirenix.OdinInspector.FolderPathAttribute::RequireExistingPath
	bool ___RequireExistingPath_3;
	// System.Boolean Sirenix.OdinInspector.FolderPathAttribute::UseBackslashes
	bool ___UseBackslashes_4;

public:
	inline static int32_t get_offset_of_AbsolutePath_0() { return static_cast<int32_t>(offsetof(FolderPathAttribute_t2B3B21E242BF56572EA687BEA45B26107C1F41D0, ___AbsolutePath_0)); }
	inline bool get_AbsolutePath_0() const { return ___AbsolutePath_0; }
	inline bool* get_address_of_AbsolutePath_0() { return &___AbsolutePath_0; }
	inline void set_AbsolutePath_0(bool value)
	{
		___AbsolutePath_0 = value;
	}

	inline static int32_t get_offset_of_ParentFolder_1() { return static_cast<int32_t>(offsetof(FolderPathAttribute_t2B3B21E242BF56572EA687BEA45B26107C1F41D0, ___ParentFolder_1)); }
	inline String_t* get_ParentFolder_1() const { return ___ParentFolder_1; }
	inline String_t** get_address_of_ParentFolder_1() { return &___ParentFolder_1; }
	inline void set_ParentFolder_1(String_t* value)
	{
		___ParentFolder_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ParentFolder_1), (void*)value);
	}

	inline static int32_t get_offset_of_RequireValidPath_2() { return static_cast<int32_t>(offsetof(FolderPathAttribute_t2B3B21E242BF56572EA687BEA45B26107C1F41D0, ___RequireValidPath_2)); }
	inline bool get_RequireValidPath_2() const { return ___RequireValidPath_2; }
	inline bool* get_address_of_RequireValidPath_2() { return &___RequireValidPath_2; }
	inline void set_RequireValidPath_2(bool value)
	{
		___RequireValidPath_2 = value;
	}

	inline static int32_t get_offset_of_RequireExistingPath_3() { return static_cast<int32_t>(offsetof(FolderPathAttribute_t2B3B21E242BF56572EA687BEA45B26107C1F41D0, ___RequireExistingPath_3)); }
	inline bool get_RequireExistingPath_3() const { return ___RequireExistingPath_3; }
	inline bool* get_address_of_RequireExistingPath_3() { return &___RequireExistingPath_3; }
	inline void set_RequireExistingPath_3(bool value)
	{
		___RequireExistingPath_3 = value;
	}

	inline static int32_t get_offset_of_UseBackslashes_4() { return static_cast<int32_t>(offsetof(FolderPathAttribute_t2B3B21E242BF56572EA687BEA45B26107C1F41D0, ___UseBackslashes_4)); }
	inline bool get_UseBackslashes_4() const { return ___UseBackslashes_4; }
	inline bool* get_address_of_UseBackslashes_4() { return &___UseBackslashes_4; }
	inline void set_UseBackslashes_4(bool value)
	{
		___UseBackslashes_4 = value;
	}
};


// Sirenix.OdinInspector.HideDuplicateReferenceBoxAttribute
struct  HideDuplicateReferenceBoxAttribute_tB65A17F36ACD251F29188E445E76EDD648D12589  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideIfAttribute
struct  HideIfAttribute_t2BB8103DD9C18BF0806E5D5DEE78F4001E818774  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.HideIfAttribute::MemberName
	String_t* ___MemberName_0;
	// System.Object Sirenix.OdinInspector.HideIfAttribute::Value
	RuntimeObject * ___Value_1;
	// System.Boolean Sirenix.OdinInspector.HideIfAttribute::Animate
	bool ___Animate_2;

public:
	inline static int32_t get_offset_of_MemberName_0() { return static_cast<int32_t>(offsetof(HideIfAttribute_t2BB8103DD9C18BF0806E5D5DEE78F4001E818774, ___MemberName_0)); }
	inline String_t* get_MemberName_0() const { return ___MemberName_0; }
	inline String_t** get_address_of_MemberName_0() { return &___MemberName_0; }
	inline void set_MemberName_0(String_t* value)
	{
		___MemberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(HideIfAttribute_t2BB8103DD9C18BF0806E5D5DEE78F4001E818774, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}

	inline static int32_t get_offset_of_Animate_2() { return static_cast<int32_t>(offsetof(HideIfAttribute_t2BB8103DD9C18BF0806E5D5DEE78F4001E818774, ___Animate_2)); }
	inline bool get_Animate_2() const { return ___Animate_2; }
	inline bool* get_address_of_Animate_2() { return &___Animate_2; }
	inline void set_Animate_2(bool value)
	{
		___Animate_2 = value;
	}
};


// Sirenix.OdinInspector.HideInEditorModeAttribute
struct  HideInEditorModeAttribute_t9F5756D45CE7426470CE4382C9E6818B31195722  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideInInlineEditorsAttribute
struct  HideInInlineEditorsAttribute_t45CDA705EF1C3919B45A516B1E342017FF12C3D3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideInNonPrefabsAttribute
struct  HideInNonPrefabsAttribute_tA040FA7BBF8C5B002CC32FF584DE1E2DAD42FDE1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideInPlayModeAttribute
struct  HideInPlayModeAttribute_t9A0C32CA0CF0F2A43B9504C2EBB8697C3567BEA7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideInPrefabAssetsAttribute
struct  HideInPrefabAssetsAttribute_t28859BF475E9B798F4B69479F3E7402D52272317  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideInPrefabInstancesAttribute
struct  HideInPrefabInstancesAttribute_tF60A009AB5AFB1E0335EE88D40AE7C9D848BD150  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideInPrefabsAttribute
struct  HideInPrefabsAttribute_t610200AA7F661259BDA8F79DA6223D2B658DE5F4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideInTablesAttribute
struct  HideInTablesAttribute_t6EA180FD533AC515DF20B12230BF58971527B1EE  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideLabelAttribute
struct  HideLabelAttribute_tE49F93206248913152A2763A259CEABC8C634733  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideMonoScriptAttribute
struct  HideMonoScriptAttribute_t1D325E99CE0BA9AD28D82386996F75E6AA9C4EBA  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideNetworkBehaviourFieldsAttribute
struct  HideNetworkBehaviourFieldsAttribute_tBA402A4536647625FF68DB186BF03A781C042820  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.HideReferenceObjectPickerAttribute
struct  HideReferenceObjectPickerAttribute_tC9A271A405B334ECF2C6F7D4A536650ADD7274A2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.IncludeMyAttributesAttribute
struct  IncludeMyAttributesAttribute_t6943BFE4C9994BB53F22A86A586B5CE7EBDBF4BF  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.IndentAttribute
struct  IndentAttribute_tDD6597C05729531BA226F91C47E1B87B2A31AC8F  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Sirenix.OdinInspector.IndentAttribute::IndentLevel
	int32_t ___IndentLevel_0;

public:
	inline static int32_t get_offset_of_IndentLevel_0() { return static_cast<int32_t>(offsetof(IndentAttribute_tDD6597C05729531BA226F91C47E1B87B2A31AC8F, ___IndentLevel_0)); }
	inline int32_t get_IndentLevel_0() const { return ___IndentLevel_0; }
	inline int32_t* get_address_of_IndentLevel_0() { return &___IndentLevel_0; }
	inline void set_IndentLevel_0(int32_t value)
	{
		___IndentLevel_0 = value;
	}
};


// Sirenix.OdinInspector.InlineButtonAttribute
struct  InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.InlineButtonAttribute::<MemberMethod>k__BackingField
	String_t* ___U3CMemberMethodU3Ek__BackingField_0;
	// System.String Sirenix.OdinInspector.InlineButtonAttribute::<Label>k__BackingField
	String_t* ___U3CLabelU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CMemberMethodU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1, ___U3CMemberMethodU3Ek__BackingField_0)); }
	inline String_t* get_U3CMemberMethodU3Ek__BackingField_0() const { return ___U3CMemberMethodU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CMemberMethodU3Ek__BackingField_0() { return &___U3CMemberMethodU3Ek__BackingField_0; }
	inline void set_U3CMemberMethodU3Ek__BackingField_0(String_t* value)
	{
		___U3CMemberMethodU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CMemberMethodU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CLabelU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1, ___U3CLabelU3Ek__BackingField_1)); }
	inline String_t* get_U3CLabelU3Ek__BackingField_1() const { return ___U3CLabelU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CLabelU3Ek__BackingField_1() { return &___U3CLabelU3Ek__BackingField_1; }
	inline void set_U3CLabelU3Ek__BackingField_1(String_t* value)
	{
		___U3CLabelU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CLabelU3Ek__BackingField_1), (void*)value);
	}
};


// Sirenix.OdinInspector.InlinePropertyAttribute
struct  InlinePropertyAttribute_t458D3BEFAA7AA75DDC2FBA478D35858CA501EDBC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Sirenix.OdinInspector.InlinePropertyAttribute::LabelWidth
	int32_t ___LabelWidth_0;

public:
	inline static int32_t get_offset_of_LabelWidth_0() { return static_cast<int32_t>(offsetof(InlinePropertyAttribute_t458D3BEFAA7AA75DDC2FBA478D35858CA501EDBC, ___LabelWidth_0)); }
	inline int32_t get_LabelWidth_0() const { return ___LabelWidth_0; }
	inline int32_t* get_address_of_LabelWidth_0() { return &___LabelWidth_0; }
	inline void set_LabelWidth_0(int32_t value)
	{
		___LabelWidth_0 = value;
	}
};


// Sirenix.OdinInspector.LabelTextAttribute
struct  LabelTextAttribute_t814941A9EEF13DBD64BB1E8D2522157FCE6104F7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.LabelTextAttribute::Text
	String_t* ___Text_0;

public:
	inline static int32_t get_offset_of_Text_0() { return static_cast<int32_t>(offsetof(LabelTextAttribute_t814941A9EEF13DBD64BB1E8D2522157FCE6104F7, ___Text_0)); }
	inline String_t* get_Text_0() const { return ___Text_0; }
	inline String_t** get_address_of_Text_0() { return &___Text_0; }
	inline void set_Text_0(String_t* value)
	{
		___Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Text_0), (void*)value);
	}
};


// Sirenix.OdinInspector.LabelWidthAttribute
struct  LabelWidthAttribute_tDB275565D5A1DBC93FDAA47ABC1D1AC34AF769A4  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Single Sirenix.OdinInspector.LabelWidthAttribute::Width
	float ___Width_0;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(LabelWidthAttribute_tDB275565D5A1DBC93FDAA47ABC1D1AC34AF769A4, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}
};


// Sirenix.OdinInspector.ListDrawerSettingsAttribute
struct  ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::HideAddButton
	bool ___HideAddButton_0;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::HideRemoveButton
	bool ___HideRemoveButton_1;
	// System.String Sirenix.OdinInspector.ListDrawerSettingsAttribute::ListElementLabelName
	String_t* ___ListElementLabelName_2;
	// System.String Sirenix.OdinInspector.ListDrawerSettingsAttribute::CustomAddFunction
	String_t* ___CustomAddFunction_3;
	// System.String Sirenix.OdinInspector.ListDrawerSettingsAttribute::CustomRemoveIndexFunction
	String_t* ___CustomRemoveIndexFunction_4;
	// System.String Sirenix.OdinInspector.ListDrawerSettingsAttribute::CustomRemoveElementFunction
	String_t* ___CustomRemoveElementFunction_5;
	// System.String Sirenix.OdinInspector.ListDrawerSettingsAttribute::OnBeginListElementGUI
	String_t* ___OnBeginListElementGUI_6;
	// System.String Sirenix.OdinInspector.ListDrawerSettingsAttribute::OnEndListElementGUI
	String_t* ___OnEndListElementGUI_7;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::AlwaysAddDefaultValue
	bool ___AlwaysAddDefaultValue_8;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::AddCopiesLastElement
	bool ___AddCopiesLastElement_9;
	// System.String Sirenix.OdinInspector.ListDrawerSettingsAttribute::onTitleBarGUI
	String_t* ___onTitleBarGUI_10;
	// System.Int32 Sirenix.OdinInspector.ListDrawerSettingsAttribute::numberOfItemsPerPage
	int32_t ___numberOfItemsPerPage_11;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::paging
	bool ___paging_12;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::draggable
	bool ___draggable_13;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::isReadOnly
	bool ___isReadOnly_14;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::showItemCount
	bool ___showItemCount_15;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::pagingHasValue
	bool ___pagingHasValue_16;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::draggableHasValue
	bool ___draggableHasValue_17;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::isReadOnlyHasValue
	bool ___isReadOnlyHasValue_18;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::showItemCountHasValue
	bool ___showItemCountHasValue_19;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::expanded
	bool ___expanded_20;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::expandedHasValue
	bool ___expandedHasValue_21;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::numberOfItemsPerPageHasValue
	bool ___numberOfItemsPerPageHasValue_22;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::showIndexLabels
	bool ___showIndexLabels_23;
	// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::showIndexLabelsHasValue
	bool ___showIndexLabelsHasValue_24;

public:
	inline static int32_t get_offset_of_HideAddButton_0() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___HideAddButton_0)); }
	inline bool get_HideAddButton_0() const { return ___HideAddButton_0; }
	inline bool* get_address_of_HideAddButton_0() { return &___HideAddButton_0; }
	inline void set_HideAddButton_0(bool value)
	{
		___HideAddButton_0 = value;
	}

	inline static int32_t get_offset_of_HideRemoveButton_1() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___HideRemoveButton_1)); }
	inline bool get_HideRemoveButton_1() const { return ___HideRemoveButton_1; }
	inline bool* get_address_of_HideRemoveButton_1() { return &___HideRemoveButton_1; }
	inline void set_HideRemoveButton_1(bool value)
	{
		___HideRemoveButton_1 = value;
	}

	inline static int32_t get_offset_of_ListElementLabelName_2() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___ListElementLabelName_2)); }
	inline String_t* get_ListElementLabelName_2() const { return ___ListElementLabelName_2; }
	inline String_t** get_address_of_ListElementLabelName_2() { return &___ListElementLabelName_2; }
	inline void set_ListElementLabelName_2(String_t* value)
	{
		___ListElementLabelName_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ListElementLabelName_2), (void*)value);
	}

	inline static int32_t get_offset_of_CustomAddFunction_3() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___CustomAddFunction_3)); }
	inline String_t* get_CustomAddFunction_3() const { return ___CustomAddFunction_3; }
	inline String_t** get_address_of_CustomAddFunction_3() { return &___CustomAddFunction_3; }
	inline void set_CustomAddFunction_3(String_t* value)
	{
		___CustomAddFunction_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomAddFunction_3), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRemoveIndexFunction_4() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___CustomRemoveIndexFunction_4)); }
	inline String_t* get_CustomRemoveIndexFunction_4() const { return ___CustomRemoveIndexFunction_4; }
	inline String_t** get_address_of_CustomRemoveIndexFunction_4() { return &___CustomRemoveIndexFunction_4; }
	inline void set_CustomRemoveIndexFunction_4(String_t* value)
	{
		___CustomRemoveIndexFunction_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRemoveIndexFunction_4), (void*)value);
	}

	inline static int32_t get_offset_of_CustomRemoveElementFunction_5() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___CustomRemoveElementFunction_5)); }
	inline String_t* get_CustomRemoveElementFunction_5() const { return ___CustomRemoveElementFunction_5; }
	inline String_t** get_address_of_CustomRemoveElementFunction_5() { return &___CustomRemoveElementFunction_5; }
	inline void set_CustomRemoveElementFunction_5(String_t* value)
	{
		___CustomRemoveElementFunction_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomRemoveElementFunction_5), (void*)value);
	}

	inline static int32_t get_offset_of_OnBeginListElementGUI_6() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___OnBeginListElementGUI_6)); }
	inline String_t* get_OnBeginListElementGUI_6() const { return ___OnBeginListElementGUI_6; }
	inline String_t** get_address_of_OnBeginListElementGUI_6() { return &___OnBeginListElementGUI_6; }
	inline void set_OnBeginListElementGUI_6(String_t* value)
	{
		___OnBeginListElementGUI_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnBeginListElementGUI_6), (void*)value);
	}

	inline static int32_t get_offset_of_OnEndListElementGUI_7() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___OnEndListElementGUI_7)); }
	inline String_t* get_OnEndListElementGUI_7() const { return ___OnEndListElementGUI_7; }
	inline String_t** get_address_of_OnEndListElementGUI_7() { return &___OnEndListElementGUI_7; }
	inline void set_OnEndListElementGUI_7(String_t* value)
	{
		___OnEndListElementGUI_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnEndListElementGUI_7), (void*)value);
	}

	inline static int32_t get_offset_of_AlwaysAddDefaultValue_8() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___AlwaysAddDefaultValue_8)); }
	inline bool get_AlwaysAddDefaultValue_8() const { return ___AlwaysAddDefaultValue_8; }
	inline bool* get_address_of_AlwaysAddDefaultValue_8() { return &___AlwaysAddDefaultValue_8; }
	inline void set_AlwaysAddDefaultValue_8(bool value)
	{
		___AlwaysAddDefaultValue_8 = value;
	}

	inline static int32_t get_offset_of_AddCopiesLastElement_9() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___AddCopiesLastElement_9)); }
	inline bool get_AddCopiesLastElement_9() const { return ___AddCopiesLastElement_9; }
	inline bool* get_address_of_AddCopiesLastElement_9() { return &___AddCopiesLastElement_9; }
	inline void set_AddCopiesLastElement_9(bool value)
	{
		___AddCopiesLastElement_9 = value;
	}

	inline static int32_t get_offset_of_onTitleBarGUI_10() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___onTitleBarGUI_10)); }
	inline String_t* get_onTitleBarGUI_10() const { return ___onTitleBarGUI_10; }
	inline String_t** get_address_of_onTitleBarGUI_10() { return &___onTitleBarGUI_10; }
	inline void set_onTitleBarGUI_10(String_t* value)
	{
		___onTitleBarGUI_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onTitleBarGUI_10), (void*)value);
	}

	inline static int32_t get_offset_of_numberOfItemsPerPage_11() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___numberOfItemsPerPage_11)); }
	inline int32_t get_numberOfItemsPerPage_11() const { return ___numberOfItemsPerPage_11; }
	inline int32_t* get_address_of_numberOfItemsPerPage_11() { return &___numberOfItemsPerPage_11; }
	inline void set_numberOfItemsPerPage_11(int32_t value)
	{
		___numberOfItemsPerPage_11 = value;
	}

	inline static int32_t get_offset_of_paging_12() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___paging_12)); }
	inline bool get_paging_12() const { return ___paging_12; }
	inline bool* get_address_of_paging_12() { return &___paging_12; }
	inline void set_paging_12(bool value)
	{
		___paging_12 = value;
	}

	inline static int32_t get_offset_of_draggable_13() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___draggable_13)); }
	inline bool get_draggable_13() const { return ___draggable_13; }
	inline bool* get_address_of_draggable_13() { return &___draggable_13; }
	inline void set_draggable_13(bool value)
	{
		___draggable_13 = value;
	}

	inline static int32_t get_offset_of_isReadOnly_14() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___isReadOnly_14)); }
	inline bool get_isReadOnly_14() const { return ___isReadOnly_14; }
	inline bool* get_address_of_isReadOnly_14() { return &___isReadOnly_14; }
	inline void set_isReadOnly_14(bool value)
	{
		___isReadOnly_14 = value;
	}

	inline static int32_t get_offset_of_showItemCount_15() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___showItemCount_15)); }
	inline bool get_showItemCount_15() const { return ___showItemCount_15; }
	inline bool* get_address_of_showItemCount_15() { return &___showItemCount_15; }
	inline void set_showItemCount_15(bool value)
	{
		___showItemCount_15 = value;
	}

	inline static int32_t get_offset_of_pagingHasValue_16() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___pagingHasValue_16)); }
	inline bool get_pagingHasValue_16() const { return ___pagingHasValue_16; }
	inline bool* get_address_of_pagingHasValue_16() { return &___pagingHasValue_16; }
	inline void set_pagingHasValue_16(bool value)
	{
		___pagingHasValue_16 = value;
	}

	inline static int32_t get_offset_of_draggableHasValue_17() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___draggableHasValue_17)); }
	inline bool get_draggableHasValue_17() const { return ___draggableHasValue_17; }
	inline bool* get_address_of_draggableHasValue_17() { return &___draggableHasValue_17; }
	inline void set_draggableHasValue_17(bool value)
	{
		___draggableHasValue_17 = value;
	}

	inline static int32_t get_offset_of_isReadOnlyHasValue_18() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___isReadOnlyHasValue_18)); }
	inline bool get_isReadOnlyHasValue_18() const { return ___isReadOnlyHasValue_18; }
	inline bool* get_address_of_isReadOnlyHasValue_18() { return &___isReadOnlyHasValue_18; }
	inline void set_isReadOnlyHasValue_18(bool value)
	{
		___isReadOnlyHasValue_18 = value;
	}

	inline static int32_t get_offset_of_showItemCountHasValue_19() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___showItemCountHasValue_19)); }
	inline bool get_showItemCountHasValue_19() const { return ___showItemCountHasValue_19; }
	inline bool* get_address_of_showItemCountHasValue_19() { return &___showItemCountHasValue_19; }
	inline void set_showItemCountHasValue_19(bool value)
	{
		___showItemCountHasValue_19 = value;
	}

	inline static int32_t get_offset_of_expanded_20() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___expanded_20)); }
	inline bool get_expanded_20() const { return ___expanded_20; }
	inline bool* get_address_of_expanded_20() { return &___expanded_20; }
	inline void set_expanded_20(bool value)
	{
		___expanded_20 = value;
	}

	inline static int32_t get_offset_of_expandedHasValue_21() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___expandedHasValue_21)); }
	inline bool get_expandedHasValue_21() const { return ___expandedHasValue_21; }
	inline bool* get_address_of_expandedHasValue_21() { return &___expandedHasValue_21; }
	inline void set_expandedHasValue_21(bool value)
	{
		___expandedHasValue_21 = value;
	}

	inline static int32_t get_offset_of_numberOfItemsPerPageHasValue_22() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___numberOfItemsPerPageHasValue_22)); }
	inline bool get_numberOfItemsPerPageHasValue_22() const { return ___numberOfItemsPerPageHasValue_22; }
	inline bool* get_address_of_numberOfItemsPerPageHasValue_22() { return &___numberOfItemsPerPageHasValue_22; }
	inline void set_numberOfItemsPerPageHasValue_22(bool value)
	{
		___numberOfItemsPerPageHasValue_22 = value;
	}

	inline static int32_t get_offset_of_showIndexLabels_23() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___showIndexLabels_23)); }
	inline bool get_showIndexLabels_23() const { return ___showIndexLabels_23; }
	inline bool* get_address_of_showIndexLabels_23() { return &___showIndexLabels_23; }
	inline void set_showIndexLabels_23(bool value)
	{
		___showIndexLabels_23 = value;
	}

	inline static int32_t get_offset_of_showIndexLabelsHasValue_24() { return static_cast<int32_t>(offsetof(ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060, ___showIndexLabelsHasValue_24)); }
	inline bool get_showIndexLabelsHasValue_24() const { return ___showIndexLabelsHasValue_24; }
	inline bool* get_address_of_showIndexLabelsHasValue_24() { return &___showIndexLabelsHasValue_24; }
	inline void set_showIndexLabelsHasValue_24(bool value)
	{
		___showIndexLabelsHasValue_24 = value;
	}
};


// Sirenix.OdinInspector.MaxValueAttribute
struct  MaxValueAttribute_tDE6F43F1FA837264D5FB445AE3FD90399D5C50A1  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Double Sirenix.OdinInspector.MaxValueAttribute::MaxValue
	double ___MaxValue_0;
	// System.String Sirenix.OdinInspector.MaxValueAttribute::Expression
	String_t* ___Expression_1;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(MaxValueAttribute_tDE6F43F1FA837264D5FB445AE3FD90399D5C50A1, ___MaxValue_0)); }
	inline double get_MaxValue_0() const { return ___MaxValue_0; }
	inline double* get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(double value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_Expression_1() { return static_cast<int32_t>(offsetof(MaxValueAttribute_tDE6F43F1FA837264D5FB445AE3FD90399D5C50A1, ___Expression_1)); }
	inline String_t* get_Expression_1() const { return ___Expression_1; }
	inline String_t** get_address_of_Expression_1() { return &___Expression_1; }
	inline void set_Expression_1(String_t* value)
	{
		___Expression_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expression_1), (void*)value);
	}
};


// Sirenix.OdinInspector.MinMaxSliderAttribute
struct  MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Single Sirenix.OdinInspector.MinMaxSliderAttribute::MinValue
	float ___MinValue_0;
	// System.Single Sirenix.OdinInspector.MinMaxSliderAttribute::MaxValue
	float ___MaxValue_1;
	// System.String Sirenix.OdinInspector.MinMaxSliderAttribute::MinMember
	String_t* ___MinMember_2;
	// System.String Sirenix.OdinInspector.MinMaxSliderAttribute::MaxMember
	String_t* ___MaxMember_3;
	// System.String Sirenix.OdinInspector.MinMaxSliderAttribute::MinMaxMember
	String_t* ___MinMaxMember_4;
	// System.Boolean Sirenix.OdinInspector.MinMaxSliderAttribute::ShowFields
	bool ___ShowFields_5;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7, ___MinValue_0)); }
	inline float get_MinValue_0() const { return ___MinValue_0; }
	inline float* get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(float value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7, ___MaxValue_1)); }
	inline float get_MaxValue_1() const { return ___MaxValue_1; }
	inline float* get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(float value)
	{
		___MaxValue_1 = value;
	}

	inline static int32_t get_offset_of_MinMember_2() { return static_cast<int32_t>(offsetof(MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7, ___MinMember_2)); }
	inline String_t* get_MinMember_2() const { return ___MinMember_2; }
	inline String_t** get_address_of_MinMember_2() { return &___MinMember_2; }
	inline void set_MinMember_2(String_t* value)
	{
		___MinMember_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinMember_2), (void*)value);
	}

	inline static int32_t get_offset_of_MaxMember_3() { return static_cast<int32_t>(offsetof(MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7, ___MaxMember_3)); }
	inline String_t* get_MaxMember_3() const { return ___MaxMember_3; }
	inline String_t** get_address_of_MaxMember_3() { return &___MaxMember_3; }
	inline void set_MaxMember_3(String_t* value)
	{
		___MaxMember_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxMember_3), (void*)value);
	}

	inline static int32_t get_offset_of_MinMaxMember_4() { return static_cast<int32_t>(offsetof(MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7, ___MinMaxMember_4)); }
	inline String_t* get_MinMaxMember_4() const { return ___MinMaxMember_4; }
	inline String_t** get_address_of_MinMaxMember_4() { return &___MinMaxMember_4; }
	inline void set_MinMaxMember_4(String_t* value)
	{
		___MinMaxMember_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinMaxMember_4), (void*)value);
	}

	inline static int32_t get_offset_of_ShowFields_5() { return static_cast<int32_t>(offsetof(MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7, ___ShowFields_5)); }
	inline bool get_ShowFields_5() const { return ___ShowFields_5; }
	inline bool* get_address_of_ShowFields_5() { return &___ShowFields_5; }
	inline void set_ShowFields_5(bool value)
	{
		___ShowFields_5 = value;
	}
};


// Sirenix.OdinInspector.MinValueAttribute
struct  MinValueAttribute_t796488D6DA2E5C0A2D3C9C9A491E55C30DE24E5A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Double Sirenix.OdinInspector.MinValueAttribute::MinValue
	double ___MinValue_0;
	// System.String Sirenix.OdinInspector.MinValueAttribute::Expression
	String_t* ___Expression_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(MinValueAttribute_t796488D6DA2E5C0A2D3C9C9A491E55C30DE24E5A, ___MinValue_0)); }
	inline double get_MinValue_0() const { return ___MinValue_0; }
	inline double* get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(double value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_Expression_1() { return static_cast<int32_t>(offsetof(MinValueAttribute_t796488D6DA2E5C0A2D3C9C9A491E55C30DE24E5A, ___Expression_1)); }
	inline String_t* get_Expression_1() const { return ___Expression_1; }
	inline String_t** get_address_of_Expression_1() { return &___Expression_1; }
	inline void set_Expression_1(String_t* value)
	{
		___Expression_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Expression_1), (void*)value);
	}
};


// Sirenix.OdinInspector.MultiLinePropertyAttribute
struct  MultiLinePropertyAttribute_t8E5072FB9813750CFF7E5BF3E5AF36248D49DA8A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Sirenix.OdinInspector.MultiLinePropertyAttribute::Lines
	int32_t ___Lines_0;

public:
	inline static int32_t get_offset_of_Lines_0() { return static_cast<int32_t>(offsetof(MultiLinePropertyAttribute_t8E5072FB9813750CFF7E5BF3E5AF36248D49DA8A, ___Lines_0)); }
	inline int32_t get_Lines_0() const { return ___Lines_0; }
	inline int32_t* get_address_of_Lines_0() { return &___Lines_0; }
	inline void set_Lines_0(int32_t value)
	{
		___Lines_0 = value;
	}
};


// Sirenix.OdinInspector.OdinRegisterAttributeAttribute
struct  OdinRegisterAttributeAttribute_t76DCC6FBC87190DF6CEA72E5A95972A0C277AA73  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Type Sirenix.OdinInspector.OdinRegisterAttributeAttribute::AttributeType
	Type_t * ___AttributeType_0;
	// System.String Sirenix.OdinInspector.OdinRegisterAttributeAttribute::Categories
	String_t* ___Categories_1;
	// System.String Sirenix.OdinInspector.OdinRegisterAttributeAttribute::Description
	String_t* ___Description_2;
	// System.String Sirenix.OdinInspector.OdinRegisterAttributeAttribute::DocumentationUrl
	String_t* ___DocumentationUrl_3;

public:
	inline static int32_t get_offset_of_AttributeType_0() { return static_cast<int32_t>(offsetof(OdinRegisterAttributeAttribute_t76DCC6FBC87190DF6CEA72E5A95972A0C277AA73, ___AttributeType_0)); }
	inline Type_t * get_AttributeType_0() const { return ___AttributeType_0; }
	inline Type_t ** get_address_of_AttributeType_0() { return &___AttributeType_0; }
	inline void set_AttributeType_0(Type_t * value)
	{
		___AttributeType_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AttributeType_0), (void*)value);
	}

	inline static int32_t get_offset_of_Categories_1() { return static_cast<int32_t>(offsetof(OdinRegisterAttributeAttribute_t76DCC6FBC87190DF6CEA72E5A95972A0C277AA73, ___Categories_1)); }
	inline String_t* get_Categories_1() const { return ___Categories_1; }
	inline String_t** get_address_of_Categories_1() { return &___Categories_1; }
	inline void set_Categories_1(String_t* value)
	{
		___Categories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Categories_1), (void*)value);
	}

	inline static int32_t get_offset_of_Description_2() { return static_cast<int32_t>(offsetof(OdinRegisterAttributeAttribute_t76DCC6FBC87190DF6CEA72E5A95972A0C277AA73, ___Description_2)); }
	inline String_t* get_Description_2() const { return ___Description_2; }
	inline String_t** get_address_of_Description_2() { return &___Description_2; }
	inline void set_Description_2(String_t* value)
	{
		___Description_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Description_2), (void*)value);
	}

	inline static int32_t get_offset_of_DocumentationUrl_3() { return static_cast<int32_t>(offsetof(OdinRegisterAttributeAttribute_t76DCC6FBC87190DF6CEA72E5A95972A0C277AA73, ___DocumentationUrl_3)); }
	inline String_t* get_DocumentationUrl_3() const { return ___DocumentationUrl_3; }
	inline String_t** get_address_of_DocumentationUrl_3() { return &___DocumentationUrl_3; }
	inline void set_DocumentationUrl_3(String_t* value)
	{
		___DocumentationUrl_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DocumentationUrl_3), (void*)value);
	}
};


// Sirenix.OdinInspector.OnValueChangedAttribute
struct  OnValueChangedAttribute_tCB399324DBFE5B539E58190EEFFF65DDAE54F53C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.OnValueChangedAttribute::MethodName
	String_t* ___MethodName_0;
	// System.Boolean Sirenix.OdinInspector.OnValueChangedAttribute::IncludeChildren
	bool ___IncludeChildren_1;

public:
	inline static int32_t get_offset_of_MethodName_0() { return static_cast<int32_t>(offsetof(OnValueChangedAttribute_tCB399324DBFE5B539E58190EEFFF65DDAE54F53C, ___MethodName_0)); }
	inline String_t* get_MethodName_0() const { return ___MethodName_0; }
	inline String_t** get_address_of_MethodName_0() { return &___MethodName_0; }
	inline void set_MethodName_0(String_t* value)
	{
		___MethodName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MethodName_0), (void*)value);
	}

	inline static int32_t get_offset_of_IncludeChildren_1() { return static_cast<int32_t>(offsetof(OnValueChangedAttribute_tCB399324DBFE5B539E58190EEFFF65DDAE54F53C, ___IncludeChildren_1)); }
	inline bool get_IncludeChildren_1() const { return ___IncludeChildren_1; }
	inline bool* get_address_of_IncludeChildren_1() { return &___IncludeChildren_1; }
	inline void set_IncludeChildren_1(bool value)
	{
		___IncludeChildren_1 = value;
	}
};


// Sirenix.OdinInspector.PropertyGroupAttribute
struct  PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.PropertyGroupAttribute::GroupID
	String_t* ___GroupID_0;
	// System.String Sirenix.OdinInspector.PropertyGroupAttribute::GroupName
	String_t* ___GroupName_1;
	// System.Int32 Sirenix.OdinInspector.PropertyGroupAttribute::Order
	int32_t ___Order_2;

public:
	inline static int32_t get_offset_of_GroupID_0() { return static_cast<int32_t>(offsetof(PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC, ___GroupID_0)); }
	inline String_t* get_GroupID_0() const { return ___GroupID_0; }
	inline String_t** get_address_of_GroupID_0() { return &___GroupID_0; }
	inline void set_GroupID_0(String_t* value)
	{
		___GroupID_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GroupID_0), (void*)value);
	}

	inline static int32_t get_offset_of_GroupName_1() { return static_cast<int32_t>(offsetof(PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC, ___GroupName_1)); }
	inline String_t* get_GroupName_1() const { return ___GroupName_1; }
	inline String_t** get_address_of_GroupName_1() { return &___GroupName_1; }
	inline void set_GroupName_1(String_t* value)
	{
		___GroupName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GroupName_1), (void*)value);
	}

	inline static int32_t get_offset_of_Order_2() { return static_cast<int32_t>(offsetof(PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC, ___Order_2)); }
	inline int32_t get_Order_2() const { return ___Order_2; }
	inline int32_t* get_address_of_Order_2() { return &___Order_2; }
	inline void set_Order_2(int32_t value)
	{
		___Order_2 = value;
	}
};


// Sirenix.OdinInspector.PropertyOrderAttribute
struct  PropertyOrderAttribute_t291D24D911501C22DFD4885D5D8A967D12D51BA6  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Sirenix.OdinInspector.PropertyOrderAttribute::Order
	int32_t ___Order_0;

public:
	inline static int32_t get_offset_of_Order_0() { return static_cast<int32_t>(offsetof(PropertyOrderAttribute_t291D24D911501C22DFD4885D5D8A967D12D51BA6, ___Order_0)); }
	inline int32_t get_Order_0() const { return ___Order_0; }
	inline int32_t* get_address_of_Order_0() { return &___Order_0; }
	inline void set_Order_0(int32_t value)
	{
		___Order_0 = value;
	}
};


// Sirenix.OdinInspector.PropertyRangeAttribute
struct  PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Double Sirenix.OdinInspector.PropertyRangeAttribute::Min
	double ___Min_0;
	// System.Double Sirenix.OdinInspector.PropertyRangeAttribute::Max
	double ___Max_1;
	// System.String Sirenix.OdinInspector.PropertyRangeAttribute::MinMember
	String_t* ___MinMember_2;
	// System.String Sirenix.OdinInspector.PropertyRangeAttribute::MaxMember
	String_t* ___MaxMember_3;

public:
	inline static int32_t get_offset_of_Min_0() { return static_cast<int32_t>(offsetof(PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155, ___Min_0)); }
	inline double get_Min_0() const { return ___Min_0; }
	inline double* get_address_of_Min_0() { return &___Min_0; }
	inline void set_Min_0(double value)
	{
		___Min_0 = value;
	}

	inline static int32_t get_offset_of_Max_1() { return static_cast<int32_t>(offsetof(PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155, ___Max_1)); }
	inline double get_Max_1() const { return ___Max_1; }
	inline double* get_address_of_Max_1() { return &___Max_1; }
	inline void set_Max_1(double value)
	{
		___Max_1 = value;
	}

	inline static int32_t get_offset_of_MinMember_2() { return static_cast<int32_t>(offsetof(PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155, ___MinMember_2)); }
	inline String_t* get_MinMember_2() const { return ___MinMember_2; }
	inline String_t** get_address_of_MinMember_2() { return &___MinMember_2; }
	inline void set_MinMember_2(String_t* value)
	{
		___MinMember_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinMember_2), (void*)value);
	}

	inline static int32_t get_offset_of_MaxMember_3() { return static_cast<int32_t>(offsetof(PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155, ___MaxMember_3)); }
	inline String_t* get_MaxMember_3() const { return ___MaxMember_3; }
	inline String_t** get_address_of_MaxMember_3() { return &___MaxMember_3; }
	inline void set_MaxMember_3(String_t* value)
	{
		___MaxMember_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxMember_3), (void*)value);
	}
};


// Sirenix.OdinInspector.PropertySpaceAttribute
struct  PropertySpaceAttribute_t1DFA91C2DDEC7BD33AD1C7B12E963C7BE3B7C0F2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Single Sirenix.OdinInspector.PropertySpaceAttribute::SpaceBefore
	float ___SpaceBefore_0;
	// System.Single Sirenix.OdinInspector.PropertySpaceAttribute::SpaceAfter
	float ___SpaceAfter_1;

public:
	inline static int32_t get_offset_of_SpaceBefore_0() { return static_cast<int32_t>(offsetof(PropertySpaceAttribute_t1DFA91C2DDEC7BD33AD1C7B12E963C7BE3B7C0F2, ___SpaceBefore_0)); }
	inline float get_SpaceBefore_0() const { return ___SpaceBefore_0; }
	inline float* get_address_of_SpaceBefore_0() { return &___SpaceBefore_0; }
	inline void set_SpaceBefore_0(float value)
	{
		___SpaceBefore_0 = value;
	}

	inline static int32_t get_offset_of_SpaceAfter_1() { return static_cast<int32_t>(offsetof(PropertySpaceAttribute_t1DFA91C2DDEC7BD33AD1C7B12E963C7BE3B7C0F2, ___SpaceAfter_1)); }
	inline float get_SpaceAfter_1() const { return ___SpaceAfter_1; }
	inline float* get_address_of_SpaceAfter_1() { return &___SpaceAfter_1; }
	inline void set_SpaceAfter_1(float value)
	{
		___SpaceAfter_1 = value;
	}
};


// Sirenix.OdinInspector.PropertyTooltipAttribute
struct  PropertyTooltipAttribute_t8047641A70C4A6B06E4F5B7301DAC380DA4EAF0A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.PropertyTooltipAttribute::Tooltip
	String_t* ___Tooltip_0;

public:
	inline static int32_t get_offset_of_Tooltip_0() { return static_cast<int32_t>(offsetof(PropertyTooltipAttribute_t8047641A70C4A6B06E4F5B7301DAC380DA4EAF0A, ___Tooltip_0)); }
	inline String_t* get_Tooltip_0() const { return ___Tooltip_0; }
	inline String_t** get_address_of_Tooltip_0() { return &___Tooltip_0; }
	inline void set_Tooltip_0(String_t* value)
	{
		___Tooltip_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Tooltip_0), (void*)value);
	}
};


// Sirenix.OdinInspector.ReadOnlyAttribute
struct  ReadOnlyAttribute_t6ABE89F7B844D5B9B60A7032AE72B2AB74CD6BD2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.SceneObjectsOnlyAttribute
struct  SceneObjectsOnlyAttribute_t5FD1F8BCE579E5C948EDEACC3D84B9A92A335097  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.ShowDrawerChainAttribute
struct  ShowDrawerChainAttribute_t7E24C9E0A157A9BB8C71B209FD224B15B8CAA7B5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.ShowForPrefabOnlyAttribute
struct  ShowForPrefabOnlyAttribute_t36E125BF7BCF070CE3A36E48733877A5DC88A7A3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.ShowIfAttribute
struct  ShowIfAttribute_tADCA17DE04CA086A84731CE92C1453A1014C1276  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.ShowIfAttribute::MemberName
	String_t* ___MemberName_0;
	// System.Boolean Sirenix.OdinInspector.ShowIfAttribute::Animate
	bool ___Animate_1;
	// System.Object Sirenix.OdinInspector.ShowIfAttribute::Value
	RuntimeObject * ___Value_2;

public:
	inline static int32_t get_offset_of_MemberName_0() { return static_cast<int32_t>(offsetof(ShowIfAttribute_tADCA17DE04CA086A84731CE92C1453A1014C1276, ___MemberName_0)); }
	inline String_t* get_MemberName_0() const { return ___MemberName_0; }
	inline String_t** get_address_of_MemberName_0() { return &___MemberName_0; }
	inline void set_MemberName_0(String_t* value)
	{
		___MemberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_0), (void*)value);
	}

	inline static int32_t get_offset_of_Animate_1() { return static_cast<int32_t>(offsetof(ShowIfAttribute_tADCA17DE04CA086A84731CE92C1453A1014C1276, ___Animate_1)); }
	inline bool get_Animate_1() const { return ___Animate_1; }
	inline bool* get_address_of_Animate_1() { return &___Animate_1; }
	inline void set_Animate_1(bool value)
	{
		___Animate_1 = value;
	}

	inline static int32_t get_offset_of_Value_2() { return static_cast<int32_t>(offsetof(ShowIfAttribute_tADCA17DE04CA086A84731CE92C1453A1014C1276, ___Value_2)); }
	inline RuntimeObject * get_Value_2() const { return ___Value_2; }
	inline RuntimeObject ** get_address_of_Value_2() { return &___Value_2; }
	inline void set_Value_2(RuntimeObject * value)
	{
		___Value_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_2), (void*)value);
	}
};


// Sirenix.OdinInspector.ShowInInlineEditorsAttribute
struct  ShowInInlineEditorsAttribute_t8A5EA75D74A3F5AAE0FD09BA0F819E2206E82CC7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.ShowInInspectorAttribute
struct  ShowInInspectorAttribute_t32120F244A3048FD51028573FF8746BEFCCCB188  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.ShowOdinSerializedPropertiesInInspectorAttribute
struct  ShowOdinSerializedPropertiesInInspectorAttribute_tEE14FEFB0FB4F61B77E5E2B9D4B49B0067DD8809  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.ShowPropertyResolverAttribute
struct  ShowPropertyResolverAttribute_t9D1FF8EB98635FD841940F990C325C7222E53A04  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.SuffixLabelAttribute
struct  SuffixLabelAttribute_t037E0B7A9267FE217458F360324CB81AC97D4216  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.SuffixLabelAttribute::Label
	String_t* ___Label_0;
	// System.Boolean Sirenix.OdinInspector.SuffixLabelAttribute::Overlay
	bool ___Overlay_1;

public:
	inline static int32_t get_offset_of_Label_0() { return static_cast<int32_t>(offsetof(SuffixLabelAttribute_t037E0B7A9267FE217458F360324CB81AC97D4216, ___Label_0)); }
	inline String_t* get_Label_0() const { return ___Label_0; }
	inline String_t** get_address_of_Label_0() { return &___Label_0; }
	inline void set_Label_0(String_t* value)
	{
		___Label_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Label_0), (void*)value);
	}

	inline static int32_t get_offset_of_Overlay_1() { return static_cast<int32_t>(offsetof(SuffixLabelAttribute_t037E0B7A9267FE217458F360324CB81AC97D4216, ___Overlay_1)); }
	inline bool get_Overlay_1() const { return ___Overlay_1; }
	inline bool* get_address_of_Overlay_1() { return &___Overlay_1; }
	inline void set_Overlay_1(bool value)
	{
		___Overlay_1 = value;
	}
};


// Sirenix.OdinInspector.SuppressInvalidAttributeErrorAttribute
struct  SuppressInvalidAttributeErrorAttribute_t2896A7EC0558B1368A3E4D151DB86DB05AF1A242  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.TableColumnWidthAttribute
struct  TableColumnWidthAttribute_t51389CA96D7DB70E1AB0C5510B828071CA031988  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Sirenix.OdinInspector.TableColumnWidthAttribute::Width
	int32_t ___Width_0;
	// System.Boolean Sirenix.OdinInspector.TableColumnWidthAttribute::Resizable
	bool ___Resizable_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(TableColumnWidthAttribute_t51389CA96D7DB70E1AB0C5510B828071CA031988, ___Width_0)); }
	inline int32_t get_Width_0() const { return ___Width_0; }
	inline int32_t* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(int32_t value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Resizable_1() { return static_cast<int32_t>(offsetof(TableColumnWidthAttribute_t51389CA96D7DB70E1AB0C5510B828071CA031988, ___Resizable_1)); }
	inline bool get_Resizable_1() const { return ___Resizable_1; }
	inline bool* get_address_of_Resizable_1() { return &___Resizable_1; }
	inline void set_Resizable_1(bool value)
	{
		___Resizable_1 = value;
	}
};


// Sirenix.OdinInspector.TableListAttribute
struct  TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Int32 Sirenix.OdinInspector.TableListAttribute::NumberOfItemsPerPage
	int32_t ___NumberOfItemsPerPage_0;
	// System.Boolean Sirenix.OdinInspector.TableListAttribute::IsReadOnly
	bool ___IsReadOnly_1;
	// System.Int32 Sirenix.OdinInspector.TableListAttribute::DefaultMinColumnWidth
	int32_t ___DefaultMinColumnWidth_2;
	// System.Boolean Sirenix.OdinInspector.TableListAttribute::ShowIndexLabels
	bool ___ShowIndexLabels_3;
	// System.Boolean Sirenix.OdinInspector.TableListAttribute::DrawScrollView
	bool ___DrawScrollView_4;
	// System.Int32 Sirenix.OdinInspector.TableListAttribute::MinScrollViewHeight
	int32_t ___MinScrollViewHeight_5;
	// System.Int32 Sirenix.OdinInspector.TableListAttribute::MaxScrollViewHeight
	int32_t ___MaxScrollViewHeight_6;
	// System.Boolean Sirenix.OdinInspector.TableListAttribute::AlwaysExpanded
	bool ___AlwaysExpanded_7;
	// System.Boolean Sirenix.OdinInspector.TableListAttribute::HideToolbar
	bool ___HideToolbar_8;
	// System.Int32 Sirenix.OdinInspector.TableListAttribute::CellPadding
	int32_t ___CellPadding_9;
	// System.Boolean Sirenix.OdinInspector.TableListAttribute::showPagingHasValue
	bool ___showPagingHasValue_10;
	// System.Boolean Sirenix.OdinInspector.TableListAttribute::showPaging
	bool ___showPaging_11;

public:
	inline static int32_t get_offset_of_NumberOfItemsPerPage_0() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___NumberOfItemsPerPage_0)); }
	inline int32_t get_NumberOfItemsPerPage_0() const { return ___NumberOfItemsPerPage_0; }
	inline int32_t* get_address_of_NumberOfItemsPerPage_0() { return &___NumberOfItemsPerPage_0; }
	inline void set_NumberOfItemsPerPage_0(int32_t value)
	{
		___NumberOfItemsPerPage_0 = value;
	}

	inline static int32_t get_offset_of_IsReadOnly_1() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___IsReadOnly_1)); }
	inline bool get_IsReadOnly_1() const { return ___IsReadOnly_1; }
	inline bool* get_address_of_IsReadOnly_1() { return &___IsReadOnly_1; }
	inline void set_IsReadOnly_1(bool value)
	{
		___IsReadOnly_1 = value;
	}

	inline static int32_t get_offset_of_DefaultMinColumnWidth_2() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___DefaultMinColumnWidth_2)); }
	inline int32_t get_DefaultMinColumnWidth_2() const { return ___DefaultMinColumnWidth_2; }
	inline int32_t* get_address_of_DefaultMinColumnWidth_2() { return &___DefaultMinColumnWidth_2; }
	inline void set_DefaultMinColumnWidth_2(int32_t value)
	{
		___DefaultMinColumnWidth_2 = value;
	}

	inline static int32_t get_offset_of_ShowIndexLabels_3() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___ShowIndexLabels_3)); }
	inline bool get_ShowIndexLabels_3() const { return ___ShowIndexLabels_3; }
	inline bool* get_address_of_ShowIndexLabels_3() { return &___ShowIndexLabels_3; }
	inline void set_ShowIndexLabels_3(bool value)
	{
		___ShowIndexLabels_3 = value;
	}

	inline static int32_t get_offset_of_DrawScrollView_4() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___DrawScrollView_4)); }
	inline bool get_DrawScrollView_4() const { return ___DrawScrollView_4; }
	inline bool* get_address_of_DrawScrollView_4() { return &___DrawScrollView_4; }
	inline void set_DrawScrollView_4(bool value)
	{
		___DrawScrollView_4 = value;
	}

	inline static int32_t get_offset_of_MinScrollViewHeight_5() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___MinScrollViewHeight_5)); }
	inline int32_t get_MinScrollViewHeight_5() const { return ___MinScrollViewHeight_5; }
	inline int32_t* get_address_of_MinScrollViewHeight_5() { return &___MinScrollViewHeight_5; }
	inline void set_MinScrollViewHeight_5(int32_t value)
	{
		___MinScrollViewHeight_5 = value;
	}

	inline static int32_t get_offset_of_MaxScrollViewHeight_6() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___MaxScrollViewHeight_6)); }
	inline int32_t get_MaxScrollViewHeight_6() const { return ___MaxScrollViewHeight_6; }
	inline int32_t* get_address_of_MaxScrollViewHeight_6() { return &___MaxScrollViewHeight_6; }
	inline void set_MaxScrollViewHeight_6(int32_t value)
	{
		___MaxScrollViewHeight_6 = value;
	}

	inline static int32_t get_offset_of_AlwaysExpanded_7() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___AlwaysExpanded_7)); }
	inline bool get_AlwaysExpanded_7() const { return ___AlwaysExpanded_7; }
	inline bool* get_address_of_AlwaysExpanded_7() { return &___AlwaysExpanded_7; }
	inline void set_AlwaysExpanded_7(bool value)
	{
		___AlwaysExpanded_7 = value;
	}

	inline static int32_t get_offset_of_HideToolbar_8() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___HideToolbar_8)); }
	inline bool get_HideToolbar_8() const { return ___HideToolbar_8; }
	inline bool* get_address_of_HideToolbar_8() { return &___HideToolbar_8; }
	inline void set_HideToolbar_8(bool value)
	{
		___HideToolbar_8 = value;
	}

	inline static int32_t get_offset_of_CellPadding_9() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___CellPadding_9)); }
	inline int32_t get_CellPadding_9() const { return ___CellPadding_9; }
	inline int32_t* get_address_of_CellPadding_9() { return &___CellPadding_9; }
	inline void set_CellPadding_9(int32_t value)
	{
		___CellPadding_9 = value;
	}

	inline static int32_t get_offset_of_showPagingHasValue_10() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___showPagingHasValue_10)); }
	inline bool get_showPagingHasValue_10() const { return ___showPagingHasValue_10; }
	inline bool* get_address_of_showPagingHasValue_10() { return &___showPagingHasValue_10; }
	inline void set_showPagingHasValue_10(bool value)
	{
		___showPagingHasValue_10 = value;
	}

	inline static int32_t get_offset_of_showPaging_11() { return static_cast<int32_t>(offsetof(TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A, ___showPaging_11)); }
	inline bool get_showPaging_11() const { return ___showPaging_11; }
	inline bool* get_address_of_showPaging_11() { return &___showPaging_11; }
	inline void set_showPaging_11(bool value)
	{
		___showPaging_11 = value;
	}
};


// Sirenix.OdinInspector.TableMatrixAttribute
struct  TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.TableMatrixAttribute::IsReadOnly
	bool ___IsReadOnly_0;
	// System.Boolean Sirenix.OdinInspector.TableMatrixAttribute::ResizableColumns
	bool ___ResizableColumns_1;
	// System.String Sirenix.OdinInspector.TableMatrixAttribute::VerticalTitle
	String_t* ___VerticalTitle_2;
	// System.String Sirenix.OdinInspector.TableMatrixAttribute::HorizontalTitle
	String_t* ___HorizontalTitle_3;
	// System.String Sirenix.OdinInspector.TableMatrixAttribute::DrawElementMethod
	String_t* ___DrawElementMethod_4;
	// System.Int32 Sirenix.OdinInspector.TableMatrixAttribute::RowHeight
	int32_t ___RowHeight_5;
	// System.Boolean Sirenix.OdinInspector.TableMatrixAttribute::SquareCells
	bool ___SquareCells_6;
	// System.Boolean Sirenix.OdinInspector.TableMatrixAttribute::HideColumnIndices
	bool ___HideColumnIndices_7;
	// System.Boolean Sirenix.OdinInspector.TableMatrixAttribute::HideRowIndices
	bool ___HideRowIndices_8;
	// System.Boolean Sirenix.OdinInspector.TableMatrixAttribute::RespectIndentLevel
	bool ___RespectIndentLevel_9;
	// System.Boolean Sirenix.OdinInspector.TableMatrixAttribute::Transpose
	bool ___Transpose_10;

public:
	inline static int32_t get_offset_of_IsReadOnly_0() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___IsReadOnly_0)); }
	inline bool get_IsReadOnly_0() const { return ___IsReadOnly_0; }
	inline bool* get_address_of_IsReadOnly_0() { return &___IsReadOnly_0; }
	inline void set_IsReadOnly_0(bool value)
	{
		___IsReadOnly_0 = value;
	}

	inline static int32_t get_offset_of_ResizableColumns_1() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___ResizableColumns_1)); }
	inline bool get_ResizableColumns_1() const { return ___ResizableColumns_1; }
	inline bool* get_address_of_ResizableColumns_1() { return &___ResizableColumns_1; }
	inline void set_ResizableColumns_1(bool value)
	{
		___ResizableColumns_1 = value;
	}

	inline static int32_t get_offset_of_VerticalTitle_2() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___VerticalTitle_2)); }
	inline String_t* get_VerticalTitle_2() const { return ___VerticalTitle_2; }
	inline String_t** get_address_of_VerticalTitle_2() { return &___VerticalTitle_2; }
	inline void set_VerticalTitle_2(String_t* value)
	{
		___VerticalTitle_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VerticalTitle_2), (void*)value);
	}

	inline static int32_t get_offset_of_HorizontalTitle_3() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___HorizontalTitle_3)); }
	inline String_t* get_HorizontalTitle_3() const { return ___HorizontalTitle_3; }
	inline String_t** get_address_of_HorizontalTitle_3() { return &___HorizontalTitle_3; }
	inline void set_HorizontalTitle_3(String_t* value)
	{
		___HorizontalTitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HorizontalTitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_DrawElementMethod_4() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___DrawElementMethod_4)); }
	inline String_t* get_DrawElementMethod_4() const { return ___DrawElementMethod_4; }
	inline String_t** get_address_of_DrawElementMethod_4() { return &___DrawElementMethod_4; }
	inline void set_DrawElementMethod_4(String_t* value)
	{
		___DrawElementMethod_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DrawElementMethod_4), (void*)value);
	}

	inline static int32_t get_offset_of_RowHeight_5() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___RowHeight_5)); }
	inline int32_t get_RowHeight_5() const { return ___RowHeight_5; }
	inline int32_t* get_address_of_RowHeight_5() { return &___RowHeight_5; }
	inline void set_RowHeight_5(int32_t value)
	{
		___RowHeight_5 = value;
	}

	inline static int32_t get_offset_of_SquareCells_6() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___SquareCells_6)); }
	inline bool get_SquareCells_6() const { return ___SquareCells_6; }
	inline bool* get_address_of_SquareCells_6() { return &___SquareCells_6; }
	inline void set_SquareCells_6(bool value)
	{
		___SquareCells_6 = value;
	}

	inline static int32_t get_offset_of_HideColumnIndices_7() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___HideColumnIndices_7)); }
	inline bool get_HideColumnIndices_7() const { return ___HideColumnIndices_7; }
	inline bool* get_address_of_HideColumnIndices_7() { return &___HideColumnIndices_7; }
	inline void set_HideColumnIndices_7(bool value)
	{
		___HideColumnIndices_7 = value;
	}

	inline static int32_t get_offset_of_HideRowIndices_8() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___HideRowIndices_8)); }
	inline bool get_HideRowIndices_8() const { return ___HideRowIndices_8; }
	inline bool* get_address_of_HideRowIndices_8() { return &___HideRowIndices_8; }
	inline void set_HideRowIndices_8(bool value)
	{
		___HideRowIndices_8 = value;
	}

	inline static int32_t get_offset_of_RespectIndentLevel_9() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___RespectIndentLevel_9)); }
	inline bool get_RespectIndentLevel_9() const { return ___RespectIndentLevel_9; }
	inline bool* get_address_of_RespectIndentLevel_9() { return &___RespectIndentLevel_9; }
	inline void set_RespectIndentLevel_9(bool value)
	{
		___RespectIndentLevel_9 = value;
	}

	inline static int32_t get_offset_of_Transpose_10() { return static_cast<int32_t>(offsetof(TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5, ___Transpose_10)); }
	inline bool get_Transpose_10() const { return ___Transpose_10; }
	inline bool* get_address_of_Transpose_10() { return &___Transpose_10; }
	inline void set_Transpose_10(bool value)
	{
		___Transpose_10 = value;
	}
};


// Sirenix.OdinInspector.ToggleAttribute
struct  ToggleAttribute_t966D64C017A35B7FB3D634C717543F42E7BF4FB5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.ToggleAttribute::ToggleMemberName
	String_t* ___ToggleMemberName_0;
	// System.Boolean Sirenix.OdinInspector.ToggleAttribute::CollapseOthersOnExpand
	bool ___CollapseOthersOnExpand_1;

public:
	inline static int32_t get_offset_of_ToggleMemberName_0() { return static_cast<int32_t>(offsetof(ToggleAttribute_t966D64C017A35B7FB3D634C717543F42E7BF4FB5, ___ToggleMemberName_0)); }
	inline String_t* get_ToggleMemberName_0() const { return ___ToggleMemberName_0; }
	inline String_t** get_address_of_ToggleMemberName_0() { return &___ToggleMemberName_0; }
	inline void set_ToggleMemberName_0(String_t* value)
	{
		___ToggleMemberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToggleMemberName_0), (void*)value);
	}

	inline static int32_t get_offset_of_CollapseOthersOnExpand_1() { return static_cast<int32_t>(offsetof(ToggleAttribute_t966D64C017A35B7FB3D634C717543F42E7BF4FB5, ___CollapseOthersOnExpand_1)); }
	inline bool get_CollapseOthersOnExpand_1() const { return ___CollapseOthersOnExpand_1; }
	inline bool* get_address_of_CollapseOthersOnExpand_1() { return &___CollapseOthersOnExpand_1; }
	inline void set_CollapseOthersOnExpand_1(bool value)
	{
		___CollapseOthersOnExpand_1 = value;
	}
};


// Sirenix.OdinInspector.ToggleLeftAttribute
struct  ToggleLeftAttribute_t5F93AAEF9F198EC45ED753969C321A60454EAAA0  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:

public:
};


// Sirenix.OdinInspector.TypeFilterAttribute
struct  TypeFilterAttribute_t0168A857763118E8C0800DC3132E730160608902  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.TypeFilterAttribute::MemberName
	String_t* ___MemberName_0;
	// System.String Sirenix.OdinInspector.TypeFilterAttribute::DropdownTitle
	String_t* ___DropdownTitle_1;

public:
	inline static int32_t get_offset_of_MemberName_0() { return static_cast<int32_t>(offsetof(TypeFilterAttribute_t0168A857763118E8C0800DC3132E730160608902, ___MemberName_0)); }
	inline String_t* get_MemberName_0() const { return ___MemberName_0; }
	inline String_t** get_address_of_MemberName_0() { return &___MemberName_0; }
	inline void set_MemberName_0(String_t* value)
	{
		___MemberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_0), (void*)value);
	}

	inline static int32_t get_offset_of_DropdownTitle_1() { return static_cast<int32_t>(offsetof(TypeFilterAttribute_t0168A857763118E8C0800DC3132E730160608902, ___DropdownTitle_1)); }
	inline String_t* get_DropdownTitle_1() const { return ___DropdownTitle_1; }
	inline String_t** get_address_of_DropdownTitle_1() { return &___DropdownTitle_1; }
	inline void set_DropdownTitle_1(String_t* value)
	{
		___DropdownTitle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DropdownTitle_1), (void*)value);
	}
};


// Sirenix.OdinInspector.TypeInfoBoxAttribute
struct  TypeInfoBoxAttribute_t327B0B2EFE3F33BF6897555A44D751B4FB1CB762  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.TypeInfoBoxAttribute::Message
	String_t* ___Message_0;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(TypeInfoBoxAttribute_t327B0B2EFE3F33BF6897555A44D751B4FB1CB762, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_0), (void*)value);
	}
};


// Sirenix.OdinInspector.ValueDropdownAttribute
struct  ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.ValueDropdownAttribute::MemberName
	String_t* ___MemberName_0;
	// System.Int32 Sirenix.OdinInspector.ValueDropdownAttribute::NumberOfItemsBeforeEnablingSearch
	int32_t ___NumberOfItemsBeforeEnablingSearch_1;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::IsUniqueList
	bool ___IsUniqueList_2;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::DrawDropdownForListElements
	bool ___DrawDropdownForListElements_3;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::DisableListAddButtonBehaviour
	bool ___DisableListAddButtonBehaviour_4;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::ExcludeExistingValuesInList
	bool ___ExcludeExistingValuesInList_5;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::ExpandAllMenuItems
	bool ___ExpandAllMenuItems_6;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::AppendNextDrawer
	bool ___AppendNextDrawer_7;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::DisableGUIInAppendedDrawer
	bool ___DisableGUIInAppendedDrawer_8;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::DoubleClickToConfirm
	bool ___DoubleClickToConfirm_9;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::FlattenTreeView
	bool ___FlattenTreeView_10;
	// System.Int32 Sirenix.OdinInspector.ValueDropdownAttribute::DropdownWidth
	int32_t ___DropdownWidth_11;
	// System.Int32 Sirenix.OdinInspector.ValueDropdownAttribute::DropdownHeight
	int32_t ___DropdownHeight_12;
	// System.String Sirenix.OdinInspector.ValueDropdownAttribute::DropdownTitle
	String_t* ___DropdownTitle_13;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::SortDropdownItems
	bool ___SortDropdownItems_14;
	// System.Boolean Sirenix.OdinInspector.ValueDropdownAttribute::HideChildProperties
	bool ___HideChildProperties_15;

public:
	inline static int32_t get_offset_of_MemberName_0() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___MemberName_0)); }
	inline String_t* get_MemberName_0() const { return ___MemberName_0; }
	inline String_t** get_address_of_MemberName_0() { return &___MemberName_0; }
	inline void set_MemberName_0(String_t* value)
	{
		___MemberName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_0), (void*)value);
	}

	inline static int32_t get_offset_of_NumberOfItemsBeforeEnablingSearch_1() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___NumberOfItemsBeforeEnablingSearch_1)); }
	inline int32_t get_NumberOfItemsBeforeEnablingSearch_1() const { return ___NumberOfItemsBeforeEnablingSearch_1; }
	inline int32_t* get_address_of_NumberOfItemsBeforeEnablingSearch_1() { return &___NumberOfItemsBeforeEnablingSearch_1; }
	inline void set_NumberOfItemsBeforeEnablingSearch_1(int32_t value)
	{
		___NumberOfItemsBeforeEnablingSearch_1 = value;
	}

	inline static int32_t get_offset_of_IsUniqueList_2() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___IsUniqueList_2)); }
	inline bool get_IsUniqueList_2() const { return ___IsUniqueList_2; }
	inline bool* get_address_of_IsUniqueList_2() { return &___IsUniqueList_2; }
	inline void set_IsUniqueList_2(bool value)
	{
		___IsUniqueList_2 = value;
	}

	inline static int32_t get_offset_of_DrawDropdownForListElements_3() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___DrawDropdownForListElements_3)); }
	inline bool get_DrawDropdownForListElements_3() const { return ___DrawDropdownForListElements_3; }
	inline bool* get_address_of_DrawDropdownForListElements_3() { return &___DrawDropdownForListElements_3; }
	inline void set_DrawDropdownForListElements_3(bool value)
	{
		___DrawDropdownForListElements_3 = value;
	}

	inline static int32_t get_offset_of_DisableListAddButtonBehaviour_4() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___DisableListAddButtonBehaviour_4)); }
	inline bool get_DisableListAddButtonBehaviour_4() const { return ___DisableListAddButtonBehaviour_4; }
	inline bool* get_address_of_DisableListAddButtonBehaviour_4() { return &___DisableListAddButtonBehaviour_4; }
	inline void set_DisableListAddButtonBehaviour_4(bool value)
	{
		___DisableListAddButtonBehaviour_4 = value;
	}

	inline static int32_t get_offset_of_ExcludeExistingValuesInList_5() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___ExcludeExistingValuesInList_5)); }
	inline bool get_ExcludeExistingValuesInList_5() const { return ___ExcludeExistingValuesInList_5; }
	inline bool* get_address_of_ExcludeExistingValuesInList_5() { return &___ExcludeExistingValuesInList_5; }
	inline void set_ExcludeExistingValuesInList_5(bool value)
	{
		___ExcludeExistingValuesInList_5 = value;
	}

	inline static int32_t get_offset_of_ExpandAllMenuItems_6() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___ExpandAllMenuItems_6)); }
	inline bool get_ExpandAllMenuItems_6() const { return ___ExpandAllMenuItems_6; }
	inline bool* get_address_of_ExpandAllMenuItems_6() { return &___ExpandAllMenuItems_6; }
	inline void set_ExpandAllMenuItems_6(bool value)
	{
		___ExpandAllMenuItems_6 = value;
	}

	inline static int32_t get_offset_of_AppendNextDrawer_7() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___AppendNextDrawer_7)); }
	inline bool get_AppendNextDrawer_7() const { return ___AppendNextDrawer_7; }
	inline bool* get_address_of_AppendNextDrawer_7() { return &___AppendNextDrawer_7; }
	inline void set_AppendNextDrawer_7(bool value)
	{
		___AppendNextDrawer_7 = value;
	}

	inline static int32_t get_offset_of_DisableGUIInAppendedDrawer_8() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___DisableGUIInAppendedDrawer_8)); }
	inline bool get_DisableGUIInAppendedDrawer_8() const { return ___DisableGUIInAppendedDrawer_8; }
	inline bool* get_address_of_DisableGUIInAppendedDrawer_8() { return &___DisableGUIInAppendedDrawer_8; }
	inline void set_DisableGUIInAppendedDrawer_8(bool value)
	{
		___DisableGUIInAppendedDrawer_8 = value;
	}

	inline static int32_t get_offset_of_DoubleClickToConfirm_9() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___DoubleClickToConfirm_9)); }
	inline bool get_DoubleClickToConfirm_9() const { return ___DoubleClickToConfirm_9; }
	inline bool* get_address_of_DoubleClickToConfirm_9() { return &___DoubleClickToConfirm_9; }
	inline void set_DoubleClickToConfirm_9(bool value)
	{
		___DoubleClickToConfirm_9 = value;
	}

	inline static int32_t get_offset_of_FlattenTreeView_10() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___FlattenTreeView_10)); }
	inline bool get_FlattenTreeView_10() const { return ___FlattenTreeView_10; }
	inline bool* get_address_of_FlattenTreeView_10() { return &___FlattenTreeView_10; }
	inline void set_FlattenTreeView_10(bool value)
	{
		___FlattenTreeView_10 = value;
	}

	inline static int32_t get_offset_of_DropdownWidth_11() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___DropdownWidth_11)); }
	inline int32_t get_DropdownWidth_11() const { return ___DropdownWidth_11; }
	inline int32_t* get_address_of_DropdownWidth_11() { return &___DropdownWidth_11; }
	inline void set_DropdownWidth_11(int32_t value)
	{
		___DropdownWidth_11 = value;
	}

	inline static int32_t get_offset_of_DropdownHeight_12() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___DropdownHeight_12)); }
	inline int32_t get_DropdownHeight_12() const { return ___DropdownHeight_12; }
	inline int32_t* get_address_of_DropdownHeight_12() { return &___DropdownHeight_12; }
	inline void set_DropdownHeight_12(int32_t value)
	{
		___DropdownHeight_12 = value;
	}

	inline static int32_t get_offset_of_DropdownTitle_13() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___DropdownTitle_13)); }
	inline String_t* get_DropdownTitle_13() const { return ___DropdownTitle_13; }
	inline String_t** get_address_of_DropdownTitle_13() { return &___DropdownTitle_13; }
	inline void set_DropdownTitle_13(String_t* value)
	{
		___DropdownTitle_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DropdownTitle_13), (void*)value);
	}

	inline static int32_t get_offset_of_SortDropdownItems_14() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___SortDropdownItems_14)); }
	inline bool get_SortDropdownItems_14() const { return ___SortDropdownItems_14; }
	inline bool* get_address_of_SortDropdownItems_14() { return &___SortDropdownItems_14; }
	inline void set_SortDropdownItems_14(bool value)
	{
		___SortDropdownItems_14 = value;
	}

	inline static int32_t get_offset_of_HideChildProperties_15() { return static_cast<int32_t>(offsetof(ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C, ___HideChildProperties_15)); }
	inline bool get_HideChildProperties_15() const { return ___HideChildProperties_15; }
	inline bool* get_address_of_HideChildProperties_15() { return &___HideChildProperties_15; }
	inline void set_HideChildProperties_15(bool value)
	{
		___HideChildProperties_15 = value;
	}
};


// Sirenix.OdinInspector.ValueDropdownItem
struct  ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 
{
public:
	// System.String Sirenix.OdinInspector.ValueDropdownItem::Text
	String_t* ___Text_0;
	// System.Object Sirenix.OdinInspector.ValueDropdownItem::Value
	RuntimeObject * ___Value_1;

public:
	inline static int32_t get_offset_of_Text_0() { return static_cast<int32_t>(offsetof(ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89, ___Text_0)); }
	inline String_t* get_Text_0() const { return ___Text_0; }
	inline String_t** get_address_of_Text_0() { return &___Text_0; }
	inline void set_Text_0(String_t* value)
	{
		___Text_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Text_0), (void*)value);
	}

	inline static int32_t get_offset_of_Value_1() { return static_cast<int32_t>(offsetof(ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89, ___Value_1)); }
	inline RuntimeObject * get_Value_1() const { return ___Value_1; }
	inline RuntimeObject ** get_address_of_Value_1() { return &___Value_1; }
	inline void set_Value_1(RuntimeObject * value)
	{
		___Value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of Sirenix.OdinInspector.ValueDropdownItem
struct ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshaled_pinvoke
{
	char* ___Text_0;
	Il2CppIUnknown* ___Value_1;
};
// Native definition for COM marshalling of Sirenix.OdinInspector.ValueDropdownItem
struct ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshaled_com
{
	Il2CppChar* ___Text_0;
	Il2CppIUnknown* ___Value_1;
};

// Sirenix.OdinInspector.WrapAttribute
struct  WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Double Sirenix.OdinInspector.WrapAttribute::Min
	double ___Min_0;
	// System.Double Sirenix.OdinInspector.WrapAttribute::Max
	double ___Max_1;

public:
	inline static int32_t get_offset_of_Min_0() { return static_cast<int32_t>(offsetof(WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8, ___Min_0)); }
	inline double get_Min_0() const { return ___Min_0; }
	inline double* get_address_of_Min_0() { return &___Min_0; }
	inline void set_Min_0(double value)
	{
		___Min_0 = value;
	}

	inline static int32_t get_offset_of_Max_1() { return static_cast<int32_t>(offsetof(WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8, ___Max_1)); }
	inline double get_Max_1() const { return ___Max_1; }
	inline double* get_address_of_Max_1() { return &___Max_1; }
	inline void set_Max_1(double value)
	{
		___Max_1 = value;
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Char
struct  Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<System.String>
struct  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	String_t* ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___list_0)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_list_0() const { return ___list_0; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B, ___current_3)); }
	inline String_t* get_current_3() const { return ___current_3; }
	inline String_t** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(String_t* value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Double
struct  Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// Sirenix.OdinInspector.BoxGroupAttribute
struct  BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.Boolean Sirenix.OdinInspector.BoxGroupAttribute::ShowLabel
	bool ___ShowLabel_3;
	// System.Boolean Sirenix.OdinInspector.BoxGroupAttribute::CenterLabel
	bool ___CenterLabel_4;

public:
	inline static int32_t get_offset_of_ShowLabel_3() { return static_cast<int32_t>(offsetof(BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6, ___ShowLabel_3)); }
	inline bool get_ShowLabel_3() const { return ___ShowLabel_3; }
	inline bool* get_address_of_ShowLabel_3() { return &___ShowLabel_3; }
	inline void set_ShowLabel_3(bool value)
	{
		___ShowLabel_3 = value;
	}

	inline static int32_t get_offset_of_CenterLabel_4() { return static_cast<int32_t>(offsetof(BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6, ___CenterLabel_4)); }
	inline bool get_CenterLabel_4() const { return ___CenterLabel_4; }
	inline bool* get_address_of_CenterLabel_4() { return &___CenterLabel_4; }
	inline void set_CenterLabel_4(bool value)
	{
		___CenterLabel_4 = value;
	}
};


// Sirenix.OdinInspector.ButtonGroupAttribute
struct  ButtonGroupAttribute_tDC19026AD744C75F907B2B44C890011F39CC5355  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:

public:
};


// Sirenix.OdinInspector.ButtonSizes
struct  ButtonSizes_t39AE89209535D61E32CB98627E6505B74A1586FE 
{
public:
	// System.Int32 Sirenix.OdinInspector.ButtonSizes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonSizes_t39AE89209535D61E32CB98627E6505B74A1586FE, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.ButtonStyle
struct  ButtonStyle_tF1346AA1629EBF6B74911CF4CC4919D96B7A4979 
{
public:
	// System.Int32 Sirenix.OdinInspector.ButtonStyle::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ButtonStyle_tF1346AA1629EBF6B74911CF4CC4919D96B7A4979, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.DictionaryDisplayOptions
struct  DictionaryDisplayOptions_t0C1BEBD1C7D5D829FFAA90278CAFCCA3D360ECDD 
{
public:
	// System.Int32 Sirenix.OdinInspector.DictionaryDisplayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DictionaryDisplayOptions_t0C1BEBD1C7D5D829FFAA90278CAFCCA3D360ECDD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.FoldoutGroupAttribute
struct  FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.Boolean Sirenix.OdinInspector.FoldoutGroupAttribute::Expanded
	bool ___Expanded_3;
	// System.Boolean Sirenix.OdinInspector.FoldoutGroupAttribute::<HasDefinedExpanded>k__BackingField
	bool ___U3CHasDefinedExpandedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_Expanded_3() { return static_cast<int32_t>(offsetof(FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA, ___Expanded_3)); }
	inline bool get_Expanded_3() const { return ___Expanded_3; }
	inline bool* get_address_of_Expanded_3() { return &___Expanded_3; }
	inline void set_Expanded_3(bool value)
	{
		___Expanded_3 = value;
	}

	inline static int32_t get_offset_of_U3CHasDefinedExpandedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA, ___U3CHasDefinedExpandedU3Ek__BackingField_4)); }
	inline bool get_U3CHasDefinedExpandedU3Ek__BackingField_4() const { return ___U3CHasDefinedExpandedU3Ek__BackingField_4; }
	inline bool* get_address_of_U3CHasDefinedExpandedU3Ek__BackingField_4() { return &___U3CHasDefinedExpandedU3Ek__BackingField_4; }
	inline void set_U3CHasDefinedExpandedU3Ek__BackingField_4(bool value)
	{
		___U3CHasDefinedExpandedU3Ek__BackingField_4 = value;
	}
};


// Sirenix.OdinInspector.GUIColorAttribute
struct  GUIColorAttribute_tA4CDDCA58D98DDBD285E924022FC73A2D5E85002  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// UnityEngine.Color Sirenix.OdinInspector.GUIColorAttribute::Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___Color_0;
	// System.String Sirenix.OdinInspector.GUIColorAttribute::GetColor
	String_t* ___GetColor_1;

public:
	inline static int32_t get_offset_of_Color_0() { return static_cast<int32_t>(offsetof(GUIColorAttribute_tA4CDDCA58D98DDBD285E924022FC73A2D5E85002, ___Color_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_Color_0() const { return ___Color_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_Color_0() { return &___Color_0; }
	inline void set_Color_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___Color_0 = value;
	}

	inline static int32_t get_offset_of_GetColor_1() { return static_cast<int32_t>(offsetof(GUIColorAttribute_tA4CDDCA58D98DDBD285E924022FC73A2D5E85002, ___GetColor_1)); }
	inline String_t* get_GetColor_1() const { return ___GetColor_1; }
	inline String_t** get_address_of_GetColor_1() { return &___GetColor_1; }
	inline void set_GetColor_1(String_t* value)
	{
		___GetColor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___GetColor_1), (void*)value);
	}
};


// Sirenix.OdinInspector.HideIfGroupAttribute
struct  HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.String Sirenix.OdinInspector.HideIfGroupAttribute::memberName
	String_t* ___memberName_3;
	// System.Boolean Sirenix.OdinInspector.HideIfGroupAttribute::Animate
	bool ___Animate_4;
	// System.Object Sirenix.OdinInspector.HideIfGroupAttribute::Value
	RuntimeObject * ___Value_5;

public:
	inline static int32_t get_offset_of_memberName_3() { return static_cast<int32_t>(offsetof(HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165, ___memberName_3)); }
	inline String_t* get_memberName_3() const { return ___memberName_3; }
	inline String_t** get_address_of_memberName_3() { return &___memberName_3; }
	inline void set_memberName_3(String_t* value)
	{
		___memberName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberName_3), (void*)value);
	}

	inline static int32_t get_offset_of_Animate_4() { return static_cast<int32_t>(offsetof(HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165, ___Animate_4)); }
	inline bool get_Animate_4() const { return ___Animate_4; }
	inline bool* get_address_of_Animate_4() { return &___Animate_4; }
	inline void set_Animate_4(bool value)
	{
		___Animate_4 = value;
	}

	inline static int32_t get_offset_of_Value_5() { return static_cast<int32_t>(offsetof(HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165, ___Value_5)); }
	inline RuntimeObject * get_Value_5() const { return ___Value_5; }
	inline RuntimeObject ** get_address_of_Value_5() { return &___Value_5; }
	inline void set_Value_5(RuntimeObject * value)
	{
		___Value_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_5), (void*)value);
	}
};


// Sirenix.OdinInspector.HorizontalGroupAttribute
struct  HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.Single Sirenix.OdinInspector.HorizontalGroupAttribute::Width
	float ___Width_3;
	// System.Single Sirenix.OdinInspector.HorizontalGroupAttribute::MarginLeft
	float ___MarginLeft_4;
	// System.Single Sirenix.OdinInspector.HorizontalGroupAttribute::MarginRight
	float ___MarginRight_5;
	// System.Single Sirenix.OdinInspector.HorizontalGroupAttribute::PaddingLeft
	float ___PaddingLeft_6;
	// System.Single Sirenix.OdinInspector.HorizontalGroupAttribute::PaddingRight
	float ___PaddingRight_7;
	// System.Single Sirenix.OdinInspector.HorizontalGroupAttribute::MinWidth
	float ___MinWidth_8;
	// System.Single Sirenix.OdinInspector.HorizontalGroupAttribute::MaxWidth
	float ___MaxWidth_9;
	// System.String Sirenix.OdinInspector.HorizontalGroupAttribute::Title
	String_t* ___Title_10;
	// System.Single Sirenix.OdinInspector.HorizontalGroupAttribute::LabelWidth
	float ___LabelWidth_11;

public:
	inline static int32_t get_offset_of_Width_3() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___Width_3)); }
	inline float get_Width_3() const { return ___Width_3; }
	inline float* get_address_of_Width_3() { return &___Width_3; }
	inline void set_Width_3(float value)
	{
		___Width_3 = value;
	}

	inline static int32_t get_offset_of_MarginLeft_4() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___MarginLeft_4)); }
	inline float get_MarginLeft_4() const { return ___MarginLeft_4; }
	inline float* get_address_of_MarginLeft_4() { return &___MarginLeft_4; }
	inline void set_MarginLeft_4(float value)
	{
		___MarginLeft_4 = value;
	}

	inline static int32_t get_offset_of_MarginRight_5() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___MarginRight_5)); }
	inline float get_MarginRight_5() const { return ___MarginRight_5; }
	inline float* get_address_of_MarginRight_5() { return &___MarginRight_5; }
	inline void set_MarginRight_5(float value)
	{
		___MarginRight_5 = value;
	}

	inline static int32_t get_offset_of_PaddingLeft_6() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___PaddingLeft_6)); }
	inline float get_PaddingLeft_6() const { return ___PaddingLeft_6; }
	inline float* get_address_of_PaddingLeft_6() { return &___PaddingLeft_6; }
	inline void set_PaddingLeft_6(float value)
	{
		___PaddingLeft_6 = value;
	}

	inline static int32_t get_offset_of_PaddingRight_7() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___PaddingRight_7)); }
	inline float get_PaddingRight_7() const { return ___PaddingRight_7; }
	inline float* get_address_of_PaddingRight_7() { return &___PaddingRight_7; }
	inline void set_PaddingRight_7(float value)
	{
		___PaddingRight_7 = value;
	}

	inline static int32_t get_offset_of_MinWidth_8() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___MinWidth_8)); }
	inline float get_MinWidth_8() const { return ___MinWidth_8; }
	inline float* get_address_of_MinWidth_8() { return &___MinWidth_8; }
	inline void set_MinWidth_8(float value)
	{
		___MinWidth_8 = value;
	}

	inline static int32_t get_offset_of_MaxWidth_9() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___MaxWidth_9)); }
	inline float get_MaxWidth_9() const { return ___MaxWidth_9; }
	inline float* get_address_of_MaxWidth_9() { return &___MaxWidth_9; }
	inline void set_MaxWidth_9(float value)
	{
		___MaxWidth_9 = value;
	}

	inline static int32_t get_offset_of_Title_10() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___Title_10)); }
	inline String_t* get_Title_10() const { return ___Title_10; }
	inline String_t** get_address_of_Title_10() { return &___Title_10; }
	inline void set_Title_10(String_t* value)
	{
		___Title_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Title_10), (void*)value);
	}

	inline static int32_t get_offset_of_LabelWidth_11() { return static_cast<int32_t>(offsetof(HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28, ___LabelWidth_11)); }
	inline float get_LabelWidth_11() const { return ___LabelWidth_11; }
	inline float* get_address_of_LabelWidth_11() { return &___LabelWidth_11; }
	inline void set_LabelWidth_11(float value)
	{
		___LabelWidth_11 = value;
	}
};


// Sirenix.OdinInspector.InfoMessageType
struct  InfoMessageType_t95E233CF806CAD06D6F72354350F865D9FA768AA 
{
public:
	// System.Int32 Sirenix.OdinInspector.InfoMessageType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InfoMessageType_t95E233CF806CAD06D6F72354350F865D9FA768AA, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.InlineEditorModes
struct  InlineEditorModes_tC11D37184245853EA1B951AD42E5383E3D4521D0 
{
public:
	// System.Int32 Sirenix.OdinInspector.InlineEditorModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InlineEditorModes_tC11D37184245853EA1B951AD42E5383E3D4521D0, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.InlineEditorObjectFieldModes
struct  InlineEditorObjectFieldModes_t044C59362435B3EB8A98CF3494A9B5EBABD2EBD9 
{
public:
	// System.Int32 Sirenix.OdinInspector.InlineEditorObjectFieldModes::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InlineEditorObjectFieldModes_t044C59362435B3EB8A98CF3494A9B5EBABD2EBD9, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.ObjectFieldAlignment
struct  ObjectFieldAlignment_tBCB8ED0E287D7D6B9B2354866F8CDF1E6DE1A664 
{
public:
	// System.Int32 Sirenix.OdinInspector.ObjectFieldAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObjectFieldAlignment_tBCB8ED0E287D7D6B9B2354866F8CDF1E6DE1A664, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.OnInspectorGUIAttribute
struct  OnInspectorGUIAttribute_t00B121908C6763DE1C90CFAAA5EA9481FA5E2543  : public ShowInInspectorAttribute_t32120F244A3048FD51028573FF8746BEFCCCB188
{
public:
	// System.String Sirenix.OdinInspector.OnInspectorGUIAttribute::PrependMethodName
	String_t* ___PrependMethodName_0;
	// System.String Sirenix.OdinInspector.OnInspectorGUIAttribute::AppendMethodName
	String_t* ___AppendMethodName_1;

public:
	inline static int32_t get_offset_of_PrependMethodName_0() { return static_cast<int32_t>(offsetof(OnInspectorGUIAttribute_t00B121908C6763DE1C90CFAAA5EA9481FA5E2543, ___PrependMethodName_0)); }
	inline String_t* get_PrependMethodName_0() const { return ___PrependMethodName_0; }
	inline String_t** get_address_of_PrependMethodName_0() { return &___PrependMethodName_0; }
	inline void set_PrependMethodName_0(String_t* value)
	{
		___PrependMethodName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___PrependMethodName_0), (void*)value);
	}

	inline static int32_t get_offset_of_AppendMethodName_1() { return static_cast<int32_t>(offsetof(OnInspectorGUIAttribute_t00B121908C6763DE1C90CFAAA5EA9481FA5E2543, ___AppendMethodName_1)); }
	inline String_t* get_AppendMethodName_1() const { return ___AppendMethodName_1; }
	inline String_t** get_address_of_AppendMethodName_1() { return &___AppendMethodName_1; }
	inline void set_AppendMethodName_1(String_t* value)
	{
		___AppendMethodName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___AppendMethodName_1), (void*)value);
	}
};


// Sirenix.OdinInspector.ShowIfGroupAttribute
struct  ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.String Sirenix.OdinInspector.ShowIfGroupAttribute::memberName
	String_t* ___memberName_3;
	// System.Boolean Sirenix.OdinInspector.ShowIfGroupAttribute::Animate
	bool ___Animate_4;
	// System.Object Sirenix.OdinInspector.ShowIfGroupAttribute::Value
	RuntimeObject * ___Value_5;

public:
	inline static int32_t get_offset_of_memberName_3() { return static_cast<int32_t>(offsetof(ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE, ___memberName_3)); }
	inline String_t* get_memberName_3() const { return ___memberName_3; }
	inline String_t** get_address_of_memberName_3() { return &___memberName_3; }
	inline void set_memberName_3(String_t* value)
	{
		___memberName_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___memberName_3), (void*)value);
	}

	inline static int32_t get_offset_of_Animate_4() { return static_cast<int32_t>(offsetof(ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE, ___Animate_4)); }
	inline bool get_Animate_4() const { return ___Animate_4; }
	inline bool* get_address_of_Animate_4() { return &___Animate_4; }
	inline void set_Animate_4(bool value)
	{
		___Animate_4 = value;
	}

	inline static int32_t get_offset_of_Value_5() { return static_cast<int32_t>(offsetof(ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE, ___Value_5)); }
	inline RuntimeObject * get_Value_5() const { return ___Value_5; }
	inline RuntimeObject ** get_address_of_Value_5() { return &___Value_5; }
	inline void set_Value_5(RuntimeObject * value)
	{
		___Value_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_5), (void*)value);
	}
};


// Sirenix.OdinInspector.TabGroupAttribute
struct  TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.String Sirenix.OdinInspector.TabGroupAttribute::TabName
	String_t* ___TabName_4;
	// System.Boolean Sirenix.OdinInspector.TabGroupAttribute::UseFixedHeight
	bool ___UseFixedHeight_5;
	// System.Boolean Sirenix.OdinInspector.TabGroupAttribute::Paddingless
	bool ___Paddingless_6;
	// System.Boolean Sirenix.OdinInspector.TabGroupAttribute::HideTabGroupIfTabGroupOnlyHasOneTab
	bool ___HideTabGroupIfTabGroupOnlyHasOneTab_7;
	// System.Collections.Generic.List`1<System.String> Sirenix.OdinInspector.TabGroupAttribute::<Tabs>k__BackingField
	List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___U3CTabsU3Ek__BackingField_8;

public:
	inline static int32_t get_offset_of_TabName_4() { return static_cast<int32_t>(offsetof(TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF, ___TabName_4)); }
	inline String_t* get_TabName_4() const { return ___TabName_4; }
	inline String_t** get_address_of_TabName_4() { return &___TabName_4; }
	inline void set_TabName_4(String_t* value)
	{
		___TabName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TabName_4), (void*)value);
	}

	inline static int32_t get_offset_of_UseFixedHeight_5() { return static_cast<int32_t>(offsetof(TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF, ___UseFixedHeight_5)); }
	inline bool get_UseFixedHeight_5() const { return ___UseFixedHeight_5; }
	inline bool* get_address_of_UseFixedHeight_5() { return &___UseFixedHeight_5; }
	inline void set_UseFixedHeight_5(bool value)
	{
		___UseFixedHeight_5 = value;
	}

	inline static int32_t get_offset_of_Paddingless_6() { return static_cast<int32_t>(offsetof(TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF, ___Paddingless_6)); }
	inline bool get_Paddingless_6() const { return ___Paddingless_6; }
	inline bool* get_address_of_Paddingless_6() { return &___Paddingless_6; }
	inline void set_Paddingless_6(bool value)
	{
		___Paddingless_6 = value;
	}

	inline static int32_t get_offset_of_HideTabGroupIfTabGroupOnlyHasOneTab_7() { return static_cast<int32_t>(offsetof(TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF, ___HideTabGroupIfTabGroupOnlyHasOneTab_7)); }
	inline bool get_HideTabGroupIfTabGroupOnlyHasOneTab_7() const { return ___HideTabGroupIfTabGroupOnlyHasOneTab_7; }
	inline bool* get_address_of_HideTabGroupIfTabGroupOnlyHasOneTab_7() { return &___HideTabGroupIfTabGroupOnlyHasOneTab_7; }
	inline void set_HideTabGroupIfTabGroupOnlyHasOneTab_7(bool value)
	{
		___HideTabGroupIfTabGroupOnlyHasOneTab_7 = value;
	}

	inline static int32_t get_offset_of_U3CTabsU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF, ___U3CTabsU3Ek__BackingField_8)); }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * get_U3CTabsU3Ek__BackingField_8() const { return ___U3CTabsU3Ek__BackingField_8; }
	inline List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 ** get_address_of_U3CTabsU3Ek__BackingField_8() { return &___U3CTabsU3Ek__BackingField_8; }
	inline void set_U3CTabsU3Ek__BackingField_8(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * value)
	{
		___U3CTabsU3Ek__BackingField_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTabsU3Ek__BackingField_8), (void*)value);
	}
};


// Sirenix.OdinInspector.TabGroupAttribute_TabSubGroupAttribute
struct  TabSubGroupAttribute_tCD5574179789F2FFC2F6FE36AFF617C134B07874  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:

public:
};


// Sirenix.OdinInspector.TitleAlignments
struct  TitleAlignments_tD4B02EE94D0C53E33E3C0E6069FDBE1334AACA2A 
{
public:
	// System.Int32 Sirenix.OdinInspector.TitleAlignments::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TitleAlignments_tD4B02EE94D0C53E33E3C0E6069FDBE1334AACA2A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.ToggleGroupAttribute
struct  ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.String Sirenix.OdinInspector.ToggleGroupAttribute::ToggleGroupTitle
	String_t* ___ToggleGroupTitle_3;
	// System.Boolean Sirenix.OdinInspector.ToggleGroupAttribute::CollapseOthersOnExpand
	bool ___CollapseOthersOnExpand_4;
	// System.String Sirenix.OdinInspector.ToggleGroupAttribute::<TitleStringMemberName>k__BackingField
	String_t* ___U3CTitleStringMemberNameU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_ToggleGroupTitle_3() { return static_cast<int32_t>(offsetof(ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA, ___ToggleGroupTitle_3)); }
	inline String_t* get_ToggleGroupTitle_3() const { return ___ToggleGroupTitle_3; }
	inline String_t** get_address_of_ToggleGroupTitle_3() { return &___ToggleGroupTitle_3; }
	inline void set_ToggleGroupTitle_3(String_t* value)
	{
		___ToggleGroupTitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ToggleGroupTitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_CollapseOthersOnExpand_4() { return static_cast<int32_t>(offsetof(ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA, ___CollapseOthersOnExpand_4)); }
	inline bool get_CollapseOthersOnExpand_4() const { return ___CollapseOthersOnExpand_4; }
	inline bool* get_address_of_CollapseOthersOnExpand_4() { return &___CollapseOthersOnExpand_4; }
	inline void set_CollapseOthersOnExpand_4(bool value)
	{
		___CollapseOthersOnExpand_4 = value;
	}

	inline static int32_t get_offset_of_U3CTitleStringMemberNameU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA, ___U3CTitleStringMemberNameU3Ek__BackingField_5)); }
	inline String_t* get_U3CTitleStringMemberNameU3Ek__BackingField_5() const { return ___U3CTitleStringMemberNameU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CTitleStringMemberNameU3Ek__BackingField_5() { return &___U3CTitleStringMemberNameU3Ek__BackingField_5; }
	inline void set_U3CTitleStringMemberNameU3Ek__BackingField_5(String_t* value)
	{
		___U3CTitleStringMemberNameU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CTitleStringMemberNameU3Ek__BackingField_5), (void*)value);
	}
};


// Sirenix.OdinInspector.VerticalGroupAttribute
struct  VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.Single Sirenix.OdinInspector.VerticalGroupAttribute::PaddingTop
	float ___PaddingTop_3;
	// System.Single Sirenix.OdinInspector.VerticalGroupAttribute::PaddingBottom
	float ___PaddingBottom_4;

public:
	inline static int32_t get_offset_of_PaddingTop_3() { return static_cast<int32_t>(offsetof(VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED, ___PaddingTop_3)); }
	inline float get_PaddingTop_3() const { return ___PaddingTop_3; }
	inline float* get_address_of_PaddingTop_3() { return &___PaddingTop_3; }
	inline void set_PaddingTop_3(float value)
	{
		___PaddingTop_3 = value;
	}

	inline static int32_t get_offset_of_PaddingBottom_4() { return static_cast<int32_t>(offsetof(VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED, ___PaddingBottom_4)); }
	inline float get_PaddingBottom_4() const { return ___PaddingBottom_4; }
	inline float* get_address_of_PaddingBottom_4() { return &___PaddingBottom_4; }
	inline void set_PaddingBottom_4(float value)
	{
		___PaddingBottom_4 = value;
	}
};


// System.AttributeTargets
struct  AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t5F71273DFE1D0CA9B8109F02A023A7DBA9BFC923, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// System.Reflection.BindingFlags
struct  BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.TextAlignment
struct  TextAlignment_t23BC9C82BA84BEC0BFE7426C26FE96C7DE0EF8F4 
{
public:
	// System.Int32 UnityEngine.TextAlignment::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TextAlignment_t23BC9C82BA84BEC0BFE7426C26FE96C7DE0EF8F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Sirenix.OdinInspector.AttributeTargetFlags
struct  AttributeTargetFlags_t74691590357FC76F1656FAAA65A8D601D617F664  : public RuntimeObject
{
public:

public:
};


// Sirenix.OdinInspector.ButtonAttribute
struct  ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47  : public ShowInInspectorAttribute_t32120F244A3048FD51028573FF8746BEFCCCB188
{
public:
	// System.Int32 Sirenix.OdinInspector.ButtonAttribute::ButtonHeight
	int32_t ___ButtonHeight_0;
	// System.String Sirenix.OdinInspector.ButtonAttribute::Name
	String_t* ___Name_1;
	// Sirenix.OdinInspector.ButtonStyle Sirenix.OdinInspector.ButtonAttribute::Style
	int32_t ___Style_2;
	// System.Boolean Sirenix.OdinInspector.ButtonAttribute::Expanded
	bool ___Expanded_3;
	// System.Boolean Sirenix.OdinInspector.ButtonAttribute::drawResult
	bool ___drawResult_4;
	// System.Boolean Sirenix.OdinInspector.ButtonAttribute::drawResultIsSet
	bool ___drawResultIsSet_5;

public:
	inline static int32_t get_offset_of_ButtonHeight_0() { return static_cast<int32_t>(offsetof(ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47, ___ButtonHeight_0)); }
	inline int32_t get_ButtonHeight_0() const { return ___ButtonHeight_0; }
	inline int32_t* get_address_of_ButtonHeight_0() { return &___ButtonHeight_0; }
	inline void set_ButtonHeight_0(int32_t value)
	{
		___ButtonHeight_0 = value;
	}

	inline static int32_t get_offset_of_Name_1() { return static_cast<int32_t>(offsetof(ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47, ___Name_1)); }
	inline String_t* get_Name_1() const { return ___Name_1; }
	inline String_t** get_address_of_Name_1() { return &___Name_1; }
	inline void set_Name_1(String_t* value)
	{
		___Name_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Name_1), (void*)value);
	}

	inline static int32_t get_offset_of_Style_2() { return static_cast<int32_t>(offsetof(ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47, ___Style_2)); }
	inline int32_t get_Style_2() const { return ___Style_2; }
	inline int32_t* get_address_of_Style_2() { return &___Style_2; }
	inline void set_Style_2(int32_t value)
	{
		___Style_2 = value;
	}

	inline static int32_t get_offset_of_Expanded_3() { return static_cast<int32_t>(offsetof(ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47, ___Expanded_3)); }
	inline bool get_Expanded_3() const { return ___Expanded_3; }
	inline bool* get_address_of_Expanded_3() { return &___Expanded_3; }
	inline void set_Expanded_3(bool value)
	{
		___Expanded_3 = value;
	}

	inline static int32_t get_offset_of_drawResult_4() { return static_cast<int32_t>(offsetof(ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47, ___drawResult_4)); }
	inline bool get_drawResult_4() const { return ___drawResult_4; }
	inline bool* get_address_of_drawResult_4() { return &___drawResult_4; }
	inline void set_drawResult_4(bool value)
	{
		___drawResult_4 = value;
	}

	inline static int32_t get_offset_of_drawResultIsSet_5() { return static_cast<int32_t>(offsetof(ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47, ___drawResultIsSet_5)); }
	inline bool get_drawResultIsSet_5() const { return ___drawResultIsSet_5; }
	inline bool* get_address_of_drawResultIsSet_5() { return &___drawResultIsSet_5; }
	inline void set_drawResultIsSet_5(bool value)
	{
		___drawResultIsSet_5 = value;
	}
};


// Sirenix.OdinInspector.DetailedInfoBoxAttribute
struct  DetailedInfoBoxAttribute_t2AE8658829B606862E843757085ADD8A0DE19907  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.DetailedInfoBoxAttribute::Message
	String_t* ___Message_0;
	// System.String Sirenix.OdinInspector.DetailedInfoBoxAttribute::Details
	String_t* ___Details_1;
	// Sirenix.OdinInspector.InfoMessageType Sirenix.OdinInspector.DetailedInfoBoxAttribute::InfoMessageType
	int32_t ___InfoMessageType_2;
	// System.String Sirenix.OdinInspector.DetailedInfoBoxAttribute::VisibleIf
	String_t* ___VisibleIf_3;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(DetailedInfoBoxAttribute_t2AE8658829B606862E843757085ADD8A0DE19907, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_0), (void*)value);
	}

	inline static int32_t get_offset_of_Details_1() { return static_cast<int32_t>(offsetof(DetailedInfoBoxAttribute_t2AE8658829B606862E843757085ADD8A0DE19907, ___Details_1)); }
	inline String_t* get_Details_1() const { return ___Details_1; }
	inline String_t** get_address_of_Details_1() { return &___Details_1; }
	inline void set_Details_1(String_t* value)
	{
		___Details_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Details_1), (void*)value);
	}

	inline static int32_t get_offset_of_InfoMessageType_2() { return static_cast<int32_t>(offsetof(DetailedInfoBoxAttribute_t2AE8658829B606862E843757085ADD8A0DE19907, ___InfoMessageType_2)); }
	inline int32_t get_InfoMessageType_2() const { return ___InfoMessageType_2; }
	inline int32_t* get_address_of_InfoMessageType_2() { return &___InfoMessageType_2; }
	inline void set_InfoMessageType_2(int32_t value)
	{
		___InfoMessageType_2 = value;
	}

	inline static int32_t get_offset_of_VisibleIf_3() { return static_cast<int32_t>(offsetof(DetailedInfoBoxAttribute_t2AE8658829B606862E843757085ADD8A0DE19907, ___VisibleIf_3)); }
	inline String_t* get_VisibleIf_3() const { return ___VisibleIf_3; }
	inline String_t** get_address_of_VisibleIf_3() { return &___VisibleIf_3; }
	inline void set_VisibleIf_3(String_t* value)
	{
		___VisibleIf_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VisibleIf_3), (void*)value);
	}
};


// Sirenix.OdinInspector.DictionaryDrawerSettings
struct  DictionaryDrawerSettings_tAA898EA1B98F778FB5A03EA7996CAC669B0ED434  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.DictionaryDrawerSettings::KeyLabel
	String_t* ___KeyLabel_0;
	// System.String Sirenix.OdinInspector.DictionaryDrawerSettings::ValueLabel
	String_t* ___ValueLabel_1;
	// Sirenix.OdinInspector.DictionaryDisplayOptions Sirenix.OdinInspector.DictionaryDrawerSettings::DisplayMode
	int32_t ___DisplayMode_2;
	// System.Boolean Sirenix.OdinInspector.DictionaryDrawerSettings::IsReadOnly
	bool ___IsReadOnly_3;

public:
	inline static int32_t get_offset_of_KeyLabel_0() { return static_cast<int32_t>(offsetof(DictionaryDrawerSettings_tAA898EA1B98F778FB5A03EA7996CAC669B0ED434, ___KeyLabel_0)); }
	inline String_t* get_KeyLabel_0() const { return ___KeyLabel_0; }
	inline String_t** get_address_of_KeyLabel_0() { return &___KeyLabel_0; }
	inline void set_KeyLabel_0(String_t* value)
	{
		___KeyLabel_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KeyLabel_0), (void*)value);
	}

	inline static int32_t get_offset_of_ValueLabel_1() { return static_cast<int32_t>(offsetof(DictionaryDrawerSettings_tAA898EA1B98F778FB5A03EA7996CAC669B0ED434, ___ValueLabel_1)); }
	inline String_t* get_ValueLabel_1() const { return ___ValueLabel_1; }
	inline String_t** get_address_of_ValueLabel_1() { return &___ValueLabel_1; }
	inline void set_ValueLabel_1(String_t* value)
	{
		___ValueLabel_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ValueLabel_1), (void*)value);
	}

	inline static int32_t get_offset_of_DisplayMode_2() { return static_cast<int32_t>(offsetof(DictionaryDrawerSettings_tAA898EA1B98F778FB5A03EA7996CAC669B0ED434, ___DisplayMode_2)); }
	inline int32_t get_DisplayMode_2() const { return ___DisplayMode_2; }
	inline int32_t* get_address_of_DisplayMode_2() { return &___DisplayMode_2; }
	inline void set_DisplayMode_2(int32_t value)
	{
		___DisplayMode_2 = value;
	}

	inline static int32_t get_offset_of_IsReadOnly_3() { return static_cast<int32_t>(offsetof(DictionaryDrawerSettings_tAA898EA1B98F778FB5A03EA7996CAC669B0ED434, ___IsReadOnly_3)); }
	inline bool get_IsReadOnly_3() const { return ___IsReadOnly_3; }
	inline bool* get_address_of_IsReadOnly_3() { return &___IsReadOnly_3; }
	inline void set_IsReadOnly_3(bool value)
	{
		___IsReadOnly_3 = value;
	}
};


// Sirenix.OdinInspector.InfoBoxAttribute
struct  InfoBoxAttribute_tD2CBFDC2F3C53791F8821B7C6AA0A74CC17035B7  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.InfoBoxAttribute::Message
	String_t* ___Message_0;
	// Sirenix.OdinInspector.InfoMessageType Sirenix.OdinInspector.InfoBoxAttribute::InfoMessageType
	int32_t ___InfoMessageType_1;
	// System.String Sirenix.OdinInspector.InfoBoxAttribute::VisibleIf
	String_t* ___VisibleIf_2;
	// System.Boolean Sirenix.OdinInspector.InfoBoxAttribute::GUIAlwaysEnabled
	bool ___GUIAlwaysEnabled_3;

public:
	inline static int32_t get_offset_of_Message_0() { return static_cast<int32_t>(offsetof(InfoBoxAttribute_tD2CBFDC2F3C53791F8821B7C6AA0A74CC17035B7, ___Message_0)); }
	inline String_t* get_Message_0() const { return ___Message_0; }
	inline String_t** get_address_of_Message_0() { return &___Message_0; }
	inline void set_Message_0(String_t* value)
	{
		___Message_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Message_0), (void*)value);
	}

	inline static int32_t get_offset_of_InfoMessageType_1() { return static_cast<int32_t>(offsetof(InfoBoxAttribute_tD2CBFDC2F3C53791F8821B7C6AA0A74CC17035B7, ___InfoMessageType_1)); }
	inline int32_t get_InfoMessageType_1() const { return ___InfoMessageType_1; }
	inline int32_t* get_address_of_InfoMessageType_1() { return &___InfoMessageType_1; }
	inline void set_InfoMessageType_1(int32_t value)
	{
		___InfoMessageType_1 = value;
	}

	inline static int32_t get_offset_of_VisibleIf_2() { return static_cast<int32_t>(offsetof(InfoBoxAttribute_tD2CBFDC2F3C53791F8821B7C6AA0A74CC17035B7, ___VisibleIf_2)); }
	inline String_t* get_VisibleIf_2() const { return ___VisibleIf_2; }
	inline String_t** get_address_of_VisibleIf_2() { return &___VisibleIf_2; }
	inline void set_VisibleIf_2(String_t* value)
	{
		___VisibleIf_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___VisibleIf_2), (void*)value);
	}

	inline static int32_t get_offset_of_GUIAlwaysEnabled_3() { return static_cast<int32_t>(offsetof(InfoBoxAttribute_tD2CBFDC2F3C53791F8821B7C6AA0A74CC17035B7, ___GUIAlwaysEnabled_3)); }
	inline bool get_GUIAlwaysEnabled_3() const { return ___GUIAlwaysEnabled_3; }
	inline bool* get_address_of_GUIAlwaysEnabled_3() { return &___GUIAlwaysEnabled_3; }
	inline void set_GUIAlwaysEnabled_3(bool value)
	{
		___GUIAlwaysEnabled_3 = value;
	}
};


// Sirenix.OdinInspector.InlineEditorAttribute
struct  InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Boolean Sirenix.OdinInspector.InlineEditorAttribute::Expanded
	bool ___Expanded_0;
	// System.Boolean Sirenix.OdinInspector.InlineEditorAttribute::DrawHeader
	bool ___DrawHeader_1;
	// System.Boolean Sirenix.OdinInspector.InlineEditorAttribute::DrawGUI
	bool ___DrawGUI_2;
	// System.Boolean Sirenix.OdinInspector.InlineEditorAttribute::DrawPreview
	bool ___DrawPreview_3;
	// System.Single Sirenix.OdinInspector.InlineEditorAttribute::MaxHeight
	float ___MaxHeight_4;
	// System.Single Sirenix.OdinInspector.InlineEditorAttribute::PreviewWidth
	float ___PreviewWidth_5;
	// System.Single Sirenix.OdinInspector.InlineEditorAttribute::PreviewHeight
	float ___PreviewHeight_6;
	// System.Boolean Sirenix.OdinInspector.InlineEditorAttribute::IncrementInlineEditorDrawerDepth
	bool ___IncrementInlineEditorDrawerDepth_7;
	// Sirenix.OdinInspector.InlineEditorObjectFieldModes Sirenix.OdinInspector.InlineEditorAttribute::ObjectFieldMode
	int32_t ___ObjectFieldMode_8;
	// System.Boolean Sirenix.OdinInspector.InlineEditorAttribute::DisableGUIForVCSLockedAssets
	bool ___DisableGUIForVCSLockedAssets_9;

public:
	inline static int32_t get_offset_of_Expanded_0() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___Expanded_0)); }
	inline bool get_Expanded_0() const { return ___Expanded_0; }
	inline bool* get_address_of_Expanded_0() { return &___Expanded_0; }
	inline void set_Expanded_0(bool value)
	{
		___Expanded_0 = value;
	}

	inline static int32_t get_offset_of_DrawHeader_1() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___DrawHeader_1)); }
	inline bool get_DrawHeader_1() const { return ___DrawHeader_1; }
	inline bool* get_address_of_DrawHeader_1() { return &___DrawHeader_1; }
	inline void set_DrawHeader_1(bool value)
	{
		___DrawHeader_1 = value;
	}

	inline static int32_t get_offset_of_DrawGUI_2() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___DrawGUI_2)); }
	inline bool get_DrawGUI_2() const { return ___DrawGUI_2; }
	inline bool* get_address_of_DrawGUI_2() { return &___DrawGUI_2; }
	inline void set_DrawGUI_2(bool value)
	{
		___DrawGUI_2 = value;
	}

	inline static int32_t get_offset_of_DrawPreview_3() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___DrawPreview_3)); }
	inline bool get_DrawPreview_3() const { return ___DrawPreview_3; }
	inline bool* get_address_of_DrawPreview_3() { return &___DrawPreview_3; }
	inline void set_DrawPreview_3(bool value)
	{
		___DrawPreview_3 = value;
	}

	inline static int32_t get_offset_of_MaxHeight_4() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___MaxHeight_4)); }
	inline float get_MaxHeight_4() const { return ___MaxHeight_4; }
	inline float* get_address_of_MaxHeight_4() { return &___MaxHeight_4; }
	inline void set_MaxHeight_4(float value)
	{
		___MaxHeight_4 = value;
	}

	inline static int32_t get_offset_of_PreviewWidth_5() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___PreviewWidth_5)); }
	inline float get_PreviewWidth_5() const { return ___PreviewWidth_5; }
	inline float* get_address_of_PreviewWidth_5() { return &___PreviewWidth_5; }
	inline void set_PreviewWidth_5(float value)
	{
		___PreviewWidth_5 = value;
	}

	inline static int32_t get_offset_of_PreviewHeight_6() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___PreviewHeight_6)); }
	inline float get_PreviewHeight_6() const { return ___PreviewHeight_6; }
	inline float* get_address_of_PreviewHeight_6() { return &___PreviewHeight_6; }
	inline void set_PreviewHeight_6(float value)
	{
		___PreviewHeight_6 = value;
	}

	inline static int32_t get_offset_of_IncrementInlineEditorDrawerDepth_7() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___IncrementInlineEditorDrawerDepth_7)); }
	inline bool get_IncrementInlineEditorDrawerDepth_7() const { return ___IncrementInlineEditorDrawerDepth_7; }
	inline bool* get_address_of_IncrementInlineEditorDrawerDepth_7() { return &___IncrementInlineEditorDrawerDepth_7; }
	inline void set_IncrementInlineEditorDrawerDepth_7(bool value)
	{
		___IncrementInlineEditorDrawerDepth_7 = value;
	}

	inline static int32_t get_offset_of_ObjectFieldMode_8() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___ObjectFieldMode_8)); }
	inline int32_t get_ObjectFieldMode_8() const { return ___ObjectFieldMode_8; }
	inline int32_t* get_address_of_ObjectFieldMode_8() { return &___ObjectFieldMode_8; }
	inline void set_ObjectFieldMode_8(int32_t value)
	{
		___ObjectFieldMode_8 = value;
	}

	inline static int32_t get_offset_of_DisableGUIForVCSLockedAssets_9() { return static_cast<int32_t>(offsetof(InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5, ___DisableGUIForVCSLockedAssets_9)); }
	inline bool get_DisableGUIForVCSLockedAssets_9() const { return ___DisableGUIForVCSLockedAssets_9; }
	inline bool* get_address_of_DisableGUIForVCSLockedAssets_9() { return &___DisableGUIForVCSLockedAssets_9; }
	inline void set_DisableGUIForVCSLockedAssets_9(bool value)
	{
		___DisableGUIForVCSLockedAssets_9 = value;
	}
};


// Sirenix.OdinInspector.PreviewFieldAttribute
struct  PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Single Sirenix.OdinInspector.PreviewFieldAttribute::Height
	float ___Height_0;
	// Sirenix.OdinInspector.ObjectFieldAlignment Sirenix.OdinInspector.PreviewFieldAttribute::Alignment
	int32_t ___Alignment_1;
	// System.Boolean Sirenix.OdinInspector.PreviewFieldAttribute::AlignmentHasValue
	bool ___AlignmentHasValue_2;

public:
	inline static int32_t get_offset_of_Height_0() { return static_cast<int32_t>(offsetof(PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3, ___Height_0)); }
	inline float get_Height_0() const { return ___Height_0; }
	inline float* get_address_of_Height_0() { return &___Height_0; }
	inline void set_Height_0(float value)
	{
		___Height_0 = value;
	}

	inline static int32_t get_offset_of_Alignment_1() { return static_cast<int32_t>(offsetof(PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3, ___Alignment_1)); }
	inline int32_t get_Alignment_1() const { return ___Alignment_1; }
	inline int32_t* get_address_of_Alignment_1() { return &___Alignment_1; }
	inline void set_Alignment_1(int32_t value)
	{
		___Alignment_1 = value;
	}

	inline static int32_t get_offset_of_AlignmentHasValue_2() { return static_cast<int32_t>(offsetof(PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3, ___AlignmentHasValue_2)); }
	inline bool get_AlignmentHasValue_2() const { return ___AlignmentHasValue_2; }
	inline bool* get_address_of_AlignmentHasValue_2() { return &___AlignmentHasValue_2; }
	inline void set_AlignmentHasValue_2(bool value)
	{
		___AlignmentHasValue_2 = value;
	}
};


// Sirenix.OdinInspector.ProgressBarAttribute
struct  ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.Double Sirenix.OdinInspector.ProgressBarAttribute::Min
	double ___Min_0;
	// System.Double Sirenix.OdinInspector.ProgressBarAttribute::Max
	double ___Max_1;
	// System.String Sirenix.OdinInspector.ProgressBarAttribute::MinMember
	String_t* ___MinMember_2;
	// System.String Sirenix.OdinInspector.ProgressBarAttribute::MaxMember
	String_t* ___MaxMember_3;
	// System.Single Sirenix.OdinInspector.ProgressBarAttribute::R
	float ___R_4;
	// System.Single Sirenix.OdinInspector.ProgressBarAttribute::G
	float ___G_5;
	// System.Single Sirenix.OdinInspector.ProgressBarAttribute::B
	float ___B_6;
	// System.Int32 Sirenix.OdinInspector.ProgressBarAttribute::Height
	int32_t ___Height_7;
	// System.String Sirenix.OdinInspector.ProgressBarAttribute::ColorMember
	String_t* ___ColorMember_8;
	// System.String Sirenix.OdinInspector.ProgressBarAttribute::BackgroundColorMember
	String_t* ___BackgroundColorMember_9;
	// System.Boolean Sirenix.OdinInspector.ProgressBarAttribute::Segmented
	bool ___Segmented_10;
	// System.String Sirenix.OdinInspector.ProgressBarAttribute::CustomValueStringMember
	String_t* ___CustomValueStringMember_11;
	// System.Boolean Sirenix.OdinInspector.ProgressBarAttribute::drawValueLabel
	bool ___drawValueLabel_12;
	// UnityEngine.TextAlignment Sirenix.OdinInspector.ProgressBarAttribute::valueLabelAlignment
	int32_t ___valueLabelAlignment_13;
	// System.Boolean Sirenix.OdinInspector.ProgressBarAttribute::<DrawValueLabelHasValue>k__BackingField
	bool ___U3CDrawValueLabelHasValueU3Ek__BackingField_14;
	// System.Boolean Sirenix.OdinInspector.ProgressBarAttribute::<ValueLabelAlignmentHasValue>k__BackingField
	bool ___U3CValueLabelAlignmentHasValueU3Ek__BackingField_15;

public:
	inline static int32_t get_offset_of_Min_0() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___Min_0)); }
	inline double get_Min_0() const { return ___Min_0; }
	inline double* get_address_of_Min_0() { return &___Min_0; }
	inline void set_Min_0(double value)
	{
		___Min_0 = value;
	}

	inline static int32_t get_offset_of_Max_1() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___Max_1)); }
	inline double get_Max_1() const { return ___Max_1; }
	inline double* get_address_of_Max_1() { return &___Max_1; }
	inline void set_Max_1(double value)
	{
		___Max_1 = value;
	}

	inline static int32_t get_offset_of_MinMember_2() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___MinMember_2)); }
	inline String_t* get_MinMember_2() const { return ___MinMember_2; }
	inline String_t** get_address_of_MinMember_2() { return &___MinMember_2; }
	inline void set_MinMember_2(String_t* value)
	{
		___MinMember_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MinMember_2), (void*)value);
	}

	inline static int32_t get_offset_of_MaxMember_3() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___MaxMember_3)); }
	inline String_t* get_MaxMember_3() const { return ___MaxMember_3; }
	inline String_t** get_address_of_MaxMember_3() { return &___MaxMember_3; }
	inline void set_MaxMember_3(String_t* value)
	{
		___MaxMember_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MaxMember_3), (void*)value);
	}

	inline static int32_t get_offset_of_R_4() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___R_4)); }
	inline float get_R_4() const { return ___R_4; }
	inline float* get_address_of_R_4() { return &___R_4; }
	inline void set_R_4(float value)
	{
		___R_4 = value;
	}

	inline static int32_t get_offset_of_G_5() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___G_5)); }
	inline float get_G_5() const { return ___G_5; }
	inline float* get_address_of_G_5() { return &___G_5; }
	inline void set_G_5(float value)
	{
		___G_5 = value;
	}

	inline static int32_t get_offset_of_B_6() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___B_6)); }
	inline float get_B_6() const { return ___B_6; }
	inline float* get_address_of_B_6() { return &___B_6; }
	inline void set_B_6(float value)
	{
		___B_6 = value;
	}

	inline static int32_t get_offset_of_Height_7() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___Height_7)); }
	inline int32_t get_Height_7() const { return ___Height_7; }
	inline int32_t* get_address_of_Height_7() { return &___Height_7; }
	inline void set_Height_7(int32_t value)
	{
		___Height_7 = value;
	}

	inline static int32_t get_offset_of_ColorMember_8() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___ColorMember_8)); }
	inline String_t* get_ColorMember_8() const { return ___ColorMember_8; }
	inline String_t** get_address_of_ColorMember_8() { return &___ColorMember_8; }
	inline void set_ColorMember_8(String_t* value)
	{
		___ColorMember_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ColorMember_8), (void*)value);
	}

	inline static int32_t get_offset_of_BackgroundColorMember_9() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___BackgroundColorMember_9)); }
	inline String_t* get_BackgroundColorMember_9() const { return ___BackgroundColorMember_9; }
	inline String_t** get_address_of_BackgroundColorMember_9() { return &___BackgroundColorMember_9; }
	inline void set_BackgroundColorMember_9(String_t* value)
	{
		___BackgroundColorMember_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundColorMember_9), (void*)value);
	}

	inline static int32_t get_offset_of_Segmented_10() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___Segmented_10)); }
	inline bool get_Segmented_10() const { return ___Segmented_10; }
	inline bool* get_address_of_Segmented_10() { return &___Segmented_10; }
	inline void set_Segmented_10(bool value)
	{
		___Segmented_10 = value;
	}

	inline static int32_t get_offset_of_CustomValueStringMember_11() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___CustomValueStringMember_11)); }
	inline String_t* get_CustomValueStringMember_11() const { return ___CustomValueStringMember_11; }
	inline String_t** get_address_of_CustomValueStringMember_11() { return &___CustomValueStringMember_11; }
	inline void set_CustomValueStringMember_11(String_t* value)
	{
		___CustomValueStringMember_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CustomValueStringMember_11), (void*)value);
	}

	inline static int32_t get_offset_of_drawValueLabel_12() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___drawValueLabel_12)); }
	inline bool get_drawValueLabel_12() const { return ___drawValueLabel_12; }
	inline bool* get_address_of_drawValueLabel_12() { return &___drawValueLabel_12; }
	inline void set_drawValueLabel_12(bool value)
	{
		___drawValueLabel_12 = value;
	}

	inline static int32_t get_offset_of_valueLabelAlignment_13() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___valueLabelAlignment_13)); }
	inline int32_t get_valueLabelAlignment_13() const { return ___valueLabelAlignment_13; }
	inline int32_t* get_address_of_valueLabelAlignment_13() { return &___valueLabelAlignment_13; }
	inline void set_valueLabelAlignment_13(int32_t value)
	{
		___valueLabelAlignment_13 = value;
	}

	inline static int32_t get_offset_of_U3CDrawValueLabelHasValueU3Ek__BackingField_14() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___U3CDrawValueLabelHasValueU3Ek__BackingField_14)); }
	inline bool get_U3CDrawValueLabelHasValueU3Ek__BackingField_14() const { return ___U3CDrawValueLabelHasValueU3Ek__BackingField_14; }
	inline bool* get_address_of_U3CDrawValueLabelHasValueU3Ek__BackingField_14() { return &___U3CDrawValueLabelHasValueU3Ek__BackingField_14; }
	inline void set_U3CDrawValueLabelHasValueU3Ek__BackingField_14(bool value)
	{
		___U3CDrawValueLabelHasValueU3Ek__BackingField_14 = value;
	}

	inline static int32_t get_offset_of_U3CValueLabelAlignmentHasValueU3Ek__BackingField_15() { return static_cast<int32_t>(offsetof(ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585, ___U3CValueLabelAlignmentHasValueU3Ek__BackingField_15)); }
	inline bool get_U3CValueLabelAlignmentHasValueU3Ek__BackingField_15() const { return ___U3CValueLabelAlignmentHasValueU3Ek__BackingField_15; }
	inline bool* get_address_of_U3CValueLabelAlignmentHasValueU3Ek__BackingField_15() { return &___U3CValueLabelAlignmentHasValueU3Ek__BackingField_15; }
	inline void set_U3CValueLabelAlignmentHasValueU3Ek__BackingField_15(bool value)
	{
		___U3CValueLabelAlignmentHasValueU3Ek__BackingField_15 = value;
	}
};


// Sirenix.OdinInspector.RequiredAttribute
struct  RequiredAttribute_t0D25485F34E769C08AF7AFFB831AB03045584B56  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.RequiredAttribute::ErrorMessage
	String_t* ___ErrorMessage_0;
	// Sirenix.OdinInspector.InfoMessageType Sirenix.OdinInspector.RequiredAttribute::MessageType
	int32_t ___MessageType_1;

public:
	inline static int32_t get_offset_of_ErrorMessage_0() { return static_cast<int32_t>(offsetof(RequiredAttribute_t0D25485F34E769C08AF7AFFB831AB03045584B56, ___ErrorMessage_0)); }
	inline String_t* get_ErrorMessage_0() const { return ___ErrorMessage_0; }
	inline String_t** get_address_of_ErrorMessage_0() { return &___ErrorMessage_0; }
	inline void set_ErrorMessage_0(String_t* value)
	{
		___ErrorMessage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ErrorMessage_0), (void*)value);
	}

	inline static int32_t get_offset_of_MessageType_1() { return static_cast<int32_t>(offsetof(RequiredAttribute_t0D25485F34E769C08AF7AFFB831AB03045584B56, ___MessageType_1)); }
	inline int32_t get_MessageType_1() const { return ___MessageType_1; }
	inline int32_t* get_address_of_MessageType_1() { return &___MessageType_1; }
	inline void set_MessageType_1(int32_t value)
	{
		___MessageType_1 = value;
	}
};


// Sirenix.OdinInspector.ResponsiveButtonGroupAttribute
struct  ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// Sirenix.OdinInspector.ButtonSizes Sirenix.OdinInspector.ResponsiveButtonGroupAttribute::DefaultButtonSize
	int32_t ___DefaultButtonSize_3;
	// System.Boolean Sirenix.OdinInspector.ResponsiveButtonGroupAttribute::UniformLayout
	bool ___UniformLayout_4;

public:
	inline static int32_t get_offset_of_DefaultButtonSize_3() { return static_cast<int32_t>(offsetof(ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492, ___DefaultButtonSize_3)); }
	inline int32_t get_DefaultButtonSize_3() const { return ___DefaultButtonSize_3; }
	inline int32_t* get_address_of_DefaultButtonSize_3() { return &___DefaultButtonSize_3; }
	inline void set_DefaultButtonSize_3(int32_t value)
	{
		___DefaultButtonSize_3 = value;
	}

	inline static int32_t get_offset_of_UniformLayout_4() { return static_cast<int32_t>(offsetof(ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492, ___UniformLayout_4)); }
	inline bool get_UniformLayout_4() const { return ___UniformLayout_4; }
	inline bool* get_address_of_UniformLayout_4() { return &___UniformLayout_4; }
	inline void set_UniformLayout_4(bool value)
	{
		___UniformLayout_4 = value;
	}
};


// Sirenix.OdinInspector.TitleAttribute
struct  TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.TitleAttribute::Title
	String_t* ___Title_0;
	// System.String Sirenix.OdinInspector.TitleAttribute::Subtitle
	String_t* ___Subtitle_1;
	// System.Boolean Sirenix.OdinInspector.TitleAttribute::Bold
	bool ___Bold_2;
	// System.Boolean Sirenix.OdinInspector.TitleAttribute::HorizontalLine
	bool ___HorizontalLine_3;
	// Sirenix.OdinInspector.TitleAlignments Sirenix.OdinInspector.TitleAttribute::TitleAlignment
	int32_t ___TitleAlignment_4;

public:
	inline static int32_t get_offset_of_Title_0() { return static_cast<int32_t>(offsetof(TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2, ___Title_0)); }
	inline String_t* get_Title_0() const { return ___Title_0; }
	inline String_t** get_address_of_Title_0() { return &___Title_0; }
	inline void set_Title_0(String_t* value)
	{
		___Title_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Title_0), (void*)value);
	}

	inline static int32_t get_offset_of_Subtitle_1() { return static_cast<int32_t>(offsetof(TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2, ___Subtitle_1)); }
	inline String_t* get_Subtitle_1() const { return ___Subtitle_1; }
	inline String_t** get_address_of_Subtitle_1() { return &___Subtitle_1; }
	inline void set_Subtitle_1(String_t* value)
	{
		___Subtitle_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Subtitle_1), (void*)value);
	}

	inline static int32_t get_offset_of_Bold_2() { return static_cast<int32_t>(offsetof(TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2, ___Bold_2)); }
	inline bool get_Bold_2() const { return ___Bold_2; }
	inline bool* get_address_of_Bold_2() { return &___Bold_2; }
	inline void set_Bold_2(bool value)
	{
		___Bold_2 = value;
	}

	inline static int32_t get_offset_of_HorizontalLine_3() { return static_cast<int32_t>(offsetof(TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2, ___HorizontalLine_3)); }
	inline bool get_HorizontalLine_3() const { return ___HorizontalLine_3; }
	inline bool* get_address_of_HorizontalLine_3() { return &___HorizontalLine_3; }
	inline void set_HorizontalLine_3(bool value)
	{
		___HorizontalLine_3 = value;
	}

	inline static int32_t get_offset_of_TitleAlignment_4() { return static_cast<int32_t>(offsetof(TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2, ___TitleAlignment_4)); }
	inline int32_t get_TitleAlignment_4() const { return ___TitleAlignment_4; }
	inline int32_t* get_address_of_TitleAlignment_4() { return &___TitleAlignment_4; }
	inline void set_TitleAlignment_4(int32_t value)
	{
		___TitleAlignment_4 = value;
	}
};


// Sirenix.OdinInspector.TitleGroupAttribute
struct  TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2  : public PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC
{
public:
	// System.String Sirenix.OdinInspector.TitleGroupAttribute::Subtitle
	String_t* ___Subtitle_3;
	// Sirenix.OdinInspector.TitleAlignments Sirenix.OdinInspector.TitleGroupAttribute::Alignment
	int32_t ___Alignment_4;
	// System.Boolean Sirenix.OdinInspector.TitleGroupAttribute::HorizontalLine
	bool ___HorizontalLine_5;
	// System.Boolean Sirenix.OdinInspector.TitleGroupAttribute::BoldTitle
	bool ___BoldTitle_6;
	// System.Boolean Sirenix.OdinInspector.TitleGroupAttribute::Indent
	bool ___Indent_7;

public:
	inline static int32_t get_offset_of_Subtitle_3() { return static_cast<int32_t>(offsetof(TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2, ___Subtitle_3)); }
	inline String_t* get_Subtitle_3() const { return ___Subtitle_3; }
	inline String_t** get_address_of_Subtitle_3() { return &___Subtitle_3; }
	inline void set_Subtitle_3(String_t* value)
	{
		___Subtitle_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Subtitle_3), (void*)value);
	}

	inline static int32_t get_offset_of_Alignment_4() { return static_cast<int32_t>(offsetof(TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2, ___Alignment_4)); }
	inline int32_t get_Alignment_4() const { return ___Alignment_4; }
	inline int32_t* get_address_of_Alignment_4() { return &___Alignment_4; }
	inline void set_Alignment_4(int32_t value)
	{
		___Alignment_4 = value;
	}

	inline static int32_t get_offset_of_HorizontalLine_5() { return static_cast<int32_t>(offsetof(TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2, ___HorizontalLine_5)); }
	inline bool get_HorizontalLine_5() const { return ___HorizontalLine_5; }
	inline bool* get_address_of_HorizontalLine_5() { return &___HorizontalLine_5; }
	inline void set_HorizontalLine_5(bool value)
	{
		___HorizontalLine_5 = value;
	}

	inline static int32_t get_offset_of_BoldTitle_6() { return static_cast<int32_t>(offsetof(TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2, ___BoldTitle_6)); }
	inline bool get_BoldTitle_6() const { return ___BoldTitle_6; }
	inline bool* get_address_of_BoldTitle_6() { return &___BoldTitle_6; }
	inline void set_BoldTitle_6(bool value)
	{
		___BoldTitle_6 = value;
	}

	inline static int32_t get_offset_of_Indent_7() { return static_cast<int32_t>(offsetof(TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2, ___Indent_7)); }
	inline bool get_Indent_7() const { return ___Indent_7; }
	inline bool* get_address_of_Indent_7() { return &___Indent_7; }
	inline void set_Indent_7(bool value)
	{
		___Indent_7 = value;
	}
};


// Sirenix.OdinInspector.ValidateInputAttribute
struct  ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C  : public Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71
{
public:
	// System.String Sirenix.OdinInspector.ValidateInputAttribute::DefaultMessage
	String_t* ___DefaultMessage_0;
	// System.String Sirenix.OdinInspector.ValidateInputAttribute::MemberName
	String_t* ___MemberName_1;
	// Sirenix.OdinInspector.InfoMessageType Sirenix.OdinInspector.ValidateInputAttribute::MessageType
	int32_t ___MessageType_2;
	// System.Boolean Sirenix.OdinInspector.ValidateInputAttribute::IncludeChildren
	bool ___IncludeChildren_3;
	// System.Boolean Sirenix.OdinInspector.ValidateInputAttribute::ContinuousValidationCheck
	bool ___ContinuousValidationCheck_4;

public:
	inline static int32_t get_offset_of_DefaultMessage_0() { return static_cast<int32_t>(offsetof(ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C, ___DefaultMessage_0)); }
	inline String_t* get_DefaultMessage_0() const { return ___DefaultMessage_0; }
	inline String_t** get_address_of_DefaultMessage_0() { return &___DefaultMessage_0; }
	inline void set_DefaultMessage_0(String_t* value)
	{
		___DefaultMessage_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DefaultMessage_0), (void*)value);
	}

	inline static int32_t get_offset_of_MemberName_1() { return static_cast<int32_t>(offsetof(ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C, ___MemberName_1)); }
	inline String_t* get_MemberName_1() const { return ___MemberName_1; }
	inline String_t** get_address_of_MemberName_1() { return &___MemberName_1; }
	inline void set_MemberName_1(String_t* value)
	{
		___MemberName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MemberName_1), (void*)value);
	}

	inline static int32_t get_offset_of_MessageType_2() { return static_cast<int32_t>(offsetof(ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C, ___MessageType_2)); }
	inline int32_t get_MessageType_2() const { return ___MessageType_2; }
	inline int32_t* get_address_of_MessageType_2() { return &___MessageType_2; }
	inline void set_MessageType_2(int32_t value)
	{
		___MessageType_2 = value;
	}

	inline static int32_t get_offset_of_IncludeChildren_3() { return static_cast<int32_t>(offsetof(ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C, ___IncludeChildren_3)); }
	inline bool get_IncludeChildren_3() const { return ___IncludeChildren_3; }
	inline bool* get_address_of_IncludeChildren_3() { return &___IncludeChildren_3; }
	inline void set_IncludeChildren_3(bool value)
	{
		___IncludeChildren_3 = value;
	}

	inline static int32_t get_offset_of_ContinuousValidationCheck_4() { return static_cast<int32_t>(offsetof(ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C, ___ContinuousValidationCheck_4)); }
	inline bool get_ContinuousValidationCheck_4() const { return ___ContinuousValidationCheck_4; }
	inline bool* get_address_of_ContinuousValidationCheck_4() { return &___ContinuousValidationCheck_4; }
	inline void set_ContinuousValidationCheck_4(bool value)
	{
		___ContinuousValidationCheck_4 = value;
	}
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct  ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.Func`2<System.String,System.String>
struct  Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A  : public MulticastDelegate_t
{
public:

public:
};


// System.NotImplementedException
struct  NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// System.ArgumentNullException
struct  ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared (Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared (RuntimeObject* ___source0, Func_2_tFF5BB8F40A35B1BEA00D4EBBC6CBE7184A584436 * ___selector1, const RuntimeMethod* method);
// !!0[] System.Linq.Enumerable::ToArray<System.Object>(System.Collections.Generic.IEnumerable`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared (RuntimeObject* ___source0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);

// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1 (Attribute_t037CA9D9F3B742C063DB364D2EEBBF9FC5772C71 * __this, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Void System.Func`2<System.String,System.String>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_2__ctor_mA7F3C5A0612B84E910DE92E77BA95101FD68EEDB_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<!!1> System.Linq.Enumerable::Select<System.String,System.String>(System.Collections.Generic.IEnumerable`1<!!0>,System.Func`2<!!0,!!1>)
inline RuntimeObject* Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A (RuntimeObject* ___source0, Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_mC0F1DA980E0433D70A6CF9DD7CD1942BB7FE87C0_gshared)(___source0, ___selector1, method);
}
// !!0[] System.Linq.Enumerable::ToArray<System.String>(System.Collections.Generic.IEnumerable`1<!!0>)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToArray_TisRuntimeObject_m21E15191FE8BDBAE753CC592A1DB55EA3BCE7B5B_gshared)(___source0, method);
}
// System.String System.String::Join(System.String,System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_m8846EB11F0A221BDE237DE041D17764B36065404 (String_t* ___separator0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.PropertyGroupAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9 (PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * __this, String_t* ___groupId0, int32_t ___order1, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.BoxGroupAttribute::.ctor(System.String,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGroupAttribute__ctor_mB5B6AC9D01DADB472F55A3BD84C21ECF271D7B4F (BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 * __this, String_t* ___group0, bool ___showLabel1, bool ___centerLabel2, int32_t ___order3, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.ShowInInspectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815 (ShowInInspectorAttribute_t32120F244A3048FD51028573FF8746BEFCCCB188 * __this, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.FoldoutGroupAttribute::set_HasDefinedExpanded(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FoldoutGroupAttribute_set_HasDefinedExpanded_m98272DEF7B7D714E36B5892F889A8F202B00F20D_inline (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, bool ___value0, const RuntimeMethod* method);
// System.Boolean Sirenix.OdinInspector.FoldoutGroupAttribute::get_HasDefinedExpanded()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FoldoutGroupAttribute_get_HasDefinedExpanded_m41084838D0A68661A102ECCEF4826D5DBA024344_inline (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Boolean System.String::IsNullOrEmpty(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C (String_t* ___value0, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.PropertyGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGroupAttribute__ctor_m74A2FCCC6D4DAFB70F9D1EA925F9B5C8BB6FB61D (PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * __this, String_t* ___groupId0, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.HorizontalGroupAttribute::.ctor(System.String,System.Single,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalGroupAttribute__ctor_m52E9BD04196BE6FCF84C1E1332308E62C4B62389 (HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 * __this, String_t* ___group0, float ___width1, int32_t ___marginLeft2, int32_t ___marginRight3, int32_t ___order4, const RuntimeMethod* method);
// System.Single System.Math::Max(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247 (float ___val10, float ___val21, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.InlineButtonAttribute::set_MemberMethod(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InlineButtonAttribute_set_MemberMethod_m619A94311DBD787E9131455963124FA25F128F25_inline (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.InlineButtonAttribute::set_Label(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InlineButtonAttribute_set_Label_mC1EAAFF971977500FF109434616DBA49DCC3C6FC_inline (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, String_t* ___value0, const RuntimeMethod* method);
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83 (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * __this, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.InlineEditorAttribute::.ctor(Sirenix.OdinInspector.InlineEditorModes,Sirenix.OdinInspector.InlineEditorObjectFieldModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineEditorAttribute__ctor_m0D73D4171968AA3A711238B2650A8D06B5B0DC79 (InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5 * __this, int32_t ___inlineEditorMode0, int32_t ___objectFieldMode1, const RuntimeMethod* method);
// System.Int32 System.Math::Max(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::set_DrawValueLabelHasValue(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProgressBarAttribute_set_DrawValueLabelHasValue_mF4C3B8DA89DC37B0D7C7B18A83EF2D607A0DDFE3_inline (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::set_ValueLabelAlignmentHasValue(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProgressBarAttribute_set_ValueLabelAlignmentHasValue_m4B691E533F455B0960D0745ED6414FC3F2CDBB39_inline (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, bool ___value0, const RuntimeMethod* method);
// System.Int32 System.String::LastIndexOf(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826 (String_t* __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method);
// System.String System.String::Substring(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190 (String_t* __this, int32_t ___startIndex0, const RuntimeMethod* method);
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97 (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Int32 System.Math::Min(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574 (int32_t ___val10, int32_t ___val21, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.TabGroupAttribute::.ctor(System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabGroupAttribute__ctor_mCC569AB49EC9077F27B371438E672F74BD76D585 (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, String_t* ___group0, String_t* ___tab1, bool ___useFixedHeight2, int32_t ___order3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::.ctor()
inline void List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void Sirenix.OdinInspector.TabGroupAttribute::set_Tabs(System.Collections.Generic.List`1<System.String>)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TabGroupAttribute_set_Tabs_mC45CEA7FCC41496D6A0B0586A14D3953918139E3_inline (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method);
// System.Collections.Generic.List`1<System.String> Sirenix.OdinInspector.TabGroupAttribute::get_Tabs()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103_inline (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.String>::Add(!0)
inline void List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<System.String>::.ctor(System.Collections.Generic.IEnumerable`1<!0>)
inline void List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323 (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, RuntimeObject*, const RuntimeMethod*))List_1__ctor_m1D864B65CCD0498EC4BFFBDA8F8D04AE5333195A_gshared)(__this, ___collection0, method);
}
// System.Void Sirenix.OdinInspector.PropertyGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGroupAttribute_CombineValuesWith_m0C8EF6AF705FB92845DC8CC8458C508C3FC653F7 (PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.String>::Contains(!0)
inline bool List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, String_t* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, String_t*, const RuntimeMethod*))List_1_Contains_m99C700668AC6D272188471D2D6B784A2B5636C8E_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.List`1<System.String>::get_Count()
inline int32_t List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Sirenix.OdinInspector.PropertyGroupAttribute>::.ctor(System.Int32)
inline void List_1__ctor_mBCA6BA07CA772E0A0725055E7BB85526110A238E (List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.String>::GetEnumerator()
inline Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  (*) (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *, const RuntimeMethod*))List_1_GetEnumerator_m1739A5E25DF502A6984F9B98CFCAC2D3FABCF233_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<System.String>::get_Current()
inline String_t* Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline)(__this, method);
}
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.TabGroupAttribute/TabSubGroupAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabSubGroupAttribute__ctor_mA7DBEA9B673F62C5C40FC1586460360AE12693E6 (TabSubGroupAttribute_tCD5574179789F2FFC2F6FE36AFF617C134B07874 * __this, String_t* ___groupId0, int32_t ___order1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Sirenix.OdinInspector.PropertyGroupAttribute>::Add(!0)
inline void List_1_Add_m1D45B1E8B37CFAA4312157DCC87E105ECAE6C611 (List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA *, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.String>::MoveNext()
inline bool Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<System.String>::Dispose()
inline void Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7 (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void Sirenix.OdinInspector.ToggleGroupAttribute::.ctor(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGroupAttribute__ctor_m2381FF18367F1C1683013F6809D1A003B770C246 (ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * __this, String_t* ___toggleMemberName0, int32_t ___order1, String_t* ___groupTitle2, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.ValueDropdownItem::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDropdownItem__ctor_m3CF0B98597DA39E12F301BDB6A058D09D7794D19 (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, String_t* ___text0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.String System.String::Concat(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mD3809D54FDAC43AA11084A9FE53165D57A6153FF (RuntimeObject * ___arg00, const RuntimeMethod* method);
// System.String Sirenix.OdinInspector.ValueDropdownItem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueDropdownItem_ToString_mDED809527ED8247BA7131BD30EF12C269E0E8121 (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, const RuntimeMethod* method);
// System.String Sirenix.OdinInspector.ValueDropdownItem::Sirenix.OdinInspector.IValueDropdownItem.GetText()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetText_m69EBC615E160AA9660D5112EE2474B59C32C6EEC_inline (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, const RuntimeMethod* method);
// System.Object Sirenix.OdinInspector.ValueDropdownItem::Sirenix.OdinInspector.IValueDropdownItem.GetValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetValue_mE3EC4570A8482C58D049AFF9F76B1CF030BC9A9B_inline (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.VerticalGroupAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalGroupAttribute__ctor_m4CEB61D831D18E38AFF54A13BA68BBE1CA0C90A8 (VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * __this, String_t* ___groupId0, int32_t ___order1, const RuntimeMethod* method);
// System.Void Sirenix.OdinInspector.AssetSelectorAttribute/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5F52AD259E24BEFB6F61CEB57F55A478992D8ABA (U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 * __this, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.String System.String::Trim()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2 (String_t* __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.AssetListAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetListAttribute__ctor_m071B9752052734E905BDB0CF160660DABEAEE330 (AssetListAttribute_t61E5A8D1347132FDB958178B0743FF2CF80131BF * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		__this->set_AutoPopulate_0((bool)0);
		__this->set_Tags_1((String_t*)NULL);
		__this->set_LayerNames_2((String_t*)NULL);
		__this->set_AssetNamePrefix_3((String_t*)NULL);
		__this->set_CustomFilterMethod_5((String_t*)NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.AssetSelectorAttribute::set_Paths(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetSelectorAttribute_set_Paths_mE8FB06A16BE7C529ADC8B6E413163C1D99CDCCBB (AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetSelectorAttribute_set_Paths_mE8FB06A16BE7C529ADC8B6E413163C1D99CDCCBB_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * G_B2_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B2_1 = NULL;
	AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096 * G_B2_2 = NULL;
	Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * G_B1_0 = NULL;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* G_B1_1 = NULL;
	AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096 * G_B1_2 = NULL;
	{
		String_t* L_0 = ___value0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_1 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)124));
		NullCheck(L_0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_0, L_2, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_il2cpp_TypeInfo_var);
		Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_4 = ((U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_il2cpp_TypeInfo_var))->get_U3CU3E9__12_0_1();
		Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_5 = L_4;
		G_B1_0 = L_5;
		G_B1_1 = L_3;
		G_B1_2 = __this;
		if (L_5)
		{
			G_B2_0 = L_5;
			G_B2_1 = L_3;
			G_B2_2 = __this;
			goto IL_0031;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_il2cpp_TypeInfo_var);
		U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 * L_6 = ((U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_7 = (Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A *)il2cpp_codegen_object_new(Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A_il2cpp_TypeInfo_var);
		Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E(L_7, L_6, (intptr_t)((intptr_t)U3CU3Ec_U3Cset_PathsU3Eb__12_0_m35A081627585DE3088EDD8A01D7CA18E7129EF97_RuntimeMethod_var), /*hidden argument*/Func_2__ctor_m22403E6E9EC24A3D8103D29D9D66B5EEEA0AC69E_RuntimeMethod_var);
		Func_2_t5FF29EF71496B6AFA2C5B7FF601B0EFA1C47A41A * L_8 = L_7;
		((U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_il2cpp_TypeInfo_var))->set_U3CU3E9__12_0_1(L_8);
		G_B2_0 = L_8;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0031:
	{
		RuntimeObject* L_9 = Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A((RuntimeObject*)(RuntimeObject*)G_B2_1, G_B2_0, /*hidden argument*/Enumerable_Select_TisString_t_TisString_t_m5E54BE921E960B9AB33FE013CF7ECB8D1CF24A1A_RuntimeMethod_var);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_10 = Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582(L_9, /*hidden argument*/Enumerable_ToArray_TisString_t_mE824E1F8EB2A50DC8E24291957CBEED8C356E582_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->set_SearchInFolders_9(L_10);
		return;
	}
}
// System.String Sirenix.OdinInspector.AssetSelectorAttribute::get_Paths()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AssetSelectorAttribute_get_Paths_m3A2B3F73CF3D73C0B82FC48AB2CE4E9BEBAA2E1C (AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AssetSelectorAttribute_get_Paths_m3A2B3F73CF3D73C0B82FC48AB2CE4E9BEBAA2E1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_0 = __this->get_SearchInFolders_9();
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = __this->get_SearchInFolders_9();
		String_t* L_2 = String_Join_m8846EB11F0A221BDE237DE041D17764B36065404(_stringLiteralC18C9BB6DF0D5C60CE5A5D2D3D6111BEB6F8CCEB, L_1, /*hidden argument*/NULL);
		return L_2;
	}

IL_0019:
	{
		return (String_t*)NULL;
	}
}
// System.Void Sirenix.OdinInspector.AssetSelectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetSelectorAttribute__ctor_mBBDE88ED84C343FB64AF117A680FE38C34E8EC22 (AssetSelectorAttribute_t2409922F29472DEE2BB155FC447B3007F2846096 * __this, const RuntimeMethod* method)
{
	{
		__this->set_IsUniqueList_0((bool)1);
		__this->set_DrawDropdownForListElements_1((bool)1);
		__this->set_ExpandAllMenuItems_4((bool)1);
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.AssetsOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AssetsOnlyAttribute__ctor_mFCBC2DE62D2A3CADAFC3260DC6C2102FCAF28067 (AssetsOnlyAttribute_t4B998F8AD66F2A00BEEB3E219675169C703792A1 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.BoxGroupAttribute::.ctor(System.String,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGroupAttribute__ctor_mB5B6AC9D01DADB472F55A3BD84C21ECF271D7B4F (BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 * __this, String_t* ___group0, bool ___showLabel1, bool ___centerLabel2, int32_t ___order3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___group0;
		int32_t L_1 = ___order3;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___showLabel1;
		__this->set_ShowLabel_3(L_2);
		bool L_3 = ___centerLabel2;
		__this->set_CenterLabel_4(L_3);
		return;
	}
}
// System.Void Sirenix.OdinInspector.BoxGroupAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGroupAttribute__ctor_mF2EBBC8847BA081A52BEBB0C08C1D10C37FBDB9B (BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoxGroupAttribute__ctor_mF2EBBC8847BA081A52BEBB0C08C1D10C37FBDB9B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		BoxGroupAttribute__ctor_mB5B6AC9D01DADB472F55A3BD84C21ECF271D7B4F(__this, _stringLiteral7F87C5EE8E2AF3096FEB1F359E7640DC822F9ACD, (bool)0, (bool)0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.BoxGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoxGroupAttribute_CombineValuesWith_m70F4A55A14D1AC27892814F928CB28CF42DFCB04 (BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (BoxGroupAttribute_CombineValuesWith_m70F4A55A14D1AC27892814F928CB28CF42DFCB04_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 * V_0 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		V_0 = ((BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 *)IsInstClass((RuntimeObject*)L_0, BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6_il2cpp_TypeInfo_var));
		bool L_1 = __this->get_ShowLabel_3();
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 * L_2 = V_0;
		NullCheck(L_2);
		bool L_3 = L_2->get_ShowLabel_3();
		if (L_3)
		{
			goto IL_0025;
		}
	}

IL_0017:
	{
		__this->set_ShowLabel_3((bool)0);
		BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 * L_4 = V_0;
		NullCheck(L_4);
		L_4->set_ShowLabel_3((bool)0);
	}

IL_0025:
	{
		bool L_5 = __this->get_CenterLabel_4();
		BoxGroupAttribute_t3D76C73061D88E4E76C169B1708ED09540E015C6 * L_6 = V_0;
		NullCheck(L_6);
		bool L_7 = L_6->get_CenterLabel_4();
		__this->set_CenterLabel_4((bool)((int32_t)((int32_t)L_5|(int32_t)L_7)));
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ButtonAttribute::set_DrawResult(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute_set_DrawResult_m2D14FA871EE3C84C8AD05482E8C55E3AEB42C4ED (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_drawResult_4(L_0);
		__this->set_drawResultIsSet_5((bool)1);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ButtonAttribute::get_DrawResult()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonAttribute_get_DrawResult_m2C1A577595417B636DF8FAA288454827A9D4AC5E (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_drawResult_4();
		return L_0;
	}
}
// System.Boolean Sirenix.OdinInspector.ButtonAttribute::get_DrawResultIsSet()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ButtonAttribute_get_DrawResultIsSet_m0488087E502D424AEF093F0B8E9304995F03C0A4 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_drawResultIsSet_5();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m19DEAD4D5ACF52022C4AA9C7BBB8D60A45B1F23C (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		__this->set_Name_1((String_t*)NULL);
		__this->set_ButtonHeight_0(0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(Sirenix.OdinInspector.ButtonSizes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m4B3C38C7B906D7C59F0AF8AFDA993402D6F3D997 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, int32_t ___size0, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		__this->set_Name_1((String_t*)NULL);
		int32_t L_0 = ___size0;
		__this->set_ButtonHeight_0(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m0AA9021E995407DA90022B5E9AAE2D2E1B37FD87 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, int32_t ___buttonSize0, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___buttonSize0;
		__this->set_ButtonHeight_0(L_0);
		__this->set_Name_1((String_t*)NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m54A8D0957F3623C5E6D191DE5458E17FE0ECB855 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, String_t* ___name0, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_1(L_0);
		__this->set_ButtonHeight_0(0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(System.String,Sirenix.OdinInspector.ButtonSizes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_mAEA708487110ED7D100B7FFFA37A21F91BB14804 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, String_t* ___name0, int32_t ___buttonSize1, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_1(L_0);
		int32_t L_1 = ___buttonSize1;
		__this->set_ButtonHeight_0(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_mBF84C8BBE7501A84DE228EF8E8FCC6F4875659B0 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, String_t* ___name0, int32_t ___buttonSize1, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_1(L_0);
		int32_t L_1 = ___buttonSize1;
		__this->set_ButtonHeight_0(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(Sirenix.OdinInspector.ButtonStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m0FB8A84E5C0680713BF03E4B4E688FFE2204F7BA (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, int32_t ___parameterBtnStyle0, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		__this->set_Name_1((String_t*)NULL);
		__this->set_ButtonHeight_0(0);
		int32_t L_0 = ___parameterBtnStyle0;
		__this->set_Style_2(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(System.Int32,Sirenix.OdinInspector.ButtonStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m74E69DF5806F8063B97B35270E3688B0BCEACF65 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, int32_t ___buttonSize0, int32_t ___parameterBtnStyle1, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___buttonSize0;
		__this->set_ButtonHeight_0(L_0);
		__this->set_Name_1((String_t*)NULL);
		int32_t L_1 = ___parameterBtnStyle1;
		__this->set_Style_2(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(Sirenix.OdinInspector.ButtonSizes,Sirenix.OdinInspector.ButtonStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_mA6709B9CF4349D0CF6FA16A53269215801E51ACB (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, int32_t ___size0, int32_t ___parameterBtnStyle1, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___size0;
		__this->set_ButtonHeight_0(L_0);
		__this->set_Name_1((String_t*)NULL);
		int32_t L_1 = ___parameterBtnStyle1;
		__this->set_Style_2(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(System.String,Sirenix.OdinInspector.ButtonStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m1D078810D721A5F2336F1EAE29C50AA7E88E6167 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, String_t* ___name0, int32_t ___parameterBtnStyle1, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_1(L_0);
		__this->set_ButtonHeight_0(0);
		int32_t L_1 = ___parameterBtnStyle1;
		__this->set_Style_2(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(System.String,Sirenix.OdinInspector.ButtonSizes,Sirenix.OdinInspector.ButtonStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m9E7AD33EB511F31D47E787E5E53F285AAEE3D56C (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, String_t* ___name0, int32_t ___buttonSize1, int32_t ___parameterBtnStyle2, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_1(L_0);
		int32_t L_1 = ___buttonSize1;
		__this->set_ButtonHeight_0(L_1);
		int32_t L_2 = ___parameterBtnStyle2;
		__this->set_Style_2(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ButtonAttribute::.ctor(System.String,System.Int32,Sirenix.OdinInspector.ButtonStyle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonAttribute__ctor_m05C431E68F343382EB1EF63CAC2774898B624E60 (ButtonAttribute_tF0C241F1194F99A88B211F7CE931C71456DA8A47 * __this, String_t* ___name0, int32_t ___buttonSize1, int32_t ___parameterBtnStyle2, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___name0;
		__this->set_Name_1(L_0);
		int32_t L_1 = ___buttonSize1;
		__this->set_ButtonHeight_0(L_1);
		int32_t L_2 = ___parameterBtnStyle2;
		__this->set_Style_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ButtonGroupAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonGroupAttribute__ctor_mA25D2DCE26F8284B65625CF8EDDBAEE6F8B92006 (ButtonGroupAttribute_tDC19026AD744C75F907B2B44C890011F39CC5355 * __this, String_t* ___group0, int32_t ___order1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___group0;
		int32_t L_1 = ___order1;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ChildGameObjectsOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChildGameObjectsOnlyAttribute__ctor_m1249188B708E40971E7E59C0D2E5B397DDDAC300 (ChildGameObjectsOnlyAttribute_t99ADCD6484122DF797B717FD12EDD9F5E1AC478A * __this, const RuntimeMethod* method)
{
	{
		__this->set_IncludeSelf_0((bool)1);
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ColorPaletteAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPaletteAttribute__ctor_mD21E5F76244BABB6F135197EAF755AB614B9D558 (ColorPaletteAttribute_t4A81C5208D921F284CFB229A7725EC96DFD8E5B5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		__this->set_PaletteName_0((String_t*)NULL);
		__this->set_ShowAlpha_1((bool)1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ColorPaletteAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorPaletteAttribute__ctor_m74E696779B5BAAD93F32C6BFFA0831286074B0A1 (ColorPaletteAttribute_t4A81C5208D921F284CFB229A7725EC96DFD8E5B5 * __this, String_t* ___paletteName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___paletteName0;
		__this->set_PaletteName_0(L_0);
		__this->set_ShowAlpha_1((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.CustomContextMenuAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomContextMenuAttribute__ctor_m800168244C8A5617A0A610CC1F07AEF26DEC2EFD (CustomContextMenuAttribute_t70FD6594A1970EA3D164B840161CBC3E8E600EB7 * __this, String_t* ___menuItem0, String_t* ___methodName1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___menuItem0;
		__this->set_MenuItem_0(L_0);
		String_t* L_1 = ___methodName1;
		__this->set_MethodName_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.CustomValueDrawerAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CustomValueDrawerAttribute__ctor_m65EE8F9C535AECF39F2F7C275D0943D4CB3A3EB7 (CustomValueDrawerAttribute_tE49F17D7241B5B464D8456B163F8C56923917D60 * __this, String_t* ___methodName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___methodName0;
		__this->set_MethodName_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DelayedPropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DelayedPropertyAttribute__ctor_m2A1F7CEE1BCAA67217C918B3966C325E360FE170 (DelayedPropertyAttribute_t3B9B78F65E2D6939F7B61C7410ADFF395DCA7C89 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DetailedInfoBoxAttribute::.ctor(System.String,System.String,Sirenix.OdinInspector.InfoMessageType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DetailedInfoBoxAttribute__ctor_mC4B48BD8A28035D485CBFFDEAE586DCC7B37FD6E (DetailedInfoBoxAttribute_t2AE8658829B606862E843757085ADD8A0DE19907 * __this, String_t* ___message0, String_t* ___details1, int32_t ___infoMessageType2, String_t* ___visibleIf3, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___message0;
		__this->set_Message_0(L_0);
		String_t* L_1 = ___details1;
		__this->set_Details_1(L_1);
		int32_t L_2 = ___infoMessageType2;
		__this->set_InfoMessageType_2(L_2);
		String_t* L_3 = ___visibleIf3;
		__this->set_VisibleIf_3(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DictionaryDrawerSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DictionaryDrawerSettings__ctor_mD5A1224F5E7A01C37C4C8943694D10187C7EBA6D (DictionaryDrawerSettings_tAA898EA1B98F778FB5A03EA7996CAC669B0ED434 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (DictionaryDrawerSettings__ctor_mD5A1224F5E7A01C37C4C8943694D10187C7EBA6D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_KeyLabel_0(_stringLiteralB720A9AE58815DFF5576319E5228D318E7899C07);
		__this->set_ValueLabel_1(_stringLiteral86FADB31129B6F40C720A97600D69389EA3567E3);
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableContextMenuAttribute::.ctor(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableContextMenuAttribute__ctor_mFC1C01AE0FDBD966E94BD409849A742C1B889D35 (DisableContextMenuAttribute_t488F1D54F6C91D1C17BC2365B993D84CD19C9A86 * __this, bool ___disableForMember0, bool ___disableCollectionElements1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___disableForMember0;
		__this->set_DisableForMember_0(L_0);
		bool L_1 = ___disableCollectionElements1;
		__this->set_DisableForCollectionElements_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableIfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableIfAttribute__ctor_m308AF01FDFEABC2E2C8CAA49C3B5C7E5A24D0B49 (DisableIfAttribute_t5699C1C9B82D9CE13598B7757457BB439454FA27 * __this, String_t* ___memberName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.DisableIfAttribute::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableIfAttribute__ctor_mBF9F47813A54F4D18AD27FE1E898685AD3289E0F (DisableIfAttribute_t5699C1C9B82D9CE13598B7757457BB439454FA27 * __this, String_t* ___memberName0, RuntimeObject * ___optionalValue1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		RuntimeObject * L_1 = ___optionalValue1;
		__this->set_Value_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableInEditorModeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInEditorModeAttribute__ctor_mC892FCC9AA72706CD3A134E574F6283EAF19BA7C (DisableInEditorModeAttribute_t97721B0DDF6E7AACEE6E726D671175D580E39ACB * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableInInlineEditorsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInInlineEditorsAttribute__ctor_m9081E395B9762CD3BF909A2A17B509532A6E647D (DisableInInlineEditorsAttribute_tBD42DA94EF0C7EF5E8CBFCF9F7BF6EBA4BDDA0B7 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableInNonPrefabsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInNonPrefabsAttribute__ctor_m2942FF284BE24963611A26AB9756606C97893F0E (DisableInNonPrefabsAttribute_t4E2DCCE8E14E9DB3F1875BA677CBFB5FBCA3B5B1 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableInPlayModeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInPlayModeAttribute__ctor_m5427E4A8CEEE94CCE112E3734167BFC71C57A1BC (DisableInPlayModeAttribute_tF2DB70F76C4B9EEB1D6C22CA518534792D7D31F5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableInPrefabAssetsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInPrefabAssetsAttribute__ctor_m348666EB6FEA6CC55D2353A92EBCA96FAE3B2B92 (DisableInPrefabAssetsAttribute_t9D1E468944E87537B18601EAD10CB765FE0A24C3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableInPrefabInstancesAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInPrefabInstancesAttribute__ctor_m704EA800E6392FC3E9E52AA5FA181FC3DBA5A6AC (DisableInPrefabInstancesAttribute_tFD597BDAF438F3CBB62D7ABE8275628F08D2E22A * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisableInPrefabsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisableInPrefabsAttribute__ctor_m542315FFADB143733CA1CF2D6E291FFB4F7E078E (DisableInPrefabsAttribute_t9BFDE824C44F0D079670C41E0E1D93E159A5E9CA * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DisplayAsStringAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayAsStringAttribute__ctor_m522B74B44CC1AEEBF35F4D18CFE534E5BB6CD6F1 (DisplayAsStringAttribute_tDF4C917E4B96691E50E0BF8D6341C1FC1588D1A0 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		__this->set_Overflow_0((bool)1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.DisplayAsStringAttribute::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DisplayAsStringAttribute__ctor_mF95DE7F7BA9DFAD90300FAA55A53FFF686DE5466 (DisplayAsStringAttribute_tDF4C917E4B96691E50E0BF8D6341C1FC1588D1A0 * __this, bool ___overflow0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		bool L_0 = ___overflow0;
		__this->set_Overflow_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DoNotDrawAsReferenceAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DoNotDrawAsReferenceAttribute__ctor_m1BD6A38F5D6DE3DE9ED9C245ED88E339191CE45A (DoNotDrawAsReferenceAttribute_t1733822E81BCF25AD73D17BDA6728D0C47992C7D * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DontApplyToListElementsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DontApplyToListElementsAttribute__ctor_m75119B25A9B6216CE6272E43BE2021B18D38B89F (DontApplyToListElementsAttribute_tFD5D5B532B6272DE43CA24544629F6FB415B311C * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.DrawWithUnityAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DrawWithUnityAttribute__ctor_m9AFAD18EA24EE1DB43EC28484C5A3108CC77EF82 (DrawWithUnityAttribute_t1AAE718BB4943F79D46CD517AC31A2E48959FC1E * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.EnableForPrefabOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableForPrefabOnlyAttribute__ctor_m4945F0D6C761E11BAEDF0F9A561700142679AF58 (EnableForPrefabOnlyAttribute_tB522C6AEAEC726EA14C18F4385448BF608A3DA79 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.EnableGUIAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableGUIAttribute__ctor_m28930081807FFC9AD1D2593770A6416C22D0E988 (EnableGUIAttribute_tAC87F02189063A1B338EDDBC33318272F5C3D3C7 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.EnableIfAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableIfAttribute__ctor_m063D4082EA0D809A91D7A1B732E1AF24FBA65939 (EnableIfAttribute_t0C1D534F8FB1F9C9B0732523502B76572C10727F * __this, String_t* ___memberName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.EnableIfAttribute::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnableIfAttribute__ctor_m9353F8463C98D77903520709C7B32FF21A2EA7E3 (EnableIfAttribute_t0C1D534F8FB1F9C9B0732523502B76572C10727F * __this, String_t* ___memberName0, RuntimeObject * ___optionalValue1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		RuntimeObject * L_1 = ___optionalValue1;
		__this->set_Value_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.EnumPagingAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumPagingAttribute__ctor_m6E782AB395999C717DA3E31681B9D5A578033E31 (EnumPagingAttribute_tADC2A440F2917740F298F8C04750969B255028A5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.EnumToggleButtonsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnumToggleButtonsAttribute__ctor_mA49FE1360382A419D8B5BB450471C51454493323 (EnumToggleButtonsAttribute_tD54F6B17BE4A797851707A83930C5BB1EEF66189 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Sirenix.OdinInspector.FilePathAttribute::get_ReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FilePathAttribute_get_ReadOnly_mED1C60BAE5813BF787B11601758E88BA0C3C46B0 (FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CReadOnlyU3Ek__BackingField_6();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.FilePathAttribute::set_ReadOnly(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePathAttribute_set_ReadOnly_m61EC1B69E958DB15AAA1E29BD5E0B38A480A4DFC (FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CReadOnlyU3Ek__BackingField_6(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.FilePathAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FilePathAttribute__ctor_m2AFC9B2DE7B4AEA12780BB8821DD38C9B67883A9 (FilePathAttribute_tDACC7B7C747834ACB0B860B4BA6FEA0616F3871B * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.FolderPathAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FolderPathAttribute__ctor_m16E2430C95592DBD8354CE65D6556123220EAB7F (FolderPathAttribute_t2B3B21E242BF56572EA687BEA45B26107C1F41D0 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.FoldoutGroupAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoldoutGroupAttribute__ctor_mF50AF341E01A075554D147FB4AE49C30005E1658 (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, String_t* ___groupName0, int32_t ___order1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___groupName0;
		int32_t L_1 = ___order1;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.FoldoutGroupAttribute::.ctor(System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoldoutGroupAttribute__ctor_m30D86507706BB0C02085F03004B7656A2CC5300C (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, String_t* ___groupName0, bool ___expanded1, int32_t ___order2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___groupName0;
		int32_t L_1 = ___order2;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		bool L_2 = ___expanded1;
		__this->set_Expanded_3(L_2);
		FoldoutGroupAttribute_set_HasDefinedExpanded_m98272DEF7B7D714E36B5892F889A8F202B00F20D_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.FoldoutGroupAttribute::get_HasDefinedExpanded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool FoldoutGroupAttribute_get_HasDefinedExpanded_m41084838D0A68661A102ECCEF4826D5DBA024344 (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHasDefinedExpandedU3Ek__BackingField_4();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.FoldoutGroupAttribute::set_HasDefinedExpanded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoldoutGroupAttribute_set_HasDefinedExpanded_m98272DEF7B7D714E36B5892F889A8F202B00F20D (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasDefinedExpandedU3Ek__BackingField_4(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.FoldoutGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FoldoutGroupAttribute_CombineValuesWith_mE4E3F1E87F7FEFB298FCCCC3B06EBC2E06D8F285 (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (FoldoutGroupAttribute_CombineValuesWith_mE4E3F1E87F7FEFB298FCCCC3B06EBC2E06D8F285_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * V_0 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		V_0 = ((FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA *)IsInstClass((RuntimeObject*)L_0, FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA_il2cpp_TypeInfo_var));
		FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * L_1 = V_0;
		NullCheck(L_1);
		bool L_2 = FoldoutGroupAttribute_get_HasDefinedExpanded_m41084838D0A68661A102ECCEF4826D5DBA024344_inline(L_1, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		FoldoutGroupAttribute_set_HasDefinedExpanded_m98272DEF7B7D714E36B5892F889A8F202B00F20D_inline(__this, (bool)1, /*hidden argument*/NULL);
		FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->get_Expanded_3();
		__this->set_Expanded_3(L_4);
	}

IL_0022:
	{
		bool L_5 = FoldoutGroupAttribute_get_HasDefinedExpanded_m41084838D0A68661A102ECCEF4826D5DBA024344_inline(__this, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * L_6 = V_0;
		NullCheck(L_6);
		FoldoutGroupAttribute_set_HasDefinedExpanded_m98272DEF7B7D714E36B5892F889A8F202B00F20D_inline(L_6, (bool)1, /*hidden argument*/NULL);
		FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * L_7 = V_0;
		bool L_8 = __this->get_Expanded_3();
		NullCheck(L_7);
		L_7->set_Expanded_3(L_8);
	}

IL_003d:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.GUIColorAttribute::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIColorAttribute__ctor_m0CC0D6D08AE13BB9E94C85F9FD409031692FC419 (GUIColorAttribute_tA4CDDCA58D98DDBD285E924022FC73A2D5E85002 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		float L_0 = ___r0;
		float L_1 = ___g1;
		float L_2 = ___b2;
		float L_3 = ___a3;
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_4), L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		__this->set_Color_0(L_4);
		return;
	}
}
// System.Void Sirenix.OdinInspector.GUIColorAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUIColorAttribute__ctor_m91C68F81DEC83154F6F01F8C21AA886F1D7B287D (GUIColorAttribute_tA4CDDCA58D98DDBD285E924022FC73A2D5E85002 * __this, String_t* ___getColor0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___getColor0;
		__this->set_GetColor_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideDuplicateReferenceBoxAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideDuplicateReferenceBoxAttribute__ctor_m2FA041CF2A18DC8440A9252EC6F5FC2F8E89B762 (HideDuplicateReferenceBoxAttribute_tB65A17F36ACD251F29188E445E76EDD648D12589 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideIfAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideIfAttribute__ctor_mC027260DBC5C99E41DFD19B7091AEAFA443A8C27 (HideIfAttribute_t2BB8103DD9C18BF0806E5D5DEE78F4001E818774 * __this, String_t* ___memberName0, bool ___animate1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		bool L_1 = ___animate1;
		__this->set_Animate_2(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.HideIfAttribute::.ctor(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideIfAttribute__ctor_mFDC9A7E58DC0E1BE0991833C40D2412E7E6B87D8 (HideIfAttribute_t2BB8103DD9C18BF0806E5D5DEE78F4001E818774 * __this, String_t* ___memberName0, RuntimeObject * ___optionalValue1, bool ___animate2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		RuntimeObject * L_1 = ___optionalValue1;
		__this->set_Value_1(L_1);
		bool L_2 = ___animate2;
		__this->set_Animate_2(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Sirenix.OdinInspector.HideIfGroupAttribute::get_MemberName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HideIfGroupAttribute_get_MemberName_m02A2E4D6C33D21059BE3C7D4286A1DEE1B82B0AA (HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_memberName_3();
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = __this->get_memberName_3();
		return L_2;
	}

IL_0014:
	{
		String_t* L_3 = ((PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC *)__this)->get_GroupName_1();
		return L_3;
	}
}
// System.Void Sirenix.OdinInspector.HideIfGroupAttribute::set_MemberName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideIfGroupAttribute_set_MemberName_mDE9B57A234CEF47CB4AF0661158DF4BDD35169C7 (HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_memberName_3(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.HideIfGroupAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideIfGroupAttribute__ctor_mB407AD3457FF87F8B5ED9A9A7A69F296923517AD (HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * __this, String_t* ___path0, bool ___animate1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		PropertyGroupAttribute__ctor_m74A2FCCC6D4DAFB70F9D1EA925F9B5C8BB6FB61D(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___animate1;
		__this->set_Animate_4(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.HideIfGroupAttribute::.ctor(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideIfGroupAttribute__ctor_m737AFE87B0FD5DA722B0A89F4E9F72C82875602F (HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * __this, String_t* ___path0, RuntimeObject * ___value1, bool ___animate2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		PropertyGroupAttribute__ctor_m74A2FCCC6D4DAFB70F9D1EA925F9B5C8BB6FB61D(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		__this->set_Value_5(L_1);
		bool L_2 = ___animate2;
		__this->set_Animate_4(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.HideIfGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideIfGroupAttribute_CombineValuesWith_m1B9C277C0251FBC47CA732912B54B8E7EF256279 (HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HideIfGroupAttribute_CombineValuesWith_m1B9C277C0251FBC47CA732912B54B8E7EF256279_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * V_0 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		V_0 = ((HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 *)IsInstClass((RuntimeObject*)L_0, HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165_il2cpp_TypeInfo_var));
		String_t* L_1 = __this->get_memberName_3();
		bool L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * L_3 = V_0;
		String_t* L_4 = __this->get_memberName_3();
		NullCheck(L_3);
		L_3->set_memberName_3(L_4);
	}

IL_0020:
	{
		bool L_5 = __this->get_Animate_4();
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * L_6 = V_0;
		bool L_7 = __this->get_Animate_4();
		NullCheck(L_6);
		L_6->set_Animate_4(L_7);
	}

IL_0034:
	{
		RuntimeObject * L_8 = __this->get_Value_5();
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		HideIfGroupAttribute_t81711B67EE547B2E9F4F43670E57657C402FE165 * L_9 = V_0;
		RuntimeObject * L_10 = __this->get_Value_5();
		NullCheck(L_9);
		L_9->set_Value_5(L_10);
	}

IL_0048:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideInEditorModeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInEditorModeAttribute__ctor_m69FD3272E579CEC01212E8096B431AB324A1D194 (HideInEditorModeAttribute_t9F5756D45CE7426470CE4382C9E6818B31195722 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideInInlineEditorsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInInlineEditorsAttribute__ctor_m7525D62BA0821B71DC44CCB4380AC919C2CFB817 (HideInInlineEditorsAttribute_t45CDA705EF1C3919B45A516B1E342017FF12C3D3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideInNonPrefabsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInNonPrefabsAttribute__ctor_m823FB16DA0C991DFAAC7332BE862BB87D6CC700D (HideInNonPrefabsAttribute_tA040FA7BBF8C5B002CC32FF584DE1E2DAD42FDE1 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideInPlayModeAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInPlayModeAttribute__ctor_m4523F7606F5C315CEE23A67F952825869CCCD37B (HideInPlayModeAttribute_t9A0C32CA0CF0F2A43B9504C2EBB8697C3567BEA7 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideInPrefabAssetsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInPrefabAssetsAttribute__ctor_m946F7D28698AC0806EB8361EB1CF954AFB9D72EA (HideInPrefabAssetsAttribute_t28859BF475E9B798F4B69479F3E7402D52272317 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideInPrefabInstancesAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInPrefabInstancesAttribute__ctor_m057EA2259ABF68FB852A5C19CB04052E4F1050BD (HideInPrefabInstancesAttribute_tF60A009AB5AFB1E0335EE88D40AE7C9D848BD150 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideInPrefabsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInPrefabsAttribute__ctor_mEBFEE2E2D64C3E20DC6AAF16C80D24ABFF963BB3 (HideInPrefabsAttribute_t610200AA7F661259BDA8F79DA6223D2B658DE5F4 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideInTablesAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideInTablesAttribute__ctor_m24B0C48E6B582B790DA2D421AE17F4D233284943 (HideInTablesAttribute_t6EA180FD533AC515DF20B12230BF58971527B1EE * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideLabelAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideLabelAttribute__ctor_m6FF21019C9D5DE61703A5290C0C700A3DB627BA7 (HideLabelAttribute_tE49F93206248913152A2763A259CEABC8C634733 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideMonoScriptAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideMonoScriptAttribute__ctor_mAA51993F090151DE1E9A208E4EB45BFFCD7CE794 (HideMonoScriptAttribute_t1D325E99CE0BA9AD28D82386996F75E6AA9C4EBA * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideNetworkBehaviourFieldsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideNetworkBehaviourFieldsAttribute__ctor_mD359CD06F3BEE901AC15413485233E1E76D0645C (HideNetworkBehaviourFieldsAttribute_tBA402A4536647625FF68DB186BF03A781C042820 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HideReferenceObjectPickerAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HideReferenceObjectPickerAttribute__ctor_m28075E4A616E60794DD0114D0FEE84C1831D0EE8 (HideReferenceObjectPickerAttribute_tC9A271A405B334ECF2C6F7D4A536650ADD7274A2 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.HorizontalGroupAttribute::.ctor(System.String,System.Single,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalGroupAttribute__ctor_m52E9BD04196BE6FCF84C1E1332308E62C4B62389 (HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 * __this, String_t* ___group0, float ___width1, int32_t ___marginLeft2, int32_t ___marginRight3, int32_t ___order4, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___group0;
		int32_t L_1 = ___order4;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		float L_2 = ___width1;
		__this->set_Width_3(L_2);
		int32_t L_3 = ___marginLeft2;
		__this->set_MarginLeft_4((((float)((float)L_3))));
		int32_t L_4 = ___marginRight3;
		__this->set_MarginRight_5((((float)((float)L_4))));
		return;
	}
}
// System.Void Sirenix.OdinInspector.HorizontalGroupAttribute::.ctor(System.Single,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalGroupAttribute__ctor_m5D0073C2082B3361CD63D6B4C63535D3F63EF48C (HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 * __this, float ___width0, int32_t ___marginLeft1, int32_t ___marginRight2, int32_t ___order3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HorizontalGroupAttribute__ctor_m5D0073C2082B3361CD63D6B4C63535D3F63EF48C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___width0;
		int32_t L_1 = ___marginLeft1;
		int32_t L_2 = ___marginRight2;
		int32_t L_3 = ___order3;
		HorizontalGroupAttribute__ctor_m52E9BD04196BE6FCF84C1E1332308E62C4B62389(__this, _stringLiteralD13C29EFE248E598FB27D17F13DBD3AF1D765FB8, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.HorizontalGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HorizontalGroupAttribute_CombineValuesWith_mEC076F3B2496A4AA6457005E2C372778B8997630 (HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (HorizontalGroupAttribute_CombineValuesWith_mEC076F3B2496A4AA6457005E2C372778B8997630_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 * G_B1_1 = NULL;
	{
		String_t* L_0 = __this->get_Title_10();
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0016;
		}
	}
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_2 = ___other0;
		NullCheck(((HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 *)IsInstClass((RuntimeObject*)L_2, HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28_il2cpp_TypeInfo_var)));
		String_t* L_3 = ((HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 *)IsInstClass((RuntimeObject*)L_2, HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28_il2cpp_TypeInfo_var))->get_Title_10();
		G_B2_0 = L_3;
		G_B2_1 = G_B1_1;
	}

IL_0016:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_Title_10(G_B2_0);
		float L_4 = __this->get_LabelWidth_11();
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_5 = ___other0;
		NullCheck(((HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 *)IsInstClass((RuntimeObject*)L_5, HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28_il2cpp_TypeInfo_var)));
		float L_6 = ((HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28 *)IsInstClass((RuntimeObject*)L_5, HorizontalGroupAttribute_tF54F097E6112F8D33B7F403EEDC6C41804D39C28_il2cpp_TypeInfo_var))->get_LabelWidth_11();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		float L_7 = Math_Max_mEB87839DA28310AE4CB81A94D551874CFC2B1247(L_4, L_6, /*hidden argument*/NULL);
		__this->set_LabelWidth_11(L_7);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.IncludeMyAttributesAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IncludeMyAttributesAttribute__ctor_m3F0246494FC045E60CF7C67941C4FA5BD4D5FFC4 (IncludeMyAttributesAttribute_t6943BFE4C9994BB53F22A86A586B5CE7EBDBF4BF * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.IndentAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IndentAttribute__ctor_m8010F5E24AEA5DB759941D7AB2CAD69EB5FBEA5B (IndentAttribute_tDD6597C05729531BA226F91C47E1B87B2A31AC8F * __this, int32_t ___indentLevel0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___indentLevel0;
		__this->set_IndentLevel_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.InfoBoxAttribute::.ctor(System.String,Sirenix.OdinInspector.InfoMessageType,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBoxAttribute__ctor_mD3EA0A8A74157AC207743A99002E258EC768E4D2 (InfoBoxAttribute_tD2CBFDC2F3C53791F8821B7C6AA0A74CC17035B7 * __this, String_t* ___message0, int32_t ___infoMessageType1, String_t* ___visibleIfMemberName2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___message0;
		__this->set_Message_0(L_0);
		int32_t L_1 = ___infoMessageType1;
		__this->set_InfoMessageType_1(L_1);
		String_t* L_2 = ___visibleIfMemberName2;
		__this->set_VisibleIf_2(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.InfoBoxAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InfoBoxAttribute__ctor_m5A454D564C8A810B7A8B99305759900D9B32E422 (InfoBoxAttribute_tD2CBFDC2F3C53791F8821B7C6AA0A74CC17035B7 * __this, String_t* ___message0, String_t* ___visibleIfMemberName1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___message0;
		__this->set_Message_0(L_0);
		__this->set_InfoMessageType_1(1);
		String_t* L_1 = ___visibleIfMemberName1;
		__this->set_VisibleIf_2(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.InlineButtonAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineButtonAttribute__ctor_m18A61A133D0BDE40124189FE5A6179A5F4CCEAB1 (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, String_t* ___memberMethod0, String_t* ___label1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberMethod0;
		InlineButtonAttribute_set_MemberMethod_m619A94311DBD787E9131455963124FA25F128F25_inline(__this, L_0, /*hidden argument*/NULL);
		String_t* L_1 = ___label1;
		InlineButtonAttribute_set_Label_mC1EAAFF971977500FF109434616DBA49DCC3C6FC_inline(__this, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.String Sirenix.OdinInspector.InlineButtonAttribute::get_MemberMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InlineButtonAttribute_get_MemberMethod_m6A4C530D6B850C2A977EC5EA4E89936D89FE1B98 (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CMemberMethodU3Ek__BackingField_0();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.InlineButtonAttribute::set_MemberMethod(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineButtonAttribute_set_MemberMethod_m619A94311DBD787E9131455963124FA25F128F25 (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMemberMethodU3Ek__BackingField_0(L_0);
		return;
	}
}
// System.String Sirenix.OdinInspector.InlineButtonAttribute::get_Label()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* InlineButtonAttribute_get_Label_m024F7B55E91BD58CD7225A710695C399A6D1539A (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CLabelU3Ek__BackingField_1();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.InlineButtonAttribute::set_Label(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineButtonAttribute_set_Label_mC1EAAFF971977500FF109434616DBA49DCC3C6FC (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CLabelU3Ek__BackingField_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.InlineEditorAttribute::.ctor(Sirenix.OdinInspector.InlineEditorModes,Sirenix.OdinInspector.InlineEditorObjectFieldModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineEditorAttribute__ctor_m0D73D4171968AA3A711238B2650A8D06B5B0DC79 (InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5 * __this, int32_t ___inlineEditorMode0, int32_t ___objectFieldMode1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (InlineEditorAttribute__ctor_m0D73D4171968AA3A711238B2650A8D06B5B0DC79_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		__this->set_PreviewWidth_5((100.0f));
		__this->set_PreviewHeight_6((35.0f));
		__this->set_IncrementInlineEditorDrawerDepth_7((bool)1);
		__this->set_DisableGUIForVCSLockedAssets_9((bool)1);
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___objectFieldMode1;
		__this->set_ObjectFieldMode_8(L_0);
		int32_t L_1 = ___inlineEditorMode0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_0051;
			}
			case 1:
			{
				goto IL_0059;
			}
			case 2:
			{
				goto IL_0068;
			}
			case 3:
			{
				goto IL_0077;
			}
			case 4:
			{
				goto IL_0086;
			}
			case 5:
			{
				goto IL_00a0;
			}
		}
	}
	{
		goto IL_00b6;
	}

IL_0051:
	{
		__this->set_DrawGUI_2((bool)1);
		return;
	}

IL_0059:
	{
		__this->set_DrawGUI_2((bool)1);
		__this->set_DrawHeader_1((bool)1);
		return;
	}

IL_0068:
	{
		__this->set_DrawGUI_2((bool)1);
		__this->set_DrawPreview_3((bool)1);
		return;
	}

IL_0077:
	{
		__this->set_Expanded_0((bool)1);
		__this->set_DrawPreview_3((bool)1);
		return;
	}

IL_0086:
	{
		__this->set_Expanded_0((bool)1);
		__this->set_DrawPreview_3((bool)1);
		__this->set_PreviewHeight_6((170.0f));
		return;
	}

IL_00a0:
	{
		__this->set_DrawGUI_2((bool)1);
		__this->set_DrawHeader_1((bool)1);
		__this->set_DrawPreview_3((bool)1);
		return;
	}

IL_00b6:
	{
		NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 * L_2 = (NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6 *)il2cpp_codegen_object_new(NotImplementedException_t26260C4EE0444C5FA022994203060B3A42A3ADE6_il2cpp_TypeInfo_var);
		NotImplementedException__ctor_mA2E9CE7F00CB335581A296D2596082D57E45BA83(L_2, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, InlineEditorAttribute__ctor_m0D73D4171968AA3A711238B2650A8D06B5B0DC79_RuntimeMethod_var);
	}
}
// System.Void Sirenix.OdinInspector.InlineEditorAttribute::.ctor(Sirenix.OdinInspector.InlineEditorObjectFieldModes)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlineEditorAttribute__ctor_m7A03146906FA75A08F453E771D05D4AAE587C727 (InlineEditorAttribute_t15991402B6FACA54DF757B06C87C8C69EED7AAC5 * __this, int32_t ___objectFieldMode0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___objectFieldMode0;
		InlineEditorAttribute__ctor_m0D73D4171968AA3A711238B2650A8D06B5B0DC79(__this, 0, L_0, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.InlinePropertyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InlinePropertyAttribute__ctor_mE703F9C2EECE01A88F46E0A358F324BAD2A2968B (InlinePropertyAttribute_t458D3BEFAA7AA75DDC2FBA478D35858CA501EDBC * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.LabelTextAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelTextAttribute__ctor_m0F3E5FF78B6E6C284D52A36FF2E981EDF9A64DB9 (LabelTextAttribute_t814941A9EEF13DBD64BB1E8D2522157FCE6104F7 * __this, String_t* ___text0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___text0;
		__this->set_Text_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.LabelWidthAttribute::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LabelWidthAttribute__ctor_mD311BCE839D73453C12ED37B77608DD7AD3DF10D (LabelWidthAttribute_tDB275565D5A1DBC93FDAA47ABC1D1AC34AF769A4 * __this, float ___width0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		float L_0 = ___width0;
		__this->set_Width_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_ShowPaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_ShowPaging_mC1166BBCBFB34474DA8C9C702F028FF0131227EE (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_paging_12();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::set_ShowPaging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute_set_ShowPaging_m735F3632A37E38B12BF8B477065D4916F5AF3033 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_paging_12(L_0);
		__this->set_pagingHasValue_16((bool)1);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_DraggableItems()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_DraggableItems_m988C3C4C5D22A690AFEC8243753224E3B2EFE51F (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_draggable_13();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::set_DraggableItems(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute_set_DraggableItems_mFE14385D70E0685A4CB867BFBD10E546E96AEF26 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_draggable_13(L_0);
		__this->set_draggableHasValue_17((bool)1);
		return;
	}
}
// System.Int32 Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_NumberOfItemsPerPage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ListDrawerSettingsAttribute_get_NumberOfItemsPerPage_m69EA9EE0F7994B9EBD51B485B9B03BEC162868EF (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_numberOfItemsPerPage_11();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::set_NumberOfItemsPerPage(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute_set_NumberOfItemsPerPage_m16CE599F7DF8EC483B574B0CDA3BF7332DEE286A (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_numberOfItemsPerPage_11(L_0);
		__this->set_numberOfItemsPerPageHasValue_22((bool)1);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_IsReadOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_IsReadOnly_mC76EAC97EF4AD2EA76BBB9F17DF2D1E88B000CF9 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isReadOnly_14();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::set_IsReadOnly(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute_set_IsReadOnly_mEF01989F4ED5A99DF2F65D4678687B892C91C37E (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_isReadOnly_14(L_0);
		__this->set_isReadOnlyHasValue_18((bool)1);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_ShowItemCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_ShowItemCount_m8DF7BF567C8ABF7AC02576047BFFE66D0BE8125A (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_showItemCount_15();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::set_ShowItemCount(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute_set_ShowItemCount_m4AB4F64813AA419207B3B983DFFAB78ED6869FCB (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_showItemCount_15(L_0);
		__this->set_showItemCountHasValue_19((bool)1);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_Expanded()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_Expanded_mA2E42A68F77DBDBD9EDDF1A8322EFDA5DF3841D3 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_expanded_20();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::set_Expanded(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute_set_Expanded_mF6DF6D294B36531956DD67655A8F218F2664A722 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_expanded_20(L_0);
		__this->set_expandedHasValue_21((bool)1);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_ShowIndexLabels()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_ShowIndexLabels_mBBD799110090F8C2CDCFE26B4D799FE42AE58363 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_showIndexLabels_23();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::set_ShowIndexLabels(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute_set_ShowIndexLabels_mD909026007AFB21B9AB035DB45D073B343842985 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_showIndexLabels_23(L_0);
		__this->set_showIndexLabelsHasValue_24((bool)1);
		return;
	}
}
// System.String Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_OnTitleBarGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ListDrawerSettingsAttribute_get_OnTitleBarGUI_m65F42B703753AF0BC543FB4DDAE92F0499139FA7 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_onTitleBarGUI_10();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::set_OnTitleBarGUI(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute_set_OnTitleBarGUI_m7D5610D25B4849C3EED03F3EF8978E396374F66A (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_onTitleBarGUI_10(L_0);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_PagingHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_PagingHasValue_m3CE3127D75BBB5E1DF0E3996616ECAA5BC69ED8C (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_pagingHasValue_16();
		return L_0;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_ShowItemCountHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_ShowItemCountHasValue_m25C9A0CF0A90CE80C105C7077FD6798745244628 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_showItemCountHasValue_19();
		return L_0;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_NumberOfItemsPerPageHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_NumberOfItemsPerPageHasValue_mB68166533503A0A8508977FA28F8057D27BD795C (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_numberOfItemsPerPageHasValue_22();
		return L_0;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_DraggableHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_DraggableHasValue_m3BE838EA446977F208D03589E5B5D74FA988CD78 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_draggableHasValue_17();
		return L_0;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_IsReadOnlyHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_IsReadOnlyHasValue_m275A411214E7E6C6F10A1C8837D61A912EBD701A (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_isReadOnlyHasValue_18();
		return L_0;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_ExpandedHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_ExpandedHasValue_mC4420066957796425557F1845AC2CA8163BBF335 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_expandedHasValue_21();
		return L_0;
	}
}
// System.Boolean Sirenix.OdinInspector.ListDrawerSettingsAttribute::get_ShowIndexLabelsHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ListDrawerSettingsAttribute_get_ShowIndexLabelsHasValue_mA197FA3E8F1EC745076126B1E1EACB5A4D036BB9 (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_showIndexLabelsHasValue_24();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ListDrawerSettingsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ListDrawerSettingsAttribute__ctor_m815D9B7F73793AE5651C75E6D58173C0489EC18D (ListDrawerSettingsAttribute_t58B2A289A1F7A011C646997F74BA84A74D0B8060 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.MaxValueAttribute::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxValueAttribute__ctor_m569ED9C794635C307F38CC00F921784509BE140B (MaxValueAttribute_tDE6F43F1FA837264D5FB445AE3FD90399D5C50A1 * __this, double ___maxValue0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		double L_0 = ___maxValue0;
		__this->set_MaxValue_0(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.MaxValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MaxValueAttribute__ctor_mDD63DA09A8D373CEFD4661E8DA0FA68D1EBC9402 (MaxValueAttribute_tDE6F43F1FA837264D5FB445AE3FD90399D5C50A1 * __this, String_t* ___expression0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___expression0;
		__this->set_Expression_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.MinMaxSliderAttribute::.ctor(System.Single,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSliderAttribute__ctor_mDD7F4F88869CDD4FBD9ED0307DE43FE7D198CCF8 (MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7 * __this, float ___minValue0, float ___maxValue1, bool ___showFields2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		float L_0 = ___minValue0;
		__this->set_MinValue_0(L_0);
		float L_1 = ___maxValue1;
		__this->set_MaxValue_1(L_1);
		bool L_2 = ___showFields2;
		__this->set_ShowFields_5(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.MinMaxSliderAttribute::.ctor(System.String,System.Single,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSliderAttribute__ctor_m053EB31602BF0085B6022EAE1D7DE81CE64D2110 (MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7 * __this, String_t* ___minMember0, float ___maxValue1, bool ___showFields2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___minMember0;
		__this->set_MinMember_2(L_0);
		float L_1 = ___maxValue1;
		__this->set_MaxValue_1(L_1);
		bool L_2 = ___showFields2;
		__this->set_ShowFields_5(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.MinMaxSliderAttribute::.ctor(System.Single,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSliderAttribute__ctor_mC090174FF228C5EFF211E6413E87E96293D317F3 (MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7 * __this, float ___minValue0, String_t* ___maxMember1, bool ___showFields2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		float L_0 = ___minValue0;
		__this->set_MinValue_0(L_0);
		String_t* L_1 = ___maxMember1;
		__this->set_MaxMember_3(L_1);
		bool L_2 = ___showFields2;
		__this->set_ShowFields_5(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.MinMaxSliderAttribute::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSliderAttribute__ctor_m18CB7A529AD45F9E69EA39BAA99D9966BBF08A1F (MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7 * __this, String_t* ___minMember0, String_t* ___maxMember1, bool ___showFields2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___minMember0;
		__this->set_MinMember_2(L_0);
		String_t* L_1 = ___maxMember1;
		__this->set_MaxMember_3(L_1);
		bool L_2 = ___showFields2;
		__this->set_ShowFields_5(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.MinMaxSliderAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinMaxSliderAttribute__ctor_m7F789F43FD97F11F35571E671989A2D6E7576E70 (MinMaxSliderAttribute_t7FF4BEB9817B94DCC9682468A5A75D8A0CD393C7 * __this, String_t* ___minMaxMember0, bool ___showFields1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___minMaxMember0;
		__this->set_MinMaxMember_4(L_0);
		bool L_1 = ___showFields1;
		__this->set_ShowFields_5(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.MinValueAttribute::.ctor(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinValueAttribute__ctor_m9C2269DEC9F9EC5AAEF13ADD9E839BF5615C984D (MinValueAttribute_t796488D6DA2E5C0A2D3C9C9A491E55C30DE24E5A * __this, double ___minValue0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		double L_0 = ___minValue0;
		__this->set_MinValue_0(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.MinValueAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MinValueAttribute__ctor_m413F63162767EBF390A06E3C5145D760C0915CFA (MinValueAttribute_t796488D6DA2E5C0A2D3C9C9A491E55C30DE24E5A * __this, String_t* ___expression0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___expression0;
		__this->set_Expression_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.MultiLinePropertyAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MultiLinePropertyAttribute__ctor_mFEFE038EFE303EA54F9E115011EEFB5AD21CA60F (MultiLinePropertyAttribute_t8E5072FB9813750CFF7E5BF3E5AF36248D49DA8A * __this, int32_t ___lines0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (MultiLinePropertyAttribute__ctor_mFEFE038EFE303EA54F9E115011EEFB5AD21CA60F_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___lines0;
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_1 = Math_Max_mD8AA27386BF012C65303FCDEA041B0CC65056E7B(1, L_0, /*hidden argument*/NULL);
		__this->set_Lines_0(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.OdinRegisterAttributeAttribute::.ctor(System.Type,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OdinRegisterAttributeAttribute__ctor_mD1EC28B5B3647523EC2C4D18FFD9A619661F71BA (OdinRegisterAttributeAttribute_t76DCC6FBC87190DF6CEA72E5A95972A0C277AA73 * __this, Type_t * ___attributeType0, String_t* ___category1, String_t* ___description2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___attributeType0;
		__this->set_AttributeType_0(L_0);
		String_t* L_1 = ___category1;
		__this->set_Categories_1(L_1);
		String_t* L_2 = ___description2;
		__this->set_Description_2(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.OdinRegisterAttributeAttribute::.ctor(System.Type,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OdinRegisterAttributeAttribute__ctor_m0CA8B198E269653C346C281576ACC94DBA67B990 (OdinRegisterAttributeAttribute_t76DCC6FBC87190DF6CEA72E5A95972A0C277AA73 * __this, Type_t * ___attributeType0, String_t* ___category1, String_t* ___description2, String_t* ___url3, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		Type_t * L_0 = ___attributeType0;
		__this->set_AttributeType_0(L_0);
		String_t* L_1 = ___category1;
		__this->set_Categories_1(L_1);
		String_t* L_2 = ___description2;
		__this->set_Description_2(L_2);
		String_t* L_3 = ___url3;
		__this->set_DocumentationUrl_3(L_3);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.OnInspectorGUIAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInspectorGUIAttribute__ctor_mDDB24D7FF8146609C79093F0FA730C3ABEABF2F7 (OnInspectorGUIAttribute_t00B121908C6763DE1C90CFAAA5EA9481FA5E2543 * __this, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.OnInspectorGUIAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInspectorGUIAttribute__ctor_m206520BCB7FBF48B9BB55265E55FC2DA98DBB577 (OnInspectorGUIAttribute_t00B121908C6763DE1C90CFAAA5EA9481FA5E2543 * __this, String_t* ___methodName0, bool ___append1, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		bool L_0 = ___append1;
		if (!L_0)
		{
			goto IL_0011;
		}
	}
	{
		String_t* L_1 = ___methodName0;
		__this->set_AppendMethodName_1(L_1);
		return;
	}

IL_0011:
	{
		String_t* L_2 = ___methodName0;
		__this->set_PrependMethodName_0(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.OnInspectorGUIAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnInspectorGUIAttribute__ctor_m13A0049601ACF541D8BCD8982D197B7217EE500A (OnInspectorGUIAttribute_t00B121908C6763DE1C90CFAAA5EA9481FA5E2543 * __this, String_t* ___prependMethodName0, String_t* ___appendMethodName1, const RuntimeMethod* method)
{
	{
		ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___prependMethodName0;
		__this->set_PrependMethodName_0(L_0);
		String_t* L_1 = ___appendMethodName1;
		__this->set_AppendMethodName_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.OnValueChangedAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OnValueChangedAttribute__ctor_m13F2E35FD7DB3DC9497C0206DA7E52194F3AD95E (OnValueChangedAttribute_tCB399324DBFE5B539E58190EEFFF65DDAE54F53C * __this, String_t* ___methodName0, bool ___includeChildren1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___methodName0;
		__this->set_MethodName_0(L_0);
		bool L_1 = ___includeChildren1;
		__this->set_IncludeChildren_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.PreviewFieldAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewFieldAttribute__ctor_mB4430EAF29284631A308896E58FAB521C7AD7F57 (PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		__this->set_Height_0((0.0f));
		return;
	}
}
// System.Void Sirenix.OdinInspector.PreviewFieldAttribute::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewFieldAttribute__ctor_m007C1F1D51785895F18259EB480A5C3EBFB01EAC (PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3 * __this, float ___height0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		float L_0 = ___height0;
		__this->set_Height_0(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.PreviewFieldAttribute::.ctor(System.Single,Sirenix.OdinInspector.ObjectFieldAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewFieldAttribute__ctor_m7907ECDDEC1D660DB61C0A0042D2F58997D99083 (PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3 * __this, float ___height0, int32_t ___alignment1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		float L_0 = ___height0;
		__this->set_Height_0(L_0);
		int32_t L_1 = ___alignment1;
		__this->set_Alignment_1(L_1);
		__this->set_AlignmentHasValue_2((bool)1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.PreviewFieldAttribute::.ctor(Sirenix.OdinInspector.ObjectFieldAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PreviewFieldAttribute__ctor_m49A8966CF279748572FE39B5300CC3716ABB3697 (PreviewFieldAttribute_t003CBD2676D5C4FCF5B349A5B650DB1D1BD45DA3 * __this, int32_t ___alignment0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___alignment0;
		__this->set_Alignment_1(L_0);
		__this->set_AlignmentHasValue_2((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::.ctor(System.Double,System.Double,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute__ctor_m1A6071CE00400DC0C0F1C758C2DA0B2CAFF6A811 (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, double ___min0, double ___max1, float ___r2, float ___g3, float ___b4, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		double L_0 = ___min0;
		__this->set_Min_0(L_0);
		double L_1 = ___max1;
		__this->set_Max_1(L_1);
		float L_2 = ___r2;
		__this->set_R_4(L_2);
		float L_3 = ___g3;
		__this->set_G_5(L_3);
		float L_4 = ___b4;
		__this->set_B_6(L_4);
		__this->set_Height_7(((int32_t)12));
		__this->set_Segmented_10((bool)0);
		__this->set_drawValueLabel_12((bool)1);
		ProgressBarAttribute_set_DrawValueLabelHasValue_mF4C3B8DA89DC37B0D7C7B18A83EF2D607A0DDFE3_inline(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_valueLabelAlignment_13(1);
		ProgressBarAttribute_set_ValueLabelAlignmentHasValue_m4B691E533F455B0960D0745ED6414FC3F2CDBB39_inline(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::.ctor(System.String,System.Double,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute__ctor_mEBDDF07DF7358BFBC8B466D2BC2D1D856CC2C6DA (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, String_t* ___minMember0, double ___max1, float ___r2, float ___g3, float ___b4, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___minMember0;
		__this->set_MinMember_2(L_0);
		double L_1 = ___max1;
		__this->set_Max_1(L_1);
		float L_2 = ___r2;
		__this->set_R_4(L_2);
		float L_3 = ___g3;
		__this->set_G_5(L_3);
		float L_4 = ___b4;
		__this->set_B_6(L_4);
		__this->set_Height_7(((int32_t)12));
		__this->set_Segmented_10((bool)0);
		__this->set_drawValueLabel_12((bool)1);
		ProgressBarAttribute_set_DrawValueLabelHasValue_mF4C3B8DA89DC37B0D7C7B18A83EF2D607A0DDFE3_inline(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_valueLabelAlignment_13(1);
		ProgressBarAttribute_set_ValueLabelAlignmentHasValue_m4B691E533F455B0960D0745ED6414FC3F2CDBB39_inline(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::.ctor(System.Double,System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute__ctor_mFE8F255B618D566BAA802C41E893DBCE8CB11DAC (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, double ___min0, String_t* ___maxMember1, float ___r2, float ___g3, float ___b4, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		double L_0 = ___min0;
		__this->set_Min_0(L_0);
		String_t* L_1 = ___maxMember1;
		__this->set_MaxMember_3(L_1);
		float L_2 = ___r2;
		__this->set_R_4(L_2);
		float L_3 = ___g3;
		__this->set_G_5(L_3);
		float L_4 = ___b4;
		__this->set_B_6(L_4);
		__this->set_Height_7(((int32_t)12));
		__this->set_Segmented_10((bool)0);
		__this->set_drawValueLabel_12((bool)1);
		ProgressBarAttribute_set_DrawValueLabelHasValue_mF4C3B8DA89DC37B0D7C7B18A83EF2D607A0DDFE3_inline(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_valueLabelAlignment_13(1);
		ProgressBarAttribute_set_ValueLabelAlignmentHasValue_m4B691E533F455B0960D0745ED6414FC3F2CDBB39_inline(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::.ctor(System.String,System.String,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute__ctor_mCF1F8EB4D18FC2142DEF1C1D94EE2F45D0CA0E3C (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, String_t* ___minMember0, String_t* ___maxMember1, float ___r2, float ___g3, float ___b4, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___minMember0;
		__this->set_MinMember_2(L_0);
		String_t* L_1 = ___maxMember1;
		__this->set_MaxMember_3(L_1);
		float L_2 = ___r2;
		__this->set_R_4(L_2);
		float L_3 = ___g3;
		__this->set_G_5(L_3);
		float L_4 = ___b4;
		__this->set_B_6(L_4);
		__this->set_Height_7(((int32_t)12));
		__this->set_Segmented_10((bool)0);
		__this->set_drawValueLabel_12((bool)1);
		ProgressBarAttribute_set_DrawValueLabelHasValue_mF4C3B8DA89DC37B0D7C7B18A83EF2D607A0DDFE3_inline(__this, (bool)0, /*hidden argument*/NULL);
		__this->set_valueLabelAlignment_13(1);
		ProgressBarAttribute_set_ValueLabelAlignmentHasValue_m4B691E533F455B0960D0745ED6414FC3F2CDBB39_inline(__this, (bool)0, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ProgressBarAttribute::get_DrawValueLabel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProgressBarAttribute_get_DrawValueLabel_mF622066D6B422AB36DDA073D25DDCF428190D252 (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_drawValueLabel_12();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::set_DrawValueLabel(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute_set_DrawValueLabel_m093135D401A059B8B1C53407EB8E2AEF6801753C (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_drawValueLabel_12(L_0);
		ProgressBarAttribute_set_DrawValueLabelHasValue_mF4C3B8DA89DC37B0D7C7B18A83EF2D607A0DDFE3_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ProgressBarAttribute::get_DrawValueLabelHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProgressBarAttribute_get_DrawValueLabelHasValue_m35C5CCF3915ABA332019CF524DE9FF1F8E27ECF1 (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CDrawValueLabelHasValueU3Ek__BackingField_14();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::set_DrawValueLabelHasValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute_set_DrawValueLabelHasValue_mF4C3B8DA89DC37B0D7C7B18A83EF2D607A0DDFE3 (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CDrawValueLabelHasValueU3Ek__BackingField_14(L_0);
		return;
	}
}
// UnityEngine.TextAlignment Sirenix.OdinInspector.ProgressBarAttribute::get_ValueLabelAlignment()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ProgressBarAttribute_get_ValueLabelAlignment_mD8456B1F9F5FC135CDA55320A73C3C1C0B15B36C (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_valueLabelAlignment_13();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::set_ValueLabelAlignment(UnityEngine.TextAlignment)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute_set_ValueLabelAlignment_m8C91031286B93B01E6C8037D685CA9F3B3E55DA8 (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, int32_t ___value0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___value0;
		__this->set_valueLabelAlignment_13(L_0);
		ProgressBarAttribute_set_ValueLabelAlignmentHasValue_m4B691E533F455B0960D0745ED6414FC3F2CDBB39_inline(__this, (bool)1, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.ProgressBarAttribute::get_ValueLabelAlignmentHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ProgressBarAttribute_get_ValueLabelAlignmentHasValue_mD02E74C0A080495B200D55A75FDFA313E04A739E (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CValueLabelAlignmentHasValueU3Ek__BackingField_15();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ProgressBarAttribute::set_ValueLabelAlignmentHasValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ProgressBarAttribute_set_ValueLabelAlignmentHasValue_m4B691E533F455B0960D0745ED6414FC3F2CDBB39 (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CValueLabelAlignmentHasValueU3Ek__BackingField_15(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.PropertyGroupAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9 (PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * __this, String_t* ___groupId0, int32_t ___order1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * G_B2_0 = NULL;
	PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * G_B1_0 = NULL;
	PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * G_B3_0 = NULL;
	String_t* G_B4_0 = NULL;
	PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * G_B4_1 = NULL;
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___groupId0;
		__this->set_GroupID_0(L_0);
		int32_t L_1 = ___order1;
		__this->set_Order_2(L_1);
		String_t* L_2 = ___groupId0;
		NullCheck(L_2);
		int32_t L_3 = String_LastIndexOf_m29D788F388576F13C5D522AD008A86859E5BA826(L_2, ((int32_t)47), /*hidden argument*/NULL);
		V_0 = L_3;
		int32_t L_4 = V_0;
		G_B1_0 = __this;
		if ((((int32_t)L_4) < ((int32_t)0)))
		{
			G_B2_0 = __this;
			goto IL_002b;
		}
	}
	{
		int32_t L_5 = V_0;
		String_t* L_6 = ___groupId0;
		NullCheck(L_6);
		int32_t L_7 = String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline(L_6, /*hidden argument*/NULL);
		G_B2_0 = G_B1_0;
		if ((((int32_t)L_5) < ((int32_t)L_7)))
		{
			G_B3_0 = G_B1_0;
			goto IL_002e;
		}
	}

IL_002b:
	{
		String_t* L_8 = ___groupId0;
		G_B4_0 = L_8;
		G_B4_1 = G_B2_0;
		goto IL_0037;
	}

IL_002e:
	{
		String_t* L_9 = ___groupId0;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		String_t* L_11 = String_Substring_mB6B87FD76552BBF6D4E2B9F07F857FE051DCE190(L_9, ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1)), /*hidden argument*/NULL);
		G_B4_0 = L_11;
		G_B4_1 = G_B3_0;
	}

IL_0037:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_GroupName_1(G_B4_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.PropertyGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGroupAttribute__ctor_m74A2FCCC6D4DAFB70F9D1EA925F9B5C8BB6FB61D (PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * __this, String_t* ___groupId0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___groupId0;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// Sirenix.OdinInspector.PropertyGroupAttribute Sirenix.OdinInspector.PropertyGroupAttribute::Combine(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * PropertyGroupAttribute_Combine_mF0ED33E113BD28E7992ADD345F8129A1AB9C6A58 (PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PropertyGroupAttribute_Combine_mF0ED33E113BD28E7992ADD345F8129A1AB9C6A58_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB * L_1 = (ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB *)il2cpp_codegen_object_new(ArgumentNullException_tFB5C4621957BC53A7D1B4FDD5C38B4D6E15DB8FB_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m81AB157B93BFE2FBFDB08B88F84B444293042F97(L_1, _stringLiteralF7933083B6BA56CBC6D7BCA0F30688A30D0368F6, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, PropertyGroupAttribute_Combine_mF0ED33E113BD28E7992ADD345F8129A1AB9C6A58_RuntimeMethod_var);
	}

IL_000e:
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_2 = ___other0;
		NullCheck(L_2);
		Type_t * L_3 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(L_2, /*hidden argument*/NULL);
		Type_t * L_4 = Object_GetType_m571FE8360C10B98C23AAF1F066D92C08CC94F45B(__this, /*hidden argument*/NULL);
		if ((((RuntimeObject*)(Type_t *)L_3) == ((RuntimeObject*)(Type_t *)L_4)))
		{
			goto IL_0027;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_5 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_5, _stringLiteral0B13B52780344FB2960F902E01BC99A1B7E5A4B5, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, PropertyGroupAttribute_Combine_mF0ED33E113BD28E7992ADD345F8129A1AB9C6A58_RuntimeMethod_var);
	}

IL_0027:
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_6 = ___other0;
		NullCheck(L_6);
		String_t* L_7 = L_6->get_GroupID_0();
		String_t* L_8 = __this->get_GroupID_0();
		bool L_9 = String_op_Inequality_mDDA2DDED3E7EF042987EB7180EE3E88105F0AAE2(L_7, L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0045;
		}
	}
	{
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_10 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_10, _stringLiteral43E3531262B01D6352A62A076F3CA58EB20D257F, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_10, PropertyGroupAttribute_Combine_mF0ED33E113BD28E7992ADD345F8129A1AB9C6A58_RuntimeMethod_var);
	}

IL_0045:
	{
		int32_t L_11 = __this->get_Order_2();
		if (L_11)
		{
			goto IL_005b;
		}
	}
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_12 = ___other0;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_Order_2();
		__this->set_Order_2(L_13);
		goto IL_007a;
	}

IL_005b:
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_14 = ___other0;
		NullCheck(L_14);
		int32_t L_15 = L_14->get_Order_2();
		if (!L_15)
		{
			goto IL_007a;
		}
	}
	{
		int32_t L_16 = __this->get_Order_2();
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_17 = ___other0;
		NullCheck(L_17);
		int32_t L_18 = L_17->get_Order_2();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_19 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_16, L_18, /*hidden argument*/NULL);
		__this->set_Order_2(L_19);
	}

IL_007a:
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_20 = ___other0;
		VirtActionInvoker1< PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * >::Invoke(7 /* System.Void Sirenix.OdinInspector.PropertyGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute) */, __this, L_20);
		return __this;
	}
}
// System.Void Sirenix.OdinInspector.PropertyGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyGroupAttribute_CombineValuesWith_m0C8EF6AF705FB92845DC8CC8458C508C3FC653F7 (PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.PropertyOrderAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyOrderAttribute__ctor_mF0108C1F294340D56DC899242E9FCE9E405A82DB (PropertyOrderAttribute_t291D24D911501C22DFD4885D5D8A967D12D51BA6 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.PropertyOrderAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyOrderAttribute__ctor_m988F218D023B4415B161771ED03F04FABB20A0B4 (PropertyOrderAttribute_t291D24D911501C22DFD4885D5D8A967D12D51BA6 * __this, int32_t ___order0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___order0;
		__this->set_Order_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.PropertyRangeAttribute::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyRangeAttribute__ctor_m30D919D1C5CAD57AB67344988340939067233574 (PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * __this, double ___min0, double ___max1, const RuntimeMethod* method)
{
	PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * G_B2_0 = NULL;
	PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * G_B3_1 = NULL;
	PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * G_B5_0 = NULL;
	PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * G_B4_0 = NULL;
	double G_B6_0 = 0.0;
	PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * G_B6_1 = NULL;
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		double L_0 = ___min0;
		double L_1 = ___max1;
		G_B1_0 = __this;
		if ((((double)L_0) < ((double)L_1)))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		double L_2 = ___max1;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		double L_3 = ___min0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_Min_0(G_B3_0);
		double L_4 = ___max1;
		double L_5 = ___min0;
		G_B4_0 = __this;
		if ((((double)L_4) > ((double)L_5)))
		{
			G_B5_0 = __this;
			goto IL_001c;
		}
	}
	{
		double L_6 = ___min0;
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_001d;
	}

IL_001c:
	{
		double L_7 = ___max1;
		G_B6_0 = L_7;
		G_B6_1 = G_B5_0;
	}

IL_001d:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_Max_1(G_B6_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.PropertyRangeAttribute::.ctor(System.String,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyRangeAttribute__ctor_mC25D9D9F73CF3574D8FF58B7DC78D40F91F336AC (PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * __this, String_t* ___minMember0, double ___max1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___minMember0;
		__this->set_MinMember_2(L_0);
		double L_1 = ___max1;
		__this->set_Max_1(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.PropertyRangeAttribute::.ctor(System.Double,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyRangeAttribute__ctor_m52D24BF935AE90C3707A1173FA22349BC96C8DED (PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * __this, double ___min0, String_t* ___maxMember1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		double L_0 = ___min0;
		__this->set_Min_0(L_0);
		String_t* L_1 = ___maxMember1;
		__this->set_MaxMember_3(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.PropertyRangeAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyRangeAttribute__ctor_m1F3DC6418384A5F7A55557A87C21618DDFA0B7CD (PropertyRangeAttribute_tADDAC7EDE030194871DF37BE9E7FCF6AC929D155 * __this, String_t* ___minMember0, String_t* ___maxMember1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___minMember0;
		__this->set_MinMember_2(L_0);
		String_t* L_1 = ___maxMember1;
		__this->set_MaxMember_3(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.PropertySpaceAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySpaceAttribute__ctor_m56A992EE3279514FDB648A4967A851AEC291E0DF (PropertySpaceAttribute_t1DFA91C2DDEC7BD33AD1C7B12E963C7BE3B7C0F2 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		__this->set_SpaceBefore_0((8.0f));
		__this->set_SpaceAfter_1((0.0f));
		return;
	}
}
// System.Void Sirenix.OdinInspector.PropertySpaceAttribute::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySpaceAttribute__ctor_m276F4F77641432ED95C9018817D315506FEFA098 (PropertySpaceAttribute_t1DFA91C2DDEC7BD33AD1C7B12E963C7BE3B7C0F2 * __this, float ___spaceBefore0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		float L_0 = ___spaceBefore0;
		__this->set_SpaceBefore_0(L_0);
		__this->set_SpaceAfter_1((0.0f));
		return;
	}
}
// System.Void Sirenix.OdinInspector.PropertySpaceAttribute::.ctor(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertySpaceAttribute__ctor_m9F9032B24026CA41DE202B1057D83A0675A2B7D6 (PropertySpaceAttribute_t1DFA91C2DDEC7BD33AD1C7B12E963C7BE3B7C0F2 * __this, float ___spaceBefore0, float ___spaceAfter1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		float L_0 = ___spaceBefore0;
		__this->set_SpaceBefore_0(L_0);
		float L_1 = ___spaceAfter1;
		__this->set_SpaceAfter_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.PropertyTooltipAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PropertyTooltipAttribute__ctor_m975FCD19D80C64E7B25F717CCAC5ACC6B5029AC6 (PropertyTooltipAttribute_t8047641A70C4A6B06E4F5B7301DAC380DA4EAF0A * __this, String_t* ___tooltip0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___tooltip0;
		__this->set_Tooltip_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ReadOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadOnlyAttribute__ctor_mF1C6A8A7D10D92D17A145A0A1A1F6F166BEEA364 (ReadOnlyAttribute_t6ABE89F7B844D5B9B60A7032AE72B2AB74CD6BD2 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.RequiredAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredAttribute__ctor_m09C0FF862CEAB00A63B05E17A9504F8DD059ADC4 (RequiredAttribute_t0D25485F34E769C08AF7AFFB831AB03045584B56 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		__this->set_MessageType_1(3);
		return;
	}
}
// System.Void Sirenix.OdinInspector.RequiredAttribute::.ctor(System.String,Sirenix.OdinInspector.InfoMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredAttribute__ctor_m92DA3062270F1D00A3B202939C093BC6F06BA0C4 (RequiredAttribute_t0D25485F34E769C08AF7AFFB831AB03045584B56 * __this, String_t* ___errorMessage0, int32_t ___messageType1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___errorMessage0;
		__this->set_ErrorMessage_0(L_0);
		int32_t L_1 = ___messageType1;
		__this->set_MessageType_1(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.RequiredAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredAttribute__ctor_m6706254D7A22288D4411ED511486AA44FDAD1BF4 (RequiredAttribute_t0D25485F34E769C08AF7AFFB831AB03045584B56 * __this, String_t* ___errorMessage0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___errorMessage0;
		__this->set_ErrorMessage_0(L_0);
		__this->set_MessageType_1(3);
		return;
	}
}
// System.Void Sirenix.OdinInspector.RequiredAttribute::.ctor(Sirenix.OdinInspector.InfoMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RequiredAttribute__ctor_m84B495688E3EA5D07072DBC8EEAB6EF4E5273F9D (RequiredAttribute_t0D25485F34E769C08AF7AFFB831AB03045584B56 * __this, int32_t ___messageType0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___messageType0;
		__this->set_MessageType_1(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ResponsiveButtonGroupAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponsiveButtonGroupAttribute__ctor_mC899360BC20C19917876305801453C39477C17E5 (ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * __this, String_t* ___group0, const RuntimeMethod* method)
{
	{
		__this->set_DefaultButtonSize_3(((int32_t)22));
		String_t* L_0 = ___group0;
		PropertyGroupAttribute__ctor_m74A2FCCC6D4DAFB70F9D1EA925F9B5C8BB6FB61D(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ResponsiveButtonGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ResponsiveButtonGroupAttribute_CombineValuesWith_m9C7C9C25182E935D148A7AFC73A267D6997F5352 (ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ResponsiveButtonGroupAttribute_CombineValuesWith_m9C7C9C25182E935D148A7AFC73A267D6997F5352_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * V_0 = NULL;
	ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * G_B8_0 = NULL;
	ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * G_B7_0 = NULL;
	int32_t G_B9_0 = 0;
	ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * G_B9_1 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		V_0 = ((ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 *)IsInstClass((RuntimeObject*)L_0, ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492_il2cpp_TypeInfo_var));
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_1 = ___other0;
		if (L_1)
		{
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * L_2 = V_0;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_DefaultButtonSize_3();
		if ((((int32_t)L_3) == ((int32_t)((int32_t)22))))
		{
			goto IL_0023;
		}
	}
	{
		ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * L_4 = V_0;
		NullCheck(L_4);
		int32_t L_5 = L_4->get_DefaultButtonSize_3();
		__this->set_DefaultButtonSize_3(L_5);
		goto IL_0039;
	}

IL_0023:
	{
		int32_t L_6 = __this->get_DefaultButtonSize_3();
		if ((((int32_t)L_6) == ((int32_t)((int32_t)22))))
		{
			goto IL_0039;
		}
	}
	{
		ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * L_7 = V_0;
		int32_t L_8 = __this->get_DefaultButtonSize_3();
		NullCheck(L_7);
		L_7->set_DefaultButtonSize_3(L_8);
	}

IL_0039:
	{
		bool L_9 = __this->get_UniformLayout_4();
		G_B7_0 = __this;
		if (L_9)
		{
			G_B8_0 = __this;
			goto IL_004a;
		}
	}
	{
		ResponsiveButtonGroupAttribute_t6CD65A2EDFAAFE180D2469C10EBC1D02DE1DD492 * L_10 = V_0;
		NullCheck(L_10);
		bool L_11 = L_10->get_UniformLayout_4();
		G_B9_0 = ((int32_t)(L_11));
		G_B9_1 = G_B7_0;
		goto IL_004b;
	}

IL_004a:
	{
		G_B9_0 = 1;
		G_B9_1 = G_B8_0;
	}

IL_004b:
	{
		NullCheck(G_B9_1);
		G_B9_1->set_UniformLayout_4((bool)G_B9_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.SceneObjectsOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneObjectsOnlyAttribute__ctor_mC57A730716853A6A4D851941251CE2CCD05217AA (SceneObjectsOnlyAttribute_t5FD1F8BCE579E5C948EDEACC3D84B9A92A335097 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ShowDrawerChainAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowDrawerChainAttribute__ctor_mFD5E77A54EC8E2C682A0983EF757FE1CF0E79738 (ShowDrawerChainAttribute_t7E24C9E0A157A9BB8C71B209FD224B15B8CAA7B5 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ShowForPrefabOnlyAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowForPrefabOnlyAttribute__ctor_m187E5AAE23FD0DF8D9CEC693F8FFCADF52A194A4 (ShowForPrefabOnlyAttribute_t36E125BF7BCF070CE3A36E48733877A5DC88A7A3 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ShowIfAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfAttribute__ctor_m2129B6BAFB2936C493482562055E31907672E49B (ShowIfAttribute_tADCA17DE04CA086A84731CE92C1453A1014C1276 * __this, String_t* ___memberName0, bool ___animate1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		bool L_1 = ___animate1;
		__this->set_Animate_1(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ShowIfAttribute::.ctor(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfAttribute__ctor_m6D932A5B55AA3DAD35BD8BD69C3E114FEB8AFA29 (ShowIfAttribute_tADCA17DE04CA086A84731CE92C1453A1014C1276 * __this, String_t* ___memberName0, RuntimeObject * ___optionalValue1, bool ___animate2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		RuntimeObject * L_1 = ___optionalValue1;
		__this->set_Value_2(L_1);
		bool L_2 = ___animate2;
		__this->set_Animate_1(L_2);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String Sirenix.OdinInspector.ShowIfGroupAttribute::get_MemberName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ShowIfGroupAttribute_get_MemberName_m53E8E6E71A06FA31665BEF1F2DD6FDF0DEB4D3CB (ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_memberName_3();
		bool L_1 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_0, /*hidden argument*/NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		String_t* L_2 = __this->get_memberName_3();
		return L_2;
	}

IL_0014:
	{
		String_t* L_3 = ((PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC *)__this)->get_GroupName_1();
		return L_3;
	}
}
// System.Void Sirenix.OdinInspector.ShowIfGroupAttribute::set_MemberName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfGroupAttribute_set_MemberName_m02942F3C805685AA9872CDDDF1A93F81C0EA5E61 (ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_memberName_3(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ShowIfGroupAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfGroupAttribute__ctor_mB6C6DB21E909BAAAFA934658E3F186C6F45E448A (ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * __this, String_t* ___path0, bool ___animate1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		PropertyGroupAttribute__ctor_m74A2FCCC6D4DAFB70F9D1EA925F9B5C8BB6FB61D(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___animate1;
		__this->set_Animate_4(L_1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ShowIfGroupAttribute::.ctor(System.String,System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfGroupAttribute__ctor_m3F7CC84B47DF1CA861E7ABC9A7DDAB661B11620E (ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * __this, String_t* ___path0, RuntimeObject * ___value1, bool ___animate2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___path0;
		PropertyGroupAttribute__ctor_m74A2FCCC6D4DAFB70F9D1EA925F9B5C8BB6FB61D(__this, L_0, /*hidden argument*/NULL);
		RuntimeObject * L_1 = ___value1;
		__this->set_Value_5(L_1);
		bool L_2 = ___animate2;
		__this->set_Animate_4(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ShowIfGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowIfGroupAttribute_CombineValuesWith_m8C86B5EBE9A6D6BFB5A460A09D92524A5968E05E (ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ShowIfGroupAttribute_CombineValuesWith_m8C86B5EBE9A6D6BFB5A460A09D92524A5968E05E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * V_0 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		V_0 = ((ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE *)IsInstClass((RuntimeObject*)L_0, ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE_il2cpp_TypeInfo_var));
		String_t* L_1 = __this->get_memberName_3();
		bool L_2 = String_IsNullOrEmpty_m9AFBB5335B441B94E884B8A9D4A27AD60E3D7F7C(L_1, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * L_3 = V_0;
		String_t* L_4 = __this->get_memberName_3();
		NullCheck(L_3);
		L_3->set_memberName_3(L_4);
	}

IL_0020:
	{
		bool L_5 = __this->get_Animate_4();
		if (L_5)
		{
			goto IL_0034;
		}
	}
	{
		ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * L_6 = V_0;
		bool L_7 = __this->get_Animate_4();
		NullCheck(L_6);
		L_6->set_Animate_4(L_7);
	}

IL_0034:
	{
		RuntimeObject * L_8 = __this->get_Value_5();
		if (!L_8)
		{
			goto IL_0048;
		}
	}
	{
		ShowIfGroupAttribute_t17408138ED7AD43F363478FFACE6BE2E663704AE * L_9 = V_0;
		RuntimeObject * L_10 = __this->get_Value_5();
		NullCheck(L_9);
		L_9->set_Value_5(L_10);
	}

IL_0048:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ShowInInlineEditorsAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowInInlineEditorsAttribute__ctor_m485DF1C9EA8D6BB6E3C7ECA028FD6D37BDF8CAE8 (ShowInInlineEditorsAttribute_t8A5EA75D74A3F5AAE0FD09BA0F819E2206E82CC7 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ShowInInspectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowInInspectorAttribute__ctor_m0F3F171D0D6CC2419F3158C7FBC2D6AD4F12B815 (ShowInInspectorAttribute_t32120F244A3048FD51028573FF8746BEFCCCB188 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ShowOdinSerializedPropertiesInInspectorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowOdinSerializedPropertiesInInspectorAttribute__ctor_m9E29C5D218DEF8A1888B140CC685887D14CA8A60 (ShowOdinSerializedPropertiesInInspectorAttribute_tEE14FEFB0FB4F61B77E5E2B9D4B49B0067DD8809 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ShowPropertyResolverAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ShowPropertyResolverAttribute__ctor_mD6324D70883268C83CAE70E896304EA5DC048860 (ShowPropertyResolverAttribute_t9D1FF8EB98635FD841940F990C325C7222E53A04 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.SuffixLabelAttribute::.ctor(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuffixLabelAttribute__ctor_mE35561F008DF59B5AB4E66AD1F303CFDC9F5D6A1 (SuffixLabelAttribute_t037E0B7A9267FE217458F360324CB81AC97D4216 * __this, String_t* ___label0, bool ___overlay1, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___label0;
		__this->set_Label_0(L_0);
		bool L_1 = ___overlay1;
		__this->set_Overlay_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.SuppressInvalidAttributeErrorAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SuppressInvalidAttributeErrorAttribute__ctor_m65ECE4371493F66488A77825A472B13E7CCE3DE4 (SuppressInvalidAttributeErrorAttribute_t2896A7EC0558B1368A3E4D151DB86DB05AF1A242 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.TabGroupAttribute::.ctor(System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabGroupAttribute__ctor_m3808A005FA0A5A6163159AD65D5BBFE7C217FC28 (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, String_t* ___tab0, bool ___useFixedHeight1, int32_t ___order2, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TabGroupAttribute__ctor_m3808A005FA0A5A6163159AD65D5BBFE7C217FC28_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___tab0;
		bool L_1 = ___useFixedHeight1;
		int32_t L_2 = ___order2;
		TabGroupAttribute__ctor_mCC569AB49EC9077F27B371438E672F74BD76D585(__this, _stringLiteral6E9E619437A54F36D60249F4E555066130AFDC3C, L_0, L_1, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.TabGroupAttribute::.ctor(System.String,System.String,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabGroupAttribute__ctor_mCC569AB49EC9077F27B371438E672F74BD76D585 (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, String_t* ___group0, String_t* ___tab1, bool ___useFixedHeight2, int32_t ___order3, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TabGroupAttribute__ctor_mCC569AB49EC9077F27B371438E672F74BD76D585_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___group0;
		int32_t L_1 = ___order3;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___tab1;
		__this->set_TabName_4(L_2);
		bool L_3 = ___useFixedHeight2;
		__this->set_UseFixedHeight_5(L_3);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_4 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9(L_4, /*hidden argument*/List_1__ctor_m30C52A4F2828D86CA3FAB0B1B583948F4DA9F1F9_RuntimeMethod_var);
		TabGroupAttribute_set_Tabs_mC45CEA7FCC41496D6A0B0586A14D3953918139E3_inline(__this, L_4, /*hidden argument*/NULL);
		String_t* L_5 = ___tab1;
		if (!L_5)
		{
			goto IL_0031;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_6 = TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103_inline(__this, /*hidden argument*/NULL);
		String_t* L_7 = ___tab1;
		NullCheck(L_6);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_6, L_7, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_0031:
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_8 = TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103_inline(__this, /*hidden argument*/NULL);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_9 = (List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 *)il2cpp_codegen_object_new(List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3_il2cpp_TypeInfo_var);
		List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323(L_9, L_8, /*hidden argument*/List_1__ctor_m468E89F534D7F4463B96A099275295DF689B2323_RuntimeMethod_var);
		TabGroupAttribute_set_Tabs_mC45CEA7FCC41496D6A0B0586A14D3953918139E3_inline(__this, L_9, /*hidden argument*/NULL);
		return;
	}
}
// System.Collections.Generic.List`1<System.String> Sirenix.OdinInspector.TabGroupAttribute::get_Tabs()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103 (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, const RuntimeMethod* method)
{
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CTabsU3Ek__BackingField_8();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.TabGroupAttribute::set_Tabs(System.Collections.Generic.List`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabGroupAttribute_set_Tabs_mC45CEA7FCC41496D6A0B0586A14D3953918139E3 (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CTabsU3Ek__BackingField_8(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.TabGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabGroupAttribute_CombineValuesWith_m19635967229C423E88C8D4F44F70FDE65043BA7A (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TabGroupAttribute_CombineValuesWith_m19635967229C423E88C8D4F44F70FDE65043BA7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * V_0 = NULL;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B3_0 = NULL;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B4_1 = NULL;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B6_0 = NULL;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B7_1 = NULL;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B9_0 = NULL;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * G_B10_1 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		PropertyGroupAttribute_CombineValuesWith_m0C8EF6AF705FB92845DC8CC8458C508C3FC653F7(__this, L_0, /*hidden argument*/NULL);
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_1 = ___other0;
		V_0 = ((TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF *)IsInstClass((RuntimeObject*)L_1, TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF_il2cpp_TypeInfo_var));
		TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_TabName_4();
		if (!L_3)
		{
			goto IL_007f;
		}
	}
	{
		bool L_4 = __this->get_UseFixedHeight_5();
		G_B2_0 = __this;
		if (L_4)
		{
			G_B3_0 = __this;
			goto IL_0027;
		}
	}
	{
		TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get_UseFixedHeight_5();
		G_B4_0 = ((int32_t)(L_6));
		G_B4_1 = G_B2_0;
		goto IL_0028;
	}

IL_0027:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_0028:
	{
		NullCheck(G_B4_1);
		G_B4_1->set_UseFixedHeight_5((bool)G_B4_0);
		bool L_7 = __this->get_Paddingless_6();
		G_B5_0 = __this;
		if (L_7)
		{
			G_B6_0 = __this;
			goto IL_003e;
		}
	}
	{
		TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * L_8 = V_0;
		NullCheck(L_8);
		bool L_9 = L_8->get_Paddingless_6();
		G_B7_0 = ((int32_t)(L_9));
		G_B7_1 = G_B5_0;
		goto IL_003f;
	}

IL_003e:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_003f:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_Paddingless_6((bool)G_B7_0);
		bool L_10 = __this->get_HideTabGroupIfTabGroupOnlyHasOneTab_7();
		G_B8_0 = __this;
		if (L_10)
		{
			G_B9_0 = __this;
			goto IL_0055;
		}
	}
	{
		TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * L_11 = V_0;
		NullCheck(L_11);
		bool L_12 = L_11->get_HideTabGroupIfTabGroupOnlyHasOneTab_7();
		G_B10_0 = ((int32_t)(L_12));
		G_B10_1 = G_B8_0;
		goto IL_0056;
	}

IL_0055:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0056:
	{
		NullCheck(G_B10_1);
		G_B10_1->set_HideTabGroupIfTabGroupOnlyHasOneTab_7((bool)G_B10_0);
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_13 = TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103_inline(__this, /*hidden argument*/NULL);
		TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * L_14 = V_0;
		NullCheck(L_14);
		String_t* L_15 = L_14->get_TabName_4();
		NullCheck(L_13);
		bool L_16 = List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F(L_13, L_15, /*hidden argument*/List_1_Contains_m2EAD2DADA0478175052301E48FCE772ECD9A6F5F_RuntimeMethod_var);
		if (L_16)
		{
			goto IL_007f;
		}
	}
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_17 = TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103_inline(__this, /*hidden argument*/NULL);
		TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * L_18 = V_0;
		NullCheck(L_18);
		String_t* L_19 = L_18->get_TabName_4();
		NullCheck(L_17);
		List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE(L_17, L_19, /*hidden argument*/List_1_Add_m627ED3F7C50096BB8934F778CB980E79483BD2AE_RuntimeMethod_var);
	}

IL_007f:
	{
		return;
	}
}
// System.Collections.Generic.IList`1<Sirenix.OdinInspector.PropertyGroupAttribute> Sirenix.OdinInspector.TabGroupAttribute::Sirenix.OdinInspector.Internal.ISubGroupProviderAttribute.GetSubGroupAttributes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TabGroupAttribute_Sirenix_OdinInspector_Internal_ISubGroupProviderAttribute_GetSubGroupAttributes_m79E28A523A400EC2BC82B2889EFBFD163B2E1F7A (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TabGroupAttribute_Sirenix_OdinInspector_Internal_ISubGroupProviderAttribute_GetSubGroupAttributes_m79E28A523A400EC2BC82B2889EFBFD163B2E1F7A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA * V_1 = NULL;
	Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  V_2;
	memset((&V_2), 0, sizeof(V_2));
	String_t* V_3 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 1);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		V_0 = 0;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_inline(L_0, /*hidden argument*/List_1_get_Count_m199DB87BCE947106FBA38E19FDFE80CB65B61144_RuntimeMethod_var);
		List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA * L_2 = (List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA *)il2cpp_codegen_object_new(List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA_il2cpp_TypeInfo_var);
		List_1__ctor_mBCA6BA07CA772E0A0725055E7BB85526110A238E(L_2, L_1, /*hidden argument*/List_1__ctor_mBCA6BA07CA772E0A0725055E7BB85526110A238E_RuntimeMethod_var);
		V_1 = L_2;
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_3 = TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103_inline(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B  L_4 = List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF(L_3, /*hidden argument*/List_1_GetEnumerator_m35388695226DE2F7B0B5D0A07016716D6AD9CAEF_RuntimeMethod_var);
		V_2 = L_4;
	}

IL_001f:
	try
	{ // begin try (depth: 1)
		{
			goto IL_004a;
		}

IL_0021:
		{
			String_t* L_5 = Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_inline((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_get_Current_m9B0E356FA9FCFB9B1BECC6D7C5DF5C03309251AA_RuntimeMethod_var);
			V_3 = L_5;
			List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA * L_6 = V_1;
			String_t* L_7 = ((PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC *)__this)->get_GroupID_0();
			String_t* L_8 = V_3;
			String_t* L_9 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_7, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_8, /*hidden argument*/NULL);
			int32_t L_10 = V_0;
			int32_t L_11 = L_10;
			V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
			TabSubGroupAttribute_tCD5574179789F2FFC2F6FE36AFF617C134B07874 * L_12 = (TabSubGroupAttribute_tCD5574179789F2FFC2F6FE36AFF617C134B07874 *)il2cpp_codegen_object_new(TabSubGroupAttribute_tCD5574179789F2FFC2F6FE36AFF617C134B07874_il2cpp_TypeInfo_var);
			TabSubGroupAttribute__ctor_mA7DBEA9B673F62C5C40FC1586460360AE12693E6(L_12, L_9, L_11, /*hidden argument*/NULL);
			NullCheck(L_6);
			List_1_Add_m1D45B1E8B37CFAA4312157DCC87E105ECAE6C611(L_6, L_12, /*hidden argument*/List_1_Add_m1D45B1E8B37CFAA4312157DCC87E105ECAE6C611_RuntimeMethod_var);
		}

IL_004a:
		{
			bool L_13 = Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_MoveNext_mCE70417061695048D84E473D50556E46B8630F54_RuntimeMethod_var);
			if (L_13)
			{
				goto IL_0021;
			}
		}

IL_0053:
		{
			IL2CPP_LEAVE(0x63, FINALLY_0055);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0055;
	}

FINALLY_0055:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7((Enumerator_tCDCE241581BD00D8EDB03C9DC4133A65ADABF67B *)(&V_2), /*hidden argument*/Enumerator_Dispose_m65A91D17CADA79F187F4D68980A9C8640B6C9FC7_RuntimeMethod_var);
		IL2CPP_END_FINALLY(85)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(85)
	{
		IL2CPP_JUMP_TBL(0x63, IL_0063)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_0063:
	{
		List_1_tCE4FDB4EC9E1DDD7FD4A7643FF1C93C83381F3AA * L_14 = V_1;
		return L_14;
	}
}
// System.String Sirenix.OdinInspector.TabGroupAttribute::Sirenix.OdinInspector.Internal.ISubGroupProviderAttribute.RepathMemberAttribute(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TabGroupAttribute_Sirenix_OdinInspector_Internal_ISubGroupProviderAttribute_RepathMemberAttribute_mE6D4594E1370026C4409C8723AB218B24F498CBE (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___attr0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TabGroupAttribute_Sirenix_OdinInspector_Internal_ISubGroupProviderAttribute_RepathMemberAttribute_mE6D4594E1370026C4409C8723AB218B24F498CBE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * V_0 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___attr0;
		V_0 = ((TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF *)CastclassClass((RuntimeObject*)L_0, TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF_il2cpp_TypeInfo_var));
		String_t* L_1 = ((PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC *)__this)->get_GroupID_0();
		TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_TabName_4();
		String_t* L_4 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(L_1, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.TableColumnWidthAttribute::.ctor(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableColumnWidthAttribute__ctor_m35F373DF4C460E579953B44691D2B8D6E493DAD5 (TableColumnWidthAttribute_t51389CA96D7DB70E1AB0C5510B828071CA031988 * __this, int32_t ___width0, bool ___resizable1, const RuntimeMethod* method)
{
	{
		__this->set_Resizable_1((bool)1);
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___width0;
		__this->set_Width_0(L_0);
		bool L_1 = ___resizable1;
		__this->set_Resizable_1(L_1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Sirenix.OdinInspector.TableListAttribute::get_ShowPaging()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TableListAttribute_get_ShowPaging_m03726B000FA9BBE89024C66F0E607D440376ED76 (TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_showPaging_11();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.TableListAttribute::set_ShowPaging(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableListAttribute_set_ShowPaging_m01B83F0690B9121FFB259F5BEFF4AD53A39F48C6 (TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_showPaging_11(L_0);
		__this->set_showPagingHasValue_10((bool)1);
		return;
	}
}
// System.Boolean Sirenix.OdinInspector.TableListAttribute::get_ShowPagingHasValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TableListAttribute_get_ShowPagingHasValue_mA5D7D62D031F05C691A8DE3AFFE1A825A01114BA (TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_showPagingHasValue_10();
		return L_0;
	}
}
// System.Int32 Sirenix.OdinInspector.TableListAttribute::get_ScrollViewHeight()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TableListAttribute_get_ScrollViewHeight_m276413EC14EE2A7342EBD8F1DA45304FBACE126C (TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TableListAttribute_get_ScrollViewHeight_m276413EC14EE2A7342EBD8F1DA45304FBACE126C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = __this->get_MinScrollViewHeight_5();
		int32_t L_1 = __this->get_MaxScrollViewHeight_6();
		IL2CPP_RUNTIME_CLASS_INIT(Math_tA269614262430118C9FC5C4D9EF4F61C812568F0_il2cpp_TypeInfo_var);
		int32_t L_2 = Math_Min_m4C6E1589800A3AA57C1F430C3903847E8D7B4574(L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Sirenix.OdinInspector.TableListAttribute::set_ScrollViewHeight(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableListAttribute_set_ScrollViewHeight_m4BADECC1C193BFEFC9AF90D397E2BE8AA0601108 (TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A * __this, int32_t ___value0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___value0;
		int32_t L_1 = L_0;
		V_0 = L_1;
		__this->set_MaxScrollViewHeight_6(L_1);
		int32_t L_2 = V_0;
		__this->set_MinScrollViewHeight_5(L_2);
		return;
	}
}
// System.Void Sirenix.OdinInspector.TableListAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableListAttribute__ctor_mF8735DFDEC0D36E3DA4EE4817E133D335BEF732B (TableListAttribute_tE9B767A9BD83D7258309CE212EC63DBB3617102A * __this, const RuntimeMethod* method)
{
	{
		__this->set_DefaultMinColumnWidth_2(((int32_t)40));
		__this->set_DrawScrollView_4((bool)1);
		__this->set_MinScrollViewHeight_5(((int32_t)350));
		__this->set_CellPadding_9(2);
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.TableMatrixAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TableMatrixAttribute__ctor_m46209B67E1FA03542E3B9ABFFE2BDF215CB7BDE4 (TableMatrixAttribute_t1E64273AFB01FA4AC114541638715E498F055AE5 * __this, const RuntimeMethod* method)
{
	{
		__this->set_ResizableColumns_1((bool)1);
		__this->set_RespectIndentLevel_9((bool)1);
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.TitleAttribute::.ctor(System.String,System.String,Sirenix.OdinInspector.TitleAlignments,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleAttribute__ctor_mCEBD0EFF93B60DA2C5D656734DE8BEA4F6FFD8E3 (TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2 * __this, String_t* ___title0, String_t* ___subtitle1, int32_t ___titleAlignment2, bool ___horizontalLine3, bool ___bold4, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TitleAttribute__ctor_mCEBD0EFF93B60DA2C5D656734DE8BEA4F6FFD8E3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B2_0 = NULL;
	TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2 * G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	TitleAttribute_tC3F53929CBC6E7F7A62C5E53B269D2D57C8056E2 * G_B1_1 = NULL;
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___title0;
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		G_B1_1 = __this;
		if (L_1)
		{
			G_B2_0 = L_1;
			G_B2_1 = __this;
			goto IL_0011;
		}
	}
	{
		G_B2_0 = _stringLiteral5BEFD8CC60A79699B5BB00E37BAC5B62D371E174;
		G_B2_1 = G_B1_1;
	}

IL_0011:
	{
		NullCheck(G_B2_1);
		G_B2_1->set_Title_0(G_B2_0);
		String_t* L_2 = ___subtitle1;
		__this->set_Subtitle_1(L_2);
		bool L_3 = ___bold4;
		__this->set_Bold_2(L_3);
		int32_t L_4 = ___titleAlignment2;
		__this->set_TitleAlignment_4(L_4);
		bool L_5 = ___horizontalLine3;
		__this->set_HorizontalLine_3(L_5);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.TitleGroupAttribute::.ctor(System.String,System.String,Sirenix.OdinInspector.TitleAlignments,System.Boolean,System.Boolean,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleGroupAttribute__ctor_m4DEE0B57687C65872ED430789C17108EFBA32F85 (TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * __this, String_t* ___title0, String_t* ___subtitle1, int32_t ___alignment2, bool ___horizontalLine3, bool ___boldTitle4, bool ___indent5, int32_t ___order6, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___title0;
		int32_t L_1 = ___order6;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___subtitle1;
		__this->set_Subtitle_3(L_2);
		int32_t L_3 = ___alignment2;
		__this->set_Alignment_4(L_3);
		bool L_4 = ___horizontalLine3;
		__this->set_HorizontalLine_5(L_4);
		bool L_5 = ___boldTitle4;
		__this->set_BoldTitle_6(L_5);
		bool L_6 = ___indent5;
		__this->set_Indent_7(L_6);
		return;
	}
}
// System.Void Sirenix.OdinInspector.TitleGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TitleGroupAttribute_CombineValuesWith_m82EFA8E9F909599EC0719B9EB33A6EA98D2262F1 (TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (TitleGroupAttribute_CombineValuesWith_m82EFA8E9F909599EC0719B9EB33A6EA98D2262F1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * V_0 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		V_0 = ((TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 *)IsInstSealed((RuntimeObject*)L_0, TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2_il2cpp_TypeInfo_var));
		String_t* L_1 = __this->get_Subtitle_3();
		if (!L_1)
		{
			goto IL_001d;
		}
	}
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_2 = V_0;
		String_t* L_3 = __this->get_Subtitle_3();
		NullCheck(L_2);
		L_2->set_Subtitle_3(L_3);
		goto IL_0029;
	}

IL_001d:
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_Subtitle_3();
		__this->set_Subtitle_3(L_5);
	}

IL_0029:
	{
		int32_t L_6 = __this->get_Alignment_4();
		if (!L_6)
		{
			goto IL_003f;
		}
	}
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_7 = V_0;
		int32_t L_8 = __this->get_Alignment_4();
		NullCheck(L_7);
		L_7->set_Alignment_4(L_8);
		goto IL_004b;
	}

IL_003f:
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_9 = V_0;
		NullCheck(L_9);
		int32_t L_10 = L_9->get_Alignment_4();
		__this->set_Alignment_4(L_10);
	}

IL_004b:
	{
		bool L_11 = __this->get_HorizontalLine_5();
		if (L_11)
		{
			goto IL_0061;
		}
	}
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_12 = V_0;
		bool L_13 = __this->get_HorizontalLine_5();
		NullCheck(L_12);
		L_12->set_HorizontalLine_5(L_13);
		goto IL_006d;
	}

IL_0061:
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_14 = V_0;
		NullCheck(L_14);
		bool L_15 = L_14->get_HorizontalLine_5();
		__this->set_HorizontalLine_5(L_15);
	}

IL_006d:
	{
		bool L_16 = __this->get_BoldTitle_6();
		if (L_16)
		{
			goto IL_0083;
		}
	}
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_17 = V_0;
		bool L_18 = __this->get_BoldTitle_6();
		NullCheck(L_17);
		L_17->set_BoldTitle_6(L_18);
		goto IL_008f;
	}

IL_0083:
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_19 = V_0;
		NullCheck(L_19);
		bool L_20 = L_19->get_BoldTitle_6();
		__this->set_BoldTitle_6(L_20);
	}

IL_008f:
	{
		bool L_21 = __this->get_Indent_7();
		if (!L_21)
		{
			goto IL_00a4;
		}
	}
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_22 = V_0;
		bool L_23 = __this->get_Indent_7();
		NullCheck(L_22);
		L_22->set_Indent_7(L_23);
		return;
	}

IL_00a4:
	{
		TitleGroupAttribute_t135F9F9821BA8DBAA226EA0EFA1A336C9F5E0ED2 * L_24 = V_0;
		NullCheck(L_24);
		bool L_25 = L_24->get_Indent_7();
		__this->set_Indent_7(L_25);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ToggleAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleAttribute__ctor_mC3ECE8F515FCA2B1E28C20FAA21C3F1DDD22FB98 (ToggleAttribute_t966D64C017A35B7FB3D634C717543F42E7BF4FB5 * __this, String_t* ___toggleMemberName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___toggleMemberName0;
		__this->set_ToggleMemberName_0(L_0);
		__this->set_CollapseOthersOnExpand_1((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ToggleGroupAttribute::.ctor(System.String,System.Int32,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGroupAttribute__ctor_m2381FF18367F1C1683013F6809D1A003B770C246 (ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * __this, String_t* ___toggleMemberName0, int32_t ___order1, String_t* ___groupTitle2, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___toggleMemberName0;
		int32_t L_1 = ___order1;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___groupTitle2;
		__this->set_ToggleGroupTitle_3(L_2);
		__this->set_CollapseOthersOnExpand_4((bool)1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ToggleGroupAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGroupAttribute__ctor_mA67705D0C8D973755D552657179BD4CF90BF5DD6 (ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * __this, String_t* ___toggleMemberName0, String_t* ___groupTitle1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___toggleMemberName0;
		String_t* L_1 = ___groupTitle1;
		ToggleGroupAttribute__ctor_m2381FF18367F1C1683013F6809D1A003B770C246(__this, L_0, 0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ToggleGroupAttribute::.ctor(System.String,System.Int32,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGroupAttribute__ctor_mE81750D1FB34C3B74956C75D2B7CB8C938CF6819 (ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * __this, String_t* ___toggleMemberName0, int32_t ___order1, String_t* ___groupTitle2, String_t* ___titleStringMemberName3, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___toggleMemberName0;
		int32_t L_1 = ___order1;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___groupTitle2;
		__this->set_ToggleGroupTitle_3(L_2);
		__this->set_CollapseOthersOnExpand_4((bool)1);
		return;
	}
}
// System.String Sirenix.OdinInspector.ToggleGroupAttribute::get_ToggleMemberName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToggleGroupAttribute_get_ToggleMemberName_mA55652ED3E7CE876A7058678BB57D85C265BBADA (ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ((PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC *)__this)->get_GroupName_1();
		return L_0;
	}
}
// System.String Sirenix.OdinInspector.ToggleGroupAttribute::get_TitleStringMemberName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ToggleGroupAttribute_get_TitleStringMemberName_m380914ABD6BAA2CAA84D93A7C666A7521788616B (ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_U3CTitleStringMemberNameU3Ek__BackingField_5();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ToggleGroupAttribute::set_TitleStringMemberName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGroupAttribute_set_TitleStringMemberName_m6C5B8FC7A9CD9FE6EBFC0399DE0FBD9CE3259BE7 (ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CTitleStringMemberNameU3Ek__BackingField_5(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ToggleGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleGroupAttribute_CombineValuesWith_m22ACFE41F5F963228A0DFCAAF45A18749CBC4C82 (ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ToggleGroupAttribute_CombineValuesWith_m22ACFE41F5F963228A0DFCAAF45A18749CBC4C82_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * V_0 = NULL;
	ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * G_B6_0 = NULL;
	ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * G_B7_1 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		V_0 = ((ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA *)IsInstSealed((RuntimeObject*)L_0, ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA_il2cpp_TypeInfo_var));
		String_t* L_1 = __this->get_ToggleGroupTitle_3();
		if (L_1)
		{
			goto IL_001d;
		}
	}
	{
		ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * L_2 = V_0;
		NullCheck(L_2);
		String_t* L_3 = L_2->get_ToggleGroupTitle_3();
		__this->set_ToggleGroupTitle_3(L_3);
		goto IL_0031;
	}

IL_001d:
	{
		ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * L_4 = V_0;
		NullCheck(L_4);
		String_t* L_5 = L_4->get_ToggleGroupTitle_3();
		if (L_5)
		{
			goto IL_0031;
		}
	}
	{
		ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * L_6 = V_0;
		String_t* L_7 = __this->get_ToggleGroupTitle_3();
		NullCheck(L_6);
		L_6->set_ToggleGroupTitle_3(L_7);
	}

IL_0031:
	{
		bool L_8 = __this->get_CollapseOthersOnExpand_4();
		G_B5_0 = __this;
		if (L_8)
		{
			G_B6_0 = __this;
			goto IL_0042;
		}
	}
	{
		ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = L_9->get_CollapseOthersOnExpand_4();
		G_B7_0 = ((int32_t)(L_10));
		G_B7_1 = G_B5_0;
		goto IL_0043;
	}

IL_0042:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0043:
	{
		NullCheck(G_B7_1);
		G_B7_1->set_CollapseOthersOnExpand_4((bool)G_B7_0);
		ToggleGroupAttribute_t1EA41C94CDE873E47794D4A2585BCECCB19FCEDA * L_11 = V_0;
		bool L_12 = __this->get_CollapseOthersOnExpand_4();
		NullCheck(L_11);
		L_11->set_CollapseOthersOnExpand_4(L_12);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ToggleLeftAttribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ToggleLeftAttribute__ctor_mACEA4743D30FDA0C9A5F054ECE43119D94FFCE73 (ToggleLeftAttribute_t5F93AAEF9F198EC45ED753969C321A60454EAAA0 * __this, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.TypeFilterAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeFilterAttribute__ctor_m59CCB928CAFC323E0ECA16EC0F3D829E3B550050 (TypeFilterAttribute_t0168A857763118E8C0800DC3132E730160608902 * __this, String_t* ___memberName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.TypeInfoBoxAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeInfoBoxAttribute__ctor_m1D8D6D0BDAA393F3340C4E3D8B42B757C91829F1 (TypeInfoBoxAttribute_t327B0B2EFE3F33BF6897555A44D751B4FB1CB762 * __this, String_t* ___message0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___message0;
		__this->set_Message_0(L_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean Sirenix.OdinInspector.ValidateInputAttribute::get_ContiniousValidationCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValidateInputAttribute_get_ContiniousValidationCheck_mDBFEA1FB6A6C95A24A17D79DD0FB01183FAC43B6 (ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_ContinuousValidationCheck_4();
		return L_0;
	}
}
// System.Void Sirenix.OdinInspector.ValidateInputAttribute::set_ContiniousValidationCheck(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateInputAttribute_set_ContiniousValidationCheck_mC0EE3B5A11D1E01A74BB2591F753E472C0C3E5E0 (ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_ContinuousValidationCheck_4(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ValidateInputAttribute::.ctor(System.String,System.String,Sirenix.OdinInspector.InfoMessageType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateInputAttribute__ctor_mCA4739F1EBC9A92687E955D3951CB3E46FFF4FBC (ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C * __this, String_t* ___memberName0, String_t* ___defaultMessage1, int32_t ___messageType2, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_1(L_0);
		String_t* L_1 = ___defaultMessage1;
		__this->set_DefaultMessage_0(L_1);
		int32_t L_2 = ___messageType2;
		__this->set_MessageType_2(L_2);
		__this->set_IncludeChildren_3((bool)1);
		return;
	}
}
// System.Void Sirenix.OdinInspector.ValidateInputAttribute::.ctor(System.String,System.String,Sirenix.OdinInspector.InfoMessageType,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValidateInputAttribute__ctor_mE0794A7F44E5B7E31BA2A59F919FA1FA578D7252 (ValidateInputAttribute_tEACE111F24B70B29A8C39A40189EBE155247722C * __this, String_t* ___memberName0, String_t* ___message1, int32_t ___messageType2, bool ___rejectedInvalidInput3, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_1(L_0);
		String_t* L_1 = ___message1;
		__this->set_DefaultMessage_0(L_1);
		int32_t L_2 = ___messageType2;
		__this->set_MessageType_2(L_2);
		__this->set_IncludeChildren_3((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.ValueDropdownAttribute::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDropdownAttribute__ctor_mFF2EA1473E407673B3E08470FF794FD468C52531 (ValueDropdownAttribute_t9BFAD0DCE9ED79781DDFE99FC578D15BF927456C * __this, String_t* ___memberName0, const RuntimeMethod* method)
{
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		__this->set_NumberOfItemsBeforeEnablingSearch_1(((int32_t)10));
		String_t* L_0 = ___memberName0;
		__this->set_MemberName_0(L_0);
		__this->set_DrawDropdownForListElements_3((bool)1);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Conversion methods for marshalling of: Sirenix.OdinInspector.ValueDropdownItem
IL2CPP_EXTERN_C void ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshal_pinvoke(const ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89& unmarshaled, ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshaled_pinvoke& marshaled)
{
	marshaled.___Text_0 = il2cpp_codegen_marshal_string(unmarshaled.get_Text_0());
	if (unmarshaled.get_Value_1() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_Value_1()))
		{
			marshaled.___Value_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_Value_1()));
			(marshaled.___Value_1)->AddRef();
		}
		else
		{
			marshaled.___Value_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_Value_1());
		}
	}
	else
	{
		marshaled.___Value_1 = NULL;
	}
}
IL2CPP_EXTERN_C void ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshal_pinvoke_back(const ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshaled_pinvoke& marshaled, ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_pinvoke_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_Text_0(il2cpp_codegen_marshal_string_result(marshaled.___Text_0));
	if (marshaled.___Value_1 != NULL)
	{
		unmarshaled.set_Value_1(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Value_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_Value_1()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_Value_1()), Il2CppIUnknown::IID, marshaled.___Value_1);
		}
	}
	else
	{
		unmarshaled.set_Value_1(NULL);
	}
}
// Conversion method for clean up from marshalling of: Sirenix.OdinInspector.ValueDropdownItem
IL2CPP_EXTERN_C void ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshal_pinvoke_cleanup(ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshaled_pinvoke& marshaled)
{
	il2cpp_codegen_marshal_free(marshaled.___Text_0);
	marshaled.___Text_0 = NULL;
	if (marshaled.___Value_1 != NULL)
	{
		(marshaled.___Value_1)->Release();
		marshaled.___Value_1 = NULL;
	}
}
// Conversion methods for marshalling of: Sirenix.OdinInspector.ValueDropdownItem
IL2CPP_EXTERN_C void ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshal_com(const ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89& unmarshaled, ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshaled_com& marshaled)
{
	marshaled.___Text_0 = il2cpp_codegen_marshal_bstring(unmarshaled.get_Text_0());
	if (unmarshaled.get_Value_1() != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_Value_1()))
		{
			marshaled.___Value_1 = il2cpp_codegen_com_query_interface<Il2CppIUnknown>(static_cast<Il2CppComObject*>(unmarshaled.get_Value_1()));
			(marshaled.___Value_1)->AddRef();
		}
		else
		{
			marshaled.___Value_1 = il2cpp_codegen_com_get_or_create_ccw<Il2CppIUnknown>(unmarshaled.get_Value_1());
		}
	}
	else
	{
		marshaled.___Value_1 = NULL;
	}
}
IL2CPP_EXTERN_C void ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshal_com_back(const ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshaled_com& marshaled, ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89& unmarshaled)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_com_FromNativeMethodDefinition_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	unmarshaled.set_Text_0(il2cpp_codegen_marshal_bstring_result(marshaled.___Text_0));
	if (marshaled.___Value_1 != NULL)
	{
		unmarshaled.set_Value_1(il2cpp_codegen_com_get_or_create_rcw_from_iunknown<RuntimeObject>(marshaled.___Value_1, Il2CppComObject_il2cpp_TypeInfo_var));

		if (il2cpp_codegen_is_import_or_windows_runtime(unmarshaled.get_Value_1()))
		{
			il2cpp_codegen_com_cache_queried_interface(static_cast<Il2CppComObject*>(unmarshaled.get_Value_1()), Il2CppIUnknown::IID, marshaled.___Value_1);
		}
	}
	else
	{
		unmarshaled.set_Value_1(NULL);
	}
}
// Conversion method for clean up from marshalling of: Sirenix.OdinInspector.ValueDropdownItem
IL2CPP_EXTERN_C void ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshal_com_cleanup(ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89_marshaled_com& marshaled)
{
	il2cpp_codegen_marshal_free_bstring(marshaled.___Text_0);
	marshaled.___Text_0 = NULL;
	if (marshaled.___Value_1 != NULL)
	{
		(marshaled.___Value_1)->Release();
		marshaled.___Value_1 = NULL;
	}
}
// System.Void Sirenix.OdinInspector.ValueDropdownItem::.ctor(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ValueDropdownItem__ctor_m3CF0B98597DA39E12F301BDB6A058D09D7794D19 (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, String_t* ___text0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___text0;
		__this->set_Text_0(L_0);
		RuntimeObject * L_1 = ___value1;
		__this->set_Value_1(L_1);
		return;
	}
}
IL2CPP_EXTERN_C  void ValueDropdownItem__ctor_m3CF0B98597DA39E12F301BDB6A058D09D7794D19_AdjustorThunk (RuntimeObject * __this, String_t* ___text0, RuntimeObject * ___value1, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * _thisAdjusted = reinterpret_cast<ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 *>(__this + _offset);
	ValueDropdownItem__ctor_m3CF0B98597DA39E12F301BDB6A058D09D7794D19(_thisAdjusted, ___text0, ___value1, method);
}
// System.String Sirenix.OdinInspector.ValueDropdownItem::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueDropdownItem_ToString_mDED809527ED8247BA7131BD30EF12C269E0E8121 (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, const RuntimeMethod* method)
{
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = __this->get_Text_0();
		String_t* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0015;
		}
	}
	{
		RuntimeObject * L_2 = __this->get_Value_1();
		String_t* L_3 = String_Concat_mD3809D54FDAC43AA11084A9FE53165D57A6153FF(L_2, /*hidden argument*/NULL);
		G_B2_0 = L_3;
	}

IL_0015:
	{
		return G_B2_0;
	}
}
IL2CPP_EXTERN_C  String_t* ValueDropdownItem_ToString_mDED809527ED8247BA7131BD30EF12C269E0E8121_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * _thisAdjusted = reinterpret_cast<ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 *>(__this + _offset);
	return ValueDropdownItem_ToString_mDED809527ED8247BA7131BD30EF12C269E0E8121(_thisAdjusted, method);
}
// System.String Sirenix.OdinInspector.ValueDropdownItem::Sirenix.OdinInspector.IValueDropdownItem.GetText()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetText_m69EBC615E160AA9660D5112EE2474B59C32C6EEC (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Text_0();
		return L_0;
	}
}
IL2CPP_EXTERN_C  String_t* ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetText_m69EBC615E160AA9660D5112EE2474B59C32C6EEC_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * _thisAdjusted = reinterpret_cast<ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 *>(__this + _offset);
	return ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetText_m69EBC615E160AA9660D5112EE2474B59C32C6EEC_inline(_thisAdjusted, method);
}
// System.Object Sirenix.OdinInspector.ValueDropdownItem::Sirenix.OdinInspector.IValueDropdownItem.GetValue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetValue_mE3EC4570A8482C58D049AFF9F76B1CF030BC9A9B (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_Value_1();
		return L_0;
	}
}
IL2CPP_EXTERN_C  RuntimeObject * ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetValue_mE3EC4570A8482C58D049AFF9F76B1CF030BC9A9B_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * _thisAdjusted = reinterpret_cast<ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 *>(__this + _offset);
	return ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetValue_mE3EC4570A8482C58D049AFF9F76B1CF030BC9A9B_inline(_thisAdjusted, method);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.VerticalGroupAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalGroupAttribute__ctor_m4CEB61D831D18E38AFF54A13BA68BBE1CA0C90A8 (VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * __this, String_t* ___groupId0, int32_t ___order1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___groupId0;
		int32_t L_1 = ___order1;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.VerticalGroupAttribute::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalGroupAttribute__ctor_m5DE5C1FEBEB0B42B660086132FD4BB32015CE337 (VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * __this, int32_t ___order0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalGroupAttribute__ctor_m5DE5C1FEBEB0B42B660086132FD4BB32015CE337_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___order0;
		VerticalGroupAttribute__ctor_m4CEB61D831D18E38AFF54A13BA68BBE1CA0C90A8(__this, _stringLiteralA46F01FBD653440FE1C9E92E2A2D40AAB3645653, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Sirenix.OdinInspector.VerticalGroupAttribute::CombineValuesWith(Sirenix.OdinInspector.PropertyGroupAttribute)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VerticalGroupAttribute_CombineValuesWith_mC8162974BCE52295246BD9B3676FF9091FD9E77D (VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * __this, PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * ___other0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (VerticalGroupAttribute_CombineValuesWith_mC8162974BCE52295246BD9B3676FF9091FD9E77D_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * V_0 = NULL;
	{
		PropertyGroupAttribute_t27EEA72F79A4FC01D6FFC0DB2152441CE329C9BC * L_0 = ___other0;
		V_0 = ((VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED *)IsInstClass((RuntimeObject*)L_0, VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED_il2cpp_TypeInfo_var));
		VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * L_1 = V_0;
		if (!L_1)
		{
			goto IL_003c;
		}
	}
	{
		VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * L_2 = V_0;
		NullCheck(L_2);
		float L_3 = L_2->get_PaddingTop_3();
		if ((((float)L_3) == ((float)(0.0f))))
		{
			goto IL_0023;
		}
	}
	{
		VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * L_4 = V_0;
		NullCheck(L_4);
		float L_5 = L_4->get_PaddingTop_3();
		__this->set_PaddingTop_3(L_5);
	}

IL_0023:
	{
		VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * L_6 = V_0;
		NullCheck(L_6);
		float L_7 = L_6->get_PaddingBottom_4();
		if ((((float)L_7) == ((float)(0.0f))))
		{
			goto IL_003c;
		}
	}
	{
		VerticalGroupAttribute_t65C758CC7FCFAF4A9DE602B603D94AB708C348ED * L_8 = V_0;
		NullCheck(L_8);
		float L_9 = L_8->get_PaddingBottom_4();
		__this->set_PaddingBottom_4(L_9);
	}

IL_003c:
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.WrapAttribute::.ctor(System.Double,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WrapAttribute__ctor_mE7AD3AC8971537C3D7B27623AF736A3D520995F2 (WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8 * __this, double ___min0, double ___max1, const RuntimeMethod* method)
{
	WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8 * G_B2_0 = NULL;
	WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8 * G_B1_0 = NULL;
	double G_B3_0 = 0.0;
	WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8 * G_B3_1 = NULL;
	WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8 * G_B5_0 = NULL;
	WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8 * G_B4_0 = NULL;
	double G_B6_0 = 0.0;
	WrapAttribute_tD97F8A5540BFE71A8540A15C7B6B5B728E5539A8 * G_B6_1 = NULL;
	{
		Attribute__ctor_m5C1862A7DFC2C25A4797A8C5F681FBB5CB53ECE1(__this, /*hidden argument*/NULL);
		double L_0 = ___min0;
		double L_1 = ___max1;
		G_B1_0 = __this;
		if ((((double)L_0) < ((double)L_1)))
		{
			G_B2_0 = __this;
			goto IL_000e;
		}
	}
	{
		double L_2 = ___max1;
		G_B3_0 = L_2;
		G_B3_1 = G_B1_0;
		goto IL_000f;
	}

IL_000e:
	{
		double L_3 = ___min0;
		G_B3_0 = L_3;
		G_B3_1 = G_B2_0;
	}

IL_000f:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_Min_0(G_B3_0);
		double L_4 = ___max1;
		double L_5 = ___min0;
		G_B4_0 = __this;
		if ((((double)L_4) > ((double)L_5)))
		{
			G_B5_0 = __this;
			goto IL_001c;
		}
	}
	{
		double L_6 = ___min0;
		G_B6_0 = L_6;
		G_B6_1 = G_B4_0;
		goto IL_001d;
	}

IL_001c:
	{
		double L_7 = ___max1;
		G_B6_0 = L_7;
		G_B6_1 = G_B5_0;
	}

IL_001d:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_Max_1(G_B6_0);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.AssetSelectorAttribute_<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m93FE361544050182092D4EE3D786D759D2A888B9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (U3CU3Ec__cctor_m93FE361544050182092D4EE3D786D759D2A888B9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 * L_0 = (U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 *)il2cpp_codegen_object_new(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5F52AD259E24BEFB6F61CEB57F55A478992D8ABA(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Sirenix.OdinInspector.AssetSelectorAttribute_<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5F52AD259E24BEFB6F61CEB57F55A478992D8ABA (U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.String Sirenix.OdinInspector.AssetSelectorAttribute_<>c::<set_Paths>b__12_0(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* U3CU3Ec_U3Cset_PathsU3Eb__12_0_m35A081627585DE3088EDD8A01D7CA18E7129EF97 (U3CU3Ec_tC8442FDF8A58F6EBC05BBB610173AB8DACDE3951 * __this, String_t* ___x0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___x0;
		NullCheck(L_0);
		String_t* L_1 = String_Trim_m3FEC641D7046124B7F381701903B50B5171DE0A2(L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Sirenix.OdinInspector.TabGroupAttribute_TabSubGroupAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TabSubGroupAttribute__ctor_mA7DBEA9B673F62C5C40FC1586460360AE12693E6 (TabSubGroupAttribute_tCD5574179789F2FFC2F6FE36AFF617C134B07874 * __this, String_t* ___groupId0, int32_t ___order1, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___groupId0;
		int32_t L_1 = ___order1;
		PropertyGroupAttribute__ctor_m61ECCB33CF4EFEDACDB2A1B7E15BA49F950FF8C9(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void FoldoutGroupAttribute_set_HasDefinedExpanded_m98272DEF7B7D714E36B5892F889A8F202B00F20D_inline (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CHasDefinedExpandedU3Ek__BackingField_4(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool FoldoutGroupAttribute_get_HasDefinedExpanded_m41084838D0A68661A102ECCEF4826D5DBA024344_inline (FoldoutGroupAttribute_t1AB04DFF132AD5CDF9A9A64B463475CEA5B3A5FA * __this, const RuntimeMethod* method)
{
	{
		bool L_0 = __this->get_U3CHasDefinedExpandedU3Ek__BackingField_4();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InlineButtonAttribute_set_MemberMethod_m619A94311DBD787E9131455963124FA25F128F25_inline (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CMemberMethodU3Ek__BackingField_0(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void InlineButtonAttribute_set_Label_mC1EAAFF971977500FF109434616DBA49DCC3C6FC_inline (InlineButtonAttribute_tBA56A229BE13CCB839DD3B1E0030D6EF59F7B4D1 * __this, String_t* ___value0, const RuntimeMethod* method)
{
	{
		String_t* L_0 = ___value0;
		__this->set_U3CLabelU3Ek__BackingField_1(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProgressBarAttribute_set_DrawValueLabelHasValue_mF4C3B8DA89DC37B0D7C7B18A83EF2D607A0DDFE3_inline (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CDrawValueLabelHasValueU3Ek__BackingField_14(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void ProgressBarAttribute_set_ValueLabelAlignmentHasValue_m4B691E533F455B0960D0745ED6414FC3F2CDBB39_inline (ProgressBarAttribute_t96330B9517C38218A2726D929749CEB316DE9585 * __this, bool ___value0, const RuntimeMethod* method)
{
	{
		bool L_0 = ___value0;
		__this->set_U3CValueLabelAlignmentHasValueU3Ek__BackingField_15(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m129FC0ADA02FECBED3C0B1A809AE84A5AEE1CF09_inline (String_t* __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = __this->get_m_stringLength_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void TabGroupAttribute_set_Tabs_mC45CEA7FCC41496D6A0B0586A14D3953918139E3_inline (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * ___value0, const RuntimeMethod* method)
{
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = ___value0;
		__this->set_U3CTabsU3Ek__BackingField_8(L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * TabGroupAttribute_get_Tabs_m3B5C415DAAB1B7EC1F7ECF65279015ABAE772103_inline (TabGroupAttribute_tA46962CE06A5D7C090F67C3206831E50557A3BCF * __this, const RuntimeMethod* method)
{
	{
		List_1_t6C9F81EDBF0F4A31A9B0DA372D2EF34BDA3A1AF3 * L_0 = __this->get_U3CTabsU3Ek__BackingField_8();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetText_m69EBC615E160AA9660D5112EE2474B59C32C6EEC_inline (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, const RuntimeMethod* method)
{
	{
		String_t* L_0 = __this->get_Text_0();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * ValueDropdownItem_Sirenix_OdinInspector_IValueDropdownItem_GetValue_mE3EC4570A8482C58D049AFF9F76B1CF030BC9A9B_inline (ValueDropdownItem_tA9AC8F82989EF52CABBB12802F10DA526C8FDF89 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_Value_1();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m9C4EBBD2108B51885E750F927D7936290C8E20EE_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}

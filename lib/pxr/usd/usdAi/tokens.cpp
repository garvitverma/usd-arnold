//
// Copyright 2016 Pixar
//
// Licensed under the Apache License, Version 2.0 (the "Apache License")
// with the following modification; you may not use this file except in
// compliance with the Apache License and the following modification to it:
// Section 6. Trademarks. is deleted and replaced with:
//
// 6. Trademarks. This License does not grant permission to use the trade
//    names, trademarks, service marks, or product names of the Licensor
//    and its affiliates, except as required to comply with Section 4(c) of
//    the License and to reproduce the content of the NOTICE file.
//
// You may obtain a copy of the Apache License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the Apache License with the above modification is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied. See the Apache License for the specific
// language governing permissions and limitations under the Apache License.
//
#include "pxr/usd/usdAi/tokens.h"

PXR_NAMESPACE_OPEN_SCOPE

UsdAiTokensType::UsdAiTokensType() :
    aiAov("ai:aov", TfToken::Immortal),
    aiAutobump_visibilityCamera("ai:autobump_visibility:camera", TfToken::Immortal),
    aiAutobump_visibilityDiffuse_reflect("ai:autobump_visibility:diffuse_reflect", TfToken::Immortal),
    aiAutobump_visibilityDiffuse_transmit("ai:autobump_visibility:diffuse_transmit", TfToken::Immortal),
    aiAutobump_visibilityShadow("ai:autobump_visibility:shadow", TfToken::Immortal),
    aiAutobump_visibilitySpecular_reflect("ai:autobump_visibility:specular_reflect", TfToken::Immortal),
    aiAutobump_visibilitySpecular_transmit("ai:autobump_visibility:specular_transmit", TfToken::Immortal),
    aiAutobump_visibilitySubsurface("ai:autobump_visibility:subsurface", TfToken::Immortal),
    aiAutobump_visibilityVolume("ai:autobump_visibility:volume", TfToken::Immortal),
    aiDisp_autobump("ai:disp_autobump", TfToken::Immortal),
    aiDisp_height("ai:disp_height", TfToken::Immortal),
    aiDisp_padding("ai:disp_padding", TfToken::Immortal),
    aiDisp_zero_value("ai:disp_zero_value", TfToken::Immortal),
    aiDisplacement("ai:displacement", TfToken::Immortal),
    aiLight_group("ai:light_group", TfToken::Immortal),
    aiMatte("ai:matte", TfToken::Immortal),
    aiOpaque("ai:opaque", TfToken::Immortal),
    aiRay_bias("ai:ray_bias", TfToken::Immortal),
    aiReceive_shadows("ai:receive_shadows", TfToken::Immortal),
    aiSelf_shadows("ai:self_shadows", TfToken::Immortal),
    aiShadow_group("ai:shadow_group", TfToken::Immortal),
    aiSidednessCamera("ai:sidedness:camera", TfToken::Immortal),
    aiSidednessDiffuse_reflect("ai:sidedness:diffuse_reflect", TfToken::Immortal),
    aiSidednessDiffuse_transmit("ai:sidedness:diffuse_transmit", TfToken::Immortal),
    aiSidednessShadow("ai:sidedness:shadow", TfToken::Immortal),
    aiSidednessSpecular_reflect("ai:sidedness:specular_reflect", TfToken::Immortal),
    aiSidednessSpecular_transmit("ai:sidedness:specular_transmit", TfToken::Immortal),
    aiSidednessSubsurface("ai:sidedness:subsurface", TfToken::Immortal),
    aiSidednessVolume("ai:sidedness:volume", TfToken::Immortal),
    aiSmoothing("ai:smoothing", TfToken::Immortal),
    aiSubdiv_adaptive_error("ai:subdiv_adaptive_error", TfToken::Immortal),
    aiSubdiv_adaptive_metric("ai:subdiv_adaptive_metric", TfToken::Immortal),
    aiSubdiv_adaptive_space("ai:subdiv_adaptive_space", TfToken::Immortal),
    aiSubdiv_dicing_camera("ai:subdiv_dicing_camera", TfToken::Immortal),
    aiSubdiv_iterations("ai:subdiv_iterations", TfToken::Immortal),
    aiSubdiv_smooth_derivs("ai:subdiv_smooth_derivs", TfToken::Immortal),
    aiSubdiv_type("ai:subdiv_type", TfToken::Immortal),
    aiSubdiv_uv_smoothing("ai:subdiv_uv_smoothing", TfToken::Immortal),
    aiSurface("ai:surface", TfToken::Immortal),
    aiTransform_type("ai:transform_type", TfToken::Immortal),
    aiUse_light_group("ai:use_light_group", TfToken::Immortal),
    aiUse_shadow_group("ai:use_shadow_group", TfToken::Immortal),
    aiVisibilityCamera("ai:visibility:camera", TfToken::Immortal),
    aiVisibilityDiffuse_reflect("ai:visibility:diffuse_reflect", TfToken::Immortal),
    aiVisibilityDiffuse_transmit("ai:visibility:diffuse_transmit", TfToken::Immortal),
    aiVisibilityShadow("ai:visibility:shadow", TfToken::Immortal),
    aiVisibilitySpecular_reflect("ai:visibility:specular_reflect", TfToken::Immortal),
    aiVisibilitySpecular_transmit("ai:visibility:specular_transmit", TfToken::Immortal),
    aiVisibilitySubsurface("ai:visibility:subsurface", TfToken::Immortal),
    aiVisibilityVolume("ai:visibility:volume", TfToken::Immortal),
    aRRAY("ARRAY", TfToken::Immortal),
    auto_("auto_", TfToken::Immortal),
    bOOL("BOOL", TfToken::Immortal),
    bYTE("BYTE", TfToken::Immortal),
    catclark("catclark", TfToken::Immortal),
    data("data", TfToken::Immortal),
    dataType("dataType", TfToken::Immortal),
    driver("driver", TfToken::Immortal),
    edge_length("edge_length", TfToken::Immortal),
    filename("filename", TfToken::Immortal),
    filter("filter", TfToken::Immortal),
    flatness("flatness", TfToken::Immortal),
    fLOAT("FLOAT", TfToken::Immortal),
    infoId("info:id", TfToken::Immortal),
    infoNode_entry_type("info:node_entry_type", TfToken::Immortal),
    iNT("INT", TfToken::Immortal),
    linear("linear", TfToken::Immortal),
    lPE("LPE", TfToken::Immortal),
    mATRIX("MATRIX", TfToken::Immortal),
    name("name", TfToken::Immortal),
    nODE("NODE", TfToken::Immortal),
    none("none", TfToken::Immortal),
    object("object", TfToken::Immortal),
    paramType("paramType", TfToken::Immortal),
    path("path", TfToken::Immortal),
    pin_borders("pin_borders", TfToken::Immortal),
    pin_corners("pin_corners", TfToken::Immortal),
    pOINTER("POINTER", TfToken::Immortal),
    raster("raster", TfToken::Immortal),
    rGB("RGB", TfToken::Immortal),
    rGBA("RGBA", TfToken::Immortal),
    rotate_about_center("rotate_about_center", TfToken::Immortal),
    rotate_about_origin("rotate_about_origin", TfToken::Immortal),
    size("size", TfToken::Immortal),
    smooth("smooth", TfToken::Immortal),
    step_size("step_size", TfToken::Immortal),
    uINT("UINT", TfToken::Immortal),
    userPrefix("user:", TfToken::Immortal),
    vECTOR("VECTOR", TfToken::Immortal),
    vECTOR2("VECTOR2", TfToken::Immortal),
    allTokens({
        aiAov,
        aiAutobump_visibilityCamera,
        aiAutobump_visibilityDiffuse_reflect,
        aiAutobump_visibilityDiffuse_transmit,
        aiAutobump_visibilityShadow,
        aiAutobump_visibilitySpecular_reflect,
        aiAutobump_visibilitySpecular_transmit,
        aiAutobump_visibilitySubsurface,
        aiAutobump_visibilityVolume,
        aiDisp_autobump,
        aiDisp_height,
        aiDisp_padding,
        aiDisp_zero_value,
        aiDisplacement,
        aiLight_group,
        aiMatte,
        aiOpaque,
        aiRay_bias,
        aiReceive_shadows,
        aiSelf_shadows,
        aiShadow_group,
        aiSidednessCamera,
        aiSidednessDiffuse_reflect,
        aiSidednessDiffuse_transmit,
        aiSidednessShadow,
        aiSidednessSpecular_reflect,
        aiSidednessSpecular_transmit,
        aiSidednessSubsurface,
        aiSidednessVolume,
        aiSmoothing,
        aiSubdiv_adaptive_error,
        aiSubdiv_adaptive_metric,
        aiSubdiv_adaptive_space,
        aiSubdiv_dicing_camera,
        aiSubdiv_iterations,
        aiSubdiv_smooth_derivs,
        aiSubdiv_type,
        aiSubdiv_uv_smoothing,
        aiSurface,
        aiTransform_type,
        aiUse_light_group,
        aiUse_shadow_group,
        aiVisibilityCamera,
        aiVisibilityDiffuse_reflect,
        aiVisibilityDiffuse_transmit,
        aiVisibilityShadow,
        aiVisibilitySpecular_reflect,
        aiVisibilitySpecular_transmit,
        aiVisibilitySubsurface,
        aiVisibilityVolume,
        aRRAY,
        auto_,
        bOOL,
        bYTE,
        catclark,
        data,
        dataType,
        driver,
        edge_length,
        filename,
        filter,
        flatness,
        fLOAT,
        infoId,
        infoNode_entry_type,
        iNT,
        linear,
        lPE,
        mATRIX,
        name,
        nODE,
        none,
        object,
        paramType,
        path,
        pin_borders,
        pin_corners,
        pOINTER,
        raster,
        rGB,
        rGBA,
        rotate_about_center,
        rotate_about_origin,
        size,
        smooth,
        step_size,
        uINT,
        userPrefix,
        vECTOR,
        vECTOR2
    })
{
}

TfStaticData<UsdAiTokensType> UsdAiTokens;

PXR_NAMESPACE_CLOSE_SCOPE

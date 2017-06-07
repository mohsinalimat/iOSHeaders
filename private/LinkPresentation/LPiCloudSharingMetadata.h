//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <LinkPresentation/LPSpecializationMetadata.h>

#import <LinkPresentation/LPLinkMetadataPresentationTransformerAdaptor-Protocol.h>
#import <LinkPresentation/LPLinkMetadataPreviewTransformerAdaptor-Protocol.h>

@class LPImage, NSString;

@interface LPiCloudSharingMetadata : LPSpecializationMetadata <LPLinkMetadataPresentationTransformerAdaptor, LPLinkMetadataPreviewTransformerAdaptor>
{
    NSString *_applicationBundleIdenfier;
    NSString *_application;
    NSString *_title;
    LPImage *_icon;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) LPImage *icon; // @synthesize icon=_icon;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *application; // @synthesize application=_application;
@property(copy, nonatomic) NSString *applicationBundleIdenfier; // @synthesize applicationBundleIdenfier=_applicationBundleIdenfier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)previewImageForTransformer:(id)arg1;
- (id)previewSummaryForTransformer:(id)arg1;
- (id)presentationPropertiesForTransformer:(id)arg1;
- (id)computeLocalizedApplicationName;
- (id)computeIcon;

@end


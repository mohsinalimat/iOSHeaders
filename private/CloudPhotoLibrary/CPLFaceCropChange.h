//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLRecordChange.h>

@class NSData, NSString;

@interface CPLFaceCropChange : CPLRecordChange
{
    NSString *_personIdentifier;
    NSData *_resourceData;
    long long _faceCropType;
    NSString *_rejectedPersonIdentifier;
}

@property(copy, nonatomic) NSString *rejectedPersonIdentifier; // @synthesize rejectedPersonIdentifier=_rejectedPersonIdentifier;
@property(nonatomic) long long faceCropType; // @synthesize faceCropType=_faceCropType;
@property(copy, nonatomic) NSData *resourceData; // @synthesize resourceData=_resourceData;
@property(copy, nonatomic) NSString *personIdentifier; // @synthesize personIdentifier=_personIdentifier;
- (void).cxx_destruct;
- (id)propertiesDescription;
- (_Bool)validateChangeWithError:(id *)arg1;
- (_Bool)validateFullRecord;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (_Bool)supportsDirectDeletion;
- (_Bool)supportsDeletion;

@end


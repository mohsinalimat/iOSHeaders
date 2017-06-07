//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDictionary, NSString;

@interface CRKAirDropTransferInfo : NSObject
{
    _Bool _autoAccept;
    _Bool _hideProgress;
    NSString *_senderName;
    NSData *_previewImageData;
    NSString *_bundleID;
    NSArray *_items;
    NSArray *_files;
    NSString *_sourceBundleIdentifier;
    NSString *_itemsDescription;
}

@property(copy, nonatomic) NSString *itemsDescription; // @synthesize itemsDescription=_itemsDescription;
@property(copy, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property(copy, nonatomic) NSArray *files; // @synthesize files=_files;
@property(copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy, nonatomic) NSData *previewImageData; // @synthesize previewImageData=_previewImageData;
@property(copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property(nonatomic) _Bool hideProgress; // @synthesize hideProgress=_hideProgress;
@property(nonatomic) _Bool autoAccept; // @synthesize autoAccept=_autoAccept;
- (void).cxx_destruct;
- (id)description;
@property(readonly, copy, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)addFiles:(id)arg1;
- (void)addItems:(id)arg1;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class DCService, NSString;

@interface DCRelativePath : NSObject
{
    DCService *_service;
    NSString *_string;
    NSString *_firstPathComponent;
}

+ (id)rootForService:(id)arg1;
+ (id)relativePathWithString:(id)arg1 forService:(id)arg2;
@property(readonly, retain) NSString *firstPathComponent; // @synthesize firstPathComponent=_firstPathComponent;
@property(readonly, retain) DCService *service; // @synthesize service=_service;
@property(readonly, retain) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)relativePathForAssetType:(id)arg1 withUnderlyingItemDocumentIdentifier:(id)arg2;
- (_Bool)isRoot;
- (id)relativePathByAppendingPath:(id)arg1;
- (id)relativePathByAppendingPathComponent:(id)arg1;
- (id)relativePathByDeletingLastPathComponent;
@property(readonly, retain) NSString *lastPathComponent;
- (id)metadataPath;

@end


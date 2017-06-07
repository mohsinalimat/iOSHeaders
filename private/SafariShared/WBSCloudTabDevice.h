//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/NSCopying-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;

@interface WBSCloudTabDevice : NSObject <NSCopying>
{
    _Bool _closeRequestSupported;
    _Bool _hasDuplicateName;
    _Bool _ephemeralDevice;
    NSString *_name;
    NSString *_uuid;
    NSArray *_tabs;
    NSDate *_lastModified;
}

+ (_Bool)isEphemeralDeviceInDictionary:(id)arg1;
+ (_Bool)hasDuplicateDeviceNameInDictionary:(id)arg1;
+ (id)lastModifiedDateInDictionary:(id)arg1;
+ (id)deviceNameInDictionary:(id)arg1;
+ (unsigned long long)tabCountInDictionary:(id)arg1;
+ (_Bool)isCloudTabDeviceDictionary:(id)arg1;
+ (id)_dictionaryWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 isEphemeralDevice:(_Bool)arg5;
@property(readonly, nonatomic) NSDate *lastModified; // @synthesize lastModified=_lastModified;
@property(readonly, copy, nonatomic) NSArray *tabs; // @synthesize tabs=_tabs;
@property(readonly, copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(readonly, nonatomic, getter=isEphemeralDevice) _Bool ephemeralDevice; // @synthesize ephemeralDevice=_ephemeralDevice;
@property(readonly, nonatomic) _Bool hasDuplicateName; // @synthesize hasDuplicateName=_hasDuplicateName;
@property(readonly, nonatomic, getter=isCloseRequestSupported) _Bool closeRequestSupported; // @synthesize closeRequestSupported=_closeRequestSupported;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)deviceByRemovingTabs:(id)arg1;
- (id)deviceByRemovingTab:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 uuid:(id)arg5 isEphemeralDevice:(_Bool)arg6;
- (id)initWithDeviceName:(id)arg1 lastModified:(id)arg2 hasDuplicateName:(_Bool)arg3 tabs:(id)arg4 uuid:(id)arg5;
- (id)initWithDictionary:(id)arg1 uuid:(id)arg2;

@end


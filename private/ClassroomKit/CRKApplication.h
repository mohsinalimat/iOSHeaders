//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSData, NSString;

@interface CRKApplication : NSObject <NSSecureCoding>
{
    NSString *_bundleIdentifier;
    NSString *_name;
    NSData *_iconData;
    NSData *_badgeIconData;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *badgeIconData; // @synthesize badgeIconData=_badgeIconData;
@property(retain, nonatomic) NSData *iconData; // @synthesize iconData=_iconData;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstalledApplication:(id)arg1;

@end


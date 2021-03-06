//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableOrderedSet;

@interface UIPasteConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    NSMutableOrderedSet *_acceptableTypes;
}

+ (_Bool)supportsSecureCoding;
+ (id)pasteConfigurationWithAcceptableTypes:(id)arg1;
+ (id)_pasteConfigurationForAcceptingClasses:(id)arg1;
+ (id)pasteConfigurationForAcceptingClasses:(id)arg1;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSArray *acceptableTypes; // @dynamic acceptableTypes;
@property(copy, nonatomic) NSArray *acceptableTypeIdentifiers; // @dynamic acceptableTypeIdentifiers;
- (id)initWithAcceptableTypes:(id)arg1;
- (id)initWithAcceptableTypeIdentifiers:(id)arg1;
- (void)addTypeIdentifiersForAcceptingClass:(Class)arg1;
- (id)initWithTypeIdentifiersForAcceptingClass:(Class)arg1;
- (void)addAcceptableTypeIdentifiers:(id)arg1;
- (id)init;

@end


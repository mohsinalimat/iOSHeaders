//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSBundle, NSLock, NSMutableDictionary;

@interface CATLocalizationHelper : NSObject
{
    NSMutableDictionary *mStringByKeyByTableName;
    NSLock *mLock;
    NSBundle *_bundle;
}

+ (id)helperForBundle:(id)arg1;
@property(readonly, nonatomic) __weak NSBundle *bundle; // @synthesize bundle=_bundle;
- (void).cxx_destruct;
- (id)stringsForKey:(id)arg1 value:(id)arg2 table:(id)arg3;
- (id)stringByKeyForTableName:(id)arg1;
- (id)initWithBundle:(id)arg1;

@end


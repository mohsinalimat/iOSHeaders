//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iTunesStoreUI/SUScriptObject.h>

@class NSNumber, NSString, SSMutableURLRequestProperties;

@interface SUScriptURLRequest : SUScriptObject
{
    SSMutableURLRequestProperties *_requestProperties;
}

+ (void)initialize;
+ (id)webScriptNameForKeyName:(id)arg1;
- (id)scriptAttributeKeys;
- (id)attributeKeys;
@property(copy) id URLs;
@property(copy) NSString *URLBagKey;
@property(copy) NSNumber *timeoutInterval;
- (id)_className;
- (id)copyNativeRequestProperties;
- (void)dealloc;
- (id)initWithNativeRequestProperties:(id)arg1;
- (id)init;

@end


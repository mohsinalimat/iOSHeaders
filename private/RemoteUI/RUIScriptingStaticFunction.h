//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface RUIScriptingStaticFunction : NSObject
{
    int _JSPropertyAttributes;
    const char *_identifier;
    CDUnknownFunctionPointerType _function;
}

@property(nonatomic) int JSPropertyAttributes; // @synthesize JSPropertyAttributes=_JSPropertyAttributes;
@property(nonatomic) CDUnknownFunctionPointerType function; // @synthesize function=_function;
@property(nonatomic) const char *identifier; // @synthesize identifier=_identifier;
- (id)description;

@end


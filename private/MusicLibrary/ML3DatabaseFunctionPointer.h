//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3DatabaseFunction.h>

@interface ML3DatabaseFunctionPointer : ML3DatabaseFunction
{
    CDUnknownFunctionPointerType _functionPointer;
    void *_userData;
}

@property(nonatomic) void *userData; // @synthesize userData=_userData;
@property(nonatomic) CDUnknownFunctionPointerType functionPointer; // @synthesize functionPointer=_functionPointer;
- (_Bool)registerWithConnection:(id)arg1;

@end


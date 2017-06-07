//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class IKViewElementStyle, IKViewElementStyleComposer, NSDictionary, NSString;

@interface IKTemplateTreeNode : NSObject
{
    IKTemplateTreeNode *_parentNode;
    NSString *_nodeName;
    IKViewElementStyle *_styleOverrides;
    NSDictionary *_childNodes;
    IKViewElementStyleComposer *_styleComposer;
}

@property(retain, nonatomic) IKViewElementStyleComposer *styleComposer; // @synthesize styleComposer=_styleComposer;
@property(copy, nonatomic) NSDictionary *childNodes; // @synthesize childNodes=_childNodes;
@property(readonly, copy, nonatomic) IKViewElementStyle *styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property(readonly, copy, nonatomic) NSString *nodeName; // @synthesize nodeName=_nodeName;
@property(readonly, nonatomic) __weak IKTemplateTreeNode *parentNode; // @synthesize parentNode=_parentNode;
- (void).cxx_destruct;
- (id)initWithNodeName:(id)arg1 styleOverrides:(id)arg2 parentNode:(id)arg3;

@end


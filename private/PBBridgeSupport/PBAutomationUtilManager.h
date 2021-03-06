//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface PBAutomationUtilManager : NSObject
{
    _Bool _timeoutQueued;
    int _readyForPairingProcess;
    NSArray *_removeList;
    NSDictionary *_automationPreferences;
    NSMutableArray *_incorrectClasses;
    NSMutableDictionary *_blocksToRunLater;
    NSMutableDictionary *_numbTimesVisitedView;
    NSMutableDictionary *_notificationToPath;
    NSMutableSet *_notificationsWaitingOn;
    NSMutableDictionary *_classInformation;
    NSMutableArray *_nodes;
    NSMutableArray *_edges;
}

+ (id)viewFromKeyword:(id)arg1 andConnectionWeight:(double)arg2;
+ (id)viewInClass:(id)arg1 andSubClass:(id)arg2 andViewName:(id)arg3 andConnectionWeight:(double)arg4;
+ (_Bool)PBAutomationUseModifiedFlow;
+ (_Bool)PBAutomationTesting;
+ (_Bool)COSGenerateDocumentation;
+ (id)sharedAutomationUtilManager;
@property(retain) NSMutableArray *edges; // @synthesize edges=_edges;
@property(retain) NSMutableArray *nodes; // @synthesize nodes=_nodes;
@property(retain) NSMutableDictionary *classInformation; // @synthesize classInformation=_classInformation;
@property _Bool timeoutQueued; // @synthesize timeoutQueued=_timeoutQueued;
@property(retain) NSMutableSet *notificationsWaitingOn; // @synthesize notificationsWaitingOn=_notificationsWaitingOn;
@property(retain) NSMutableDictionary *notificationToPath; // @synthesize notificationToPath=_notificationToPath;
@property(retain) NSMutableDictionary *numbTimesVisitedView; // @synthesize numbTimesVisitedView=_numbTimesVisitedView;
@property(retain) NSMutableDictionary *blocksToRunLater; // @synthesize blocksToRunLater=_blocksToRunLater;
@property int readyForPairingProcess; // @synthesize readyForPairingProcess=_readyForPairingProcess;
@property(retain) NSMutableArray *incorrectClasses; // @synthesize incorrectClasses=_incorrectClasses;
@property(retain) NSDictionary *automationPreferences; // @synthesize automationPreferences=_automationPreferences;
@property(retain) NSArray *removeList; // @synthesize removeList=_removeList;
- (void).cxx_destruct;
- (void)takeScreenshot:(id)arg1 andView:(id)arg2;
- (void)takeScreenshot:(id)arg1 andViewController:(id)arg2;
- (void)generateDocumentation:(id)arg1;
- (id)orderPList:(id)arg1;
- (id)documentation;
- (id)documentationMap;
- (void)updateNodeExpectedNumbClicks;
- (id)findPathForRandomPList:(id)arg1;
- (void)createEdges:(id)arg1;
- (void)createNodes;
- (void)expandClassInformation;
- (id)parseNodeString:(id)arg1;
- (id)getEdge:(id)arg1 andSubViewName:(id)arg2 andSpecificViewName:(id)arg3 andEndViewName:(id)arg4 andEndSubViewName:(id)arg5 andEndSpecificViewName:(id)arg6 andButtonName:(id)arg7 andWeight:(id)arg8;
- (id)getNode:(id)arg1 andSubViewName:(id)arg2 andSpecificViewName:(id)arg3;
- (id)getNode:(id)arg1 andParentName:(id)arg2 andViewName:(id)arg3 andDocumentationDescription:(id)arg4;
- (void)seeIfReadyForThePairingProcess;
- (void)postDarwinNotification:(struct __CFString *)arg1;
- (void)storeBlockForLater:(CDUnknownBlockType)arg1 forPath:(id)arg2;
- (void)callbackReceived:(id)arg1 andAQuickFixParameter:(_Bool)arg2;
- (_Bool)waitingOnNotifications:(id)arg1;
- (void)runBlock:(CDUnknownBlockType)arg1 forPath:(id)arg2 andAQuickFixParameter:(_Bool)arg3;
- (void)executeBlock:(id)arg1 fromViewPath:(id)arg2;
- (id)getNextTextFields:(id)arg1 andView:(id)arg2;
- (id)getNextButton:(id)arg1 andView:(id)arg2;
- (id)parseViewPath:(id)arg1;
- (void)callTimeout;
- (id)subViewsTypeConvert:(id)arg1;
- (id)viewAndActionsTypeConvert:(id)arg1;
- (void)checkPList;
- (void)throwError;
- (id)checkClass:(id)arg1;
- (void)addClass:(id)arg1;
- (void)signUpForNotifications;
- (_Bool)isRemoved:(id)arg1;
- (void)cleanUpAndEndAutomationProcess;
- (void)updatePList;
- (void)updatePListWithoutNotification;
- (id)init;

@end


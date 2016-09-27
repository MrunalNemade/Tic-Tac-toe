//
//  ViewController.h
//  MNTicTacToe
//
//  Created by Mrunalini on 21/09/16.
//  Copyright © 2016 MrunalIni Nemade. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int numberOfTurns,currentPlayer;
    BOOL isGameFinished;
    
    NSArray *winningCombinations;
    NSMutableArray *currentState;
    

}

- (IBAction)buttonTap:(id)sender;


@end


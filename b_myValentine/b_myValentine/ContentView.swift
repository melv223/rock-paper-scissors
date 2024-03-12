//
//  ContentView.swift
//  b_myValentine
//
//  Created by Melvin Estudillo on 2/17/24.
//

import SwiftUI
import UIKit

struct ContentView: View {
    var body: some View {
        VStack(spacing: 9.0) {
            Image(systemName: "globe")
                .imageScale(.large)
                .foregroundColor(.accentColor)
            Text("What is the meaning of this!")
            let action = UIAction(title: "Title") {handler: print("Hello")
            }
            Rectangle()
                .frame(width: 100, height: 100) // Set the size of the box
                .foregroundColor(Color.blue)    // Set the fill color of the box
                .padding(0.0)
        }
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
